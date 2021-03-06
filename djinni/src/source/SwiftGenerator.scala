package djnni
import djinni.{Generator, SwiftMarshal, writer}
import djinni.ast.{Enum, _}
import djinni.generatorTools.Spec
import djinni.meta._
import java.nio.file.Path;
import java.nio.file.Paths;

/**
  *
  * SwiftGenerator
  * src
  *
  * Created by Pierre Pollastri on 03/10/2016.
  *
  * The MIT License (MIT)
  *
  * Copyright (c) 2016 Ledger
  *
  * Permission is hereby granted, free of charge, to any person obtaining a copy
  * of this software and associated documentation files (the "Software"), to deal
  * in the Software without restriction, including without limitation the rights
  * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  * copies of the Software, and to permit persons to whom the Software is
  * furnished to do so, subject to the following conditions:
  *
  * The above copyright notice and this permission notice shall be included in all
  * copies or substantial portions of the Software.
  *
  * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  * SOFTWARE.
  *
  */
class SwiftGenerator(spec: Spec) extends Generator(spec) {

  private val marshal = new SwiftMarshal(spec)

  override def generateEnum(origin: String, ident: Ident, doc: Doc, e: Enum): Unit = {
    // NOOP
  }

  override def generateInterface(origin: String, ident: Ident, doc: Doc, typeParams: Seq[TypeParam], i: Interface): Unit = {
    if (!i.ext.swift) return
    val className = marshal.typename(ident, i)
    val objcClassName = marshal.objcTypename(ident, i)
    createFile(spec.swiftOutFolder.get, ident.name + ".swift", {(w: writer.IndentWriter) =>
      w.wl("// AUTOGENERATED FILE - DO NOT MODIFY!")
      w.wl("// This file generated by Djinni from " + origin)
      w.wl("import Foundation")
      w.wl("")
      w.w(s"final class $className: NSObject, $objcClassName")
      w.braced {
        // Listener blocks
        i.methods foreach { method =>
          val params = method.params.map(x => marshal.paramType(x.ty.resolved)).mkString(", ")
          val methodName = method.ident.name + "Block"
          val returnType = marshal.returnType(method.ret)
          assert(!method.ret.exists { x =>
            x.resolved.base match {
              case MOptional =>
                false
              case other => true
            }
          }, "Swift interfaces can only return optional types")
          w.wl(s"private var $methodName: (($params) -> $returnType)?")
        }
        // Listener setters
        i.methods foreach { method =>
          w.wl
          val params = method.params.map(x => marshal.paramType(x.ty.resolved)).mkString(", ")
          val methodName = "set" + method.ident.name.capitalize
          val varName = method.ident.name + "Block"
          val returnType = marshal.returnType(method.ret)
          w.w(s"func $methodName(_ block: @escaping ($params) -> $returnType) -> $className")
          w.braced {
            w.wl(s"self.$varName = block")
            w.wl("return self")
          }
        }
        // Listener protocol implementation
        i.methods foreach { method =>
          w.wl
          var isFirst = true
          val params = method.params.map({x =>
            val result = (if (isFirst) "_ " else "") + x.ident.name + ": " + marshal.paramType(x.ty.resolved)
            isFirst = false
            result
          }).mkString(", ")
          val vars = method.params.map(_.ident.name).mkString(", ")
          val methodName = method.ident.name
          val varName = method.ident.name + "Block"
          val returnType = marshal.returnType(method.ret)
          w.w(s"func $methodName($params) -> $returnType")
          w.braced {
            if (method.ret.isDefined) {
              w.wl(s"return self.$varName?($vars)")
            } else {
              w.wl(s"self.$varName?($vars)")
            }

          }
        }
      }
    })
  }

  /*
  import Foundation

final class Callback: NSObject, LGMyObjectCallback {

    private var onChanged: ((String) -> Void)?

    func callback1(_ block: @escaping (String) -> Void) -> Callback {
        self.callback1 = block
        return self
    }

    func onChanged(test: String) {
        self.callback1?(test)
    }

}
   */

  override def generateRecord(origin: String, ident: Ident, doc: Doc, params: Seq[TypeParam], r: Record): Unit = {
    // NOOP
  }

  override def generate(idl: Seq[TypeDecl]): Unit = {
    super.generate(idl)
    if (spec.objcOutFolder.isEmpty) return
    // Generate the umbrella file
    val filename = if (spec.swiftUmbrellaHeaderFilename.endsWith(".h")) spec.swiftUmbrellaHeaderFilename else spec.swiftUmbrellaHeaderFilename + ".h"
    createFile(spec.swiftOutFolder.get, filename, { (w: writer.IndentWriter) =>
      w.wl("// AUTOGENERATED FILE - DO NOT MODIFY!")
      w.wl("// This file generated by Djinni")
      val DEFINE_H = "UMBRELLA_" + spec.cppIdentStyle.const(filename).map(x => if (x.isLetter) x else '_')
      w.wl(s"#ifndef $DEFINE_H")
      w.wl(s"#define $DEFINE_H")
      idl foreach {(decl) =>
        var filePath = spec.objcFileIdentStyle(decl.ident.name) + ".h"
        if (spec.swiftOutFolder != spec.objcOutFolder) {
          val pathAbsolute = Paths.get(spec.objcOutFolder.get.getAbsolutePath)
          val pathBase = Paths.get(spec.swiftOutFolder.get.getAbsolutePath)
          val pathRelative = pathBase.relativize(pathAbsolute)
          filePath = pathRelative + "/" + filePath
        }
        w.wl(s"#import ${"\"" + filePath + "\""}")
      }
      w.wl(s"#endif $DEFINE_H")
    })
  }
}
