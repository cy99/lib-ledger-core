// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_common_interface.djinni

#include "WalletCommonInterface.hpp"  // my header
#include "Amount.hpp"
#include "BitcoinLikeWallet.hpp"
#include "CryptoCurrencyDescription.hpp"
#include "EthereumLikeWallet.hpp"
#include "Marshal.hpp"
#include "Preferences.hpp"
#include "WalletType.hpp"

namespace djinni_generated {

WalletCommonInterface::WalletCommonInterface() : ::djinni::JniInterface<::ledger::core::api::WalletCommonInterface, WalletCommonInterface>("co/ledger/core/WalletCommonInterface$CppProxy") {}

WalletCommonInterface::~WalletCommonInterface() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::WalletCommonInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1getIdentifier(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->getIdentifier();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1getWalletName(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->getWalletName();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1getCrypoCurrencyDescription(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->getCrypoCurrencyDescription();
        return ::djinni::release(::djinni_generated::CryptoCurrencyDescription::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1getWalletType(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->getWalletType();
        return ::djinni::release(::djinni_generated::WalletType::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1getTotalBalance(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->getTotalBalance();
        return ::djinni::release(::djinni_generated::Amount::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1getAccountsCount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->getAccountsCount();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1getAccountBalances(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->getAccountBalances();
        return ::djinni::release(::djinni::List<::djinni_generated::Amount>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1getOperationsCount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->getOperationsCount();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1getAccountOperationsCount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->getAccountOperationsCount();
        return ::djinni::release(::djinni::List<::djinni::I32>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1getPreferences(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->getPreferences();
        return ::djinni::release(::djinni_generated::Preferences::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1getSynchronizedPreferences(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->getSynchronizedPreferences();
        return ::djinni::release(::djinni_generated::Preferences::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1asInstanceOfBitcoinWallet(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->asInstanceOfBitcoinWallet();
        return ::djinni::release(::djinni_generated::BitcoinLikeWallet::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletCommonInterface_00024CppProxy_native_1asInstanceOfEthereumWallet(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletCommonInterface>(nativeRef);
        auto r = ref->asInstanceOfEthereumWallet();
        return ::djinni::release(::djinni_generated::EthereumLikeWallet::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated