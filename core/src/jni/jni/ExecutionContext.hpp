// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.idl

#pragma once

#include "../../api/ExecutionContext.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class ExecutionContext final : ::djinni::JniInterface<::ExecutionContext, ExecutionContext> {
public:
    using CppType = std::shared_ptr<::ExecutionContext>;
    using CppOptType = std::shared_ptr<::ExecutionContext>;
    using JniType = jobject;

    using Boxed = ExecutionContext;

    ~ExecutionContext();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<ExecutionContext>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<ExecutionContext>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    ExecutionContext();
    friend ::djinni::JniClass<ExecutionContext>;
    friend ::djinni::JniInterface<::ExecutionContext, ExecutionContext>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ExecutionContext
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void execute(const std::shared_ptr<::Runnable> & runnable) override;

    private:
        friend ::djinni::JniInterface<::ExecutionContext, ::djinni_generated::ExecutionContext>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/ExecutionContext") };
    const jmethodID method_execute { ::djinni::jniGetMethodID(clazz.get(), "execute", "(Lco/ledger/core/Runnable;)V") };
};

}  // namespace djinni_generated
