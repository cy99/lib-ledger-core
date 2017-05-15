// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from locale.djinni

#ifndef DJINNI_GENERATED_LOCALE_HPP
#define DJINNI_GENERATED_LOCALE_HPP

#include "../../api/Locale.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class Locale final {
public:
    using CppType = ::ledger::core::api::Locale;
    using JniType = jobject;

    using Boxed = Locale;

    ~Locale();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    Locale();
    friend ::djinni::JniClass<Locale>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/Locale") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V") };
    const jfieldID field_DecimalSeparator { ::djinni::jniGetFieldID(clazz.get(), "DecimalSeparator", "Ljava/lang/String;") };
    const jfieldID field_ThousandsSeparator { ::djinni::jniGetFieldID(clazz.get(), "ThousandsSeparator", "Ljava/lang/String;") };
    const jfieldID field_IsPrefixedByCurrencySymbol { ::djinni::jniGetFieldID(clazz.get(), "IsPrefixedByCurrencySymbol", "Z") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_LOCALE_HPP
