// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from errors.djinni

#include "ErrorCode.hpp"  // my header

namespace ledger { namespace core { namespace api {

std::string to_string(const ErrorCode& errorCode) {
    switch (errorCode) {
        case ErrorCode::UNKNOWN_NETWORK_PARAMETERS: return "UNKNOWN_NETWORK_PARAMETERS";
        case ErrorCode::WALLET_NOT_FOUND: return "WALLET_NOT_FOUND";
        case ErrorCode::RAW_TRANSACTION_NOT_FOUND: return "RAW_TRANSACTION_NOT_FOUND";
        case ErrorCode::CANCELLED_BY_USER: return "CANCELLED_BY_USER";
        case ErrorCode::INVALID_BASE58_FORMAT: return "INVALID_BASE58_FORMAT";
        case ErrorCode::INVALID_CHECKSUM: return "INVALID_CHECKSUM";
        case ErrorCode::INVALID_VERSION: return "INVALID_VERSION";
        case ErrorCode::PRIVATE_DERIVATION_NOT_SUPPORTED: return "PRIVATE_DERIVATION_NOT_SUPPORTED";
        case ErrorCode::INVALID_NETWORK_ADDRESS_VERSION: return "INVALID_NETWORK_ADDRESS_VERSION";
        case ErrorCode::RUNTIME_ERROR: return "RUNTIME_ERROR";
        case ErrorCode::OUT_OF_RANGE: return "OUT_OF_RANGE";
        case ErrorCode::ILLEGAL_ARGUMENT: return "ILLEGAL_ARGUMENT";
        case ErrorCode::ILLEGAL_STATE: return "ILLEGAL_STATE";
        case ErrorCode::NULL_POINTER: return "NULL_POINTER";
        case ErrorCode::UNSUPPORTED_OPERATION: return "UNSUPPORTED_OPERATION";
        case ErrorCode::UNKNOWN: return "UNKNOWN";
        case ErrorCode::IMPLEMENTATION_IS_MISSING: return "IMPLEMENTATION_IS_MISSING";
        case ErrorCode::FUTURE_WAS_SUCCESSFULL: return "FUTURE_WAS_SUCCESSFULL";
        case ErrorCode::ALREADY_COMPLETED: return "ALREADY_COMPLETED";
        case ErrorCode::NO_SUCH_ELEMENT: return "NO_SUCH_ELEMENT";
        case ErrorCode::UNABLE_TO_OPEN_LEVELDB: return "UNABLE_TO_OPEN_LEVELDB";
        case ErrorCode::NO_INTERNET_CONNECTIVITY: return "NO_INTERNET_CONNECTIVITY";
        case ErrorCode::UNABLE_TO_RESOLVE_HOST: return "UNABLE_TO_RESOLVE_HOST";
        case ErrorCode::UNABLE_TO_CONNECT_TO_HOST: return "UNABLE_TO_CONNECT_TO_HOST";
        case ErrorCode::HTTP_ERROR: return "HTTP_ERROR";
        case ErrorCode::SSL_ERROR: return "SSL_ERROR";
        case ErrorCode::TOO_MANY_REDIRECT: return "TOO_MANY_REDIRECT";
        case ErrorCode::AUTHENTICATION_REQUIRED: return "AUTHENTICATION_REQUIRED";
        case ErrorCode::HTTP_TIMEOUT: return "HTTP_TIMEOUT";
        case ErrorCode::PROXY_ERROR: return "PROXY_ERROR";
        case ErrorCode::API_ERROR: return "API_ERROR";
        case ErrorCode::TRANSACTION_NOT_FOUND: return "TRANSACTION_NOT_FOUND";
        case ErrorCode::INVALID_DATE_FORMAT: return "INVALID_DATE_FORMAT";
        case ErrorCode::INVALID_DERIVATION_SCHEME: return "INVALID_DERIVATION_SCHEME";
    };
};

std::ostream &operator<<(std::ostream &os, const ErrorCode &o)
{
    switch (o) {
        case ErrorCode::UNKNOWN_NETWORK_PARAMETERS:  return os << "UNKNOWN_NETWORK_PARAMETERS";
        case ErrorCode::WALLET_NOT_FOUND:  return os << "WALLET_NOT_FOUND";
        case ErrorCode::RAW_TRANSACTION_NOT_FOUND:  return os << "RAW_TRANSACTION_NOT_FOUND";
        case ErrorCode::CANCELLED_BY_USER:  return os << "CANCELLED_BY_USER";
        case ErrorCode::INVALID_BASE58_FORMAT:  return os << "INVALID_BASE58_FORMAT";
        case ErrorCode::INVALID_CHECKSUM:  return os << "INVALID_CHECKSUM";
        case ErrorCode::INVALID_VERSION:  return os << "INVALID_VERSION";
        case ErrorCode::PRIVATE_DERIVATION_NOT_SUPPORTED:  return os << "PRIVATE_DERIVATION_NOT_SUPPORTED";
        case ErrorCode::INVALID_NETWORK_ADDRESS_VERSION:  return os << "INVALID_NETWORK_ADDRESS_VERSION";
        case ErrorCode::RUNTIME_ERROR:  return os << "RUNTIME_ERROR";
        case ErrorCode::OUT_OF_RANGE:  return os << "OUT_OF_RANGE";
        case ErrorCode::ILLEGAL_ARGUMENT:  return os << "ILLEGAL_ARGUMENT";
        case ErrorCode::ILLEGAL_STATE:  return os << "ILLEGAL_STATE";
        case ErrorCode::NULL_POINTER:  return os << "NULL_POINTER";
        case ErrorCode::UNSUPPORTED_OPERATION:  return os << "UNSUPPORTED_OPERATION";
        case ErrorCode::UNKNOWN:  return os << "UNKNOWN";
        case ErrorCode::IMPLEMENTATION_IS_MISSING:  return os << "IMPLEMENTATION_IS_MISSING";
        case ErrorCode::FUTURE_WAS_SUCCESSFULL:  return os << "FUTURE_WAS_SUCCESSFULL";
        case ErrorCode::ALREADY_COMPLETED:  return os << "ALREADY_COMPLETED";
        case ErrorCode::NO_SUCH_ELEMENT:  return os << "NO_SUCH_ELEMENT";
        case ErrorCode::UNABLE_TO_OPEN_LEVELDB:  return os << "UNABLE_TO_OPEN_LEVELDB";
        case ErrorCode::NO_INTERNET_CONNECTIVITY:  return os << "NO_INTERNET_CONNECTIVITY";
        case ErrorCode::UNABLE_TO_RESOLVE_HOST:  return os << "UNABLE_TO_RESOLVE_HOST";
        case ErrorCode::UNABLE_TO_CONNECT_TO_HOST:  return os << "UNABLE_TO_CONNECT_TO_HOST";
        case ErrorCode::HTTP_ERROR:  return os << "HTTP_ERROR";
        case ErrorCode::SSL_ERROR:  return os << "SSL_ERROR";
        case ErrorCode::TOO_MANY_REDIRECT:  return os << "TOO_MANY_REDIRECT";
        case ErrorCode::AUTHENTICATION_REQUIRED:  return os << "AUTHENTICATION_REQUIRED";
        case ErrorCode::HTTP_TIMEOUT:  return os << "HTTP_TIMEOUT";
        case ErrorCode::PROXY_ERROR:  return os << "PROXY_ERROR";
        case ErrorCode::API_ERROR:  return os << "API_ERROR";
        case ErrorCode::TRANSACTION_NOT_FOUND:  return os << "TRANSACTION_NOT_FOUND";
        case ErrorCode::INVALID_DATE_FORMAT:  return os << "INVALID_DATE_FORMAT";
        case ErrorCode::INVALID_DERIVATION_SCHEME:  return os << "INVALID_DERIVATION_SCHEME";
    }
}

} } }  // namespace ledger::core::api
