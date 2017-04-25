// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#import <Foundation/Foundation.h>

/** Selects the keychain engine (P2PKH, P2SH...) */
extern NSString * __nonnull const LGConfigurationKEYCHAINENGINE;
/** Sets the derivation scheme for the KEYCHAIN (defaults 44'/<coin_type>'/<account>'/<node>/<index>) */
extern NSString * __nonnull const LGConfigurationKEYCHAINDERIVATIONSCHEME;
/** Sets the observable range for HD keychains (BIP32 based) */
extern NSString * __nonnull const LGConfigurationKEYCHAINOBSERVABLERANGE;
/** Selects the blockchain explorer engine (Ledger's API, Electrum server, RPC) */
extern NSString * __nonnull const LGConfigurationBLOCKCHAINEXPLORERENGINE;
/** Sets the API endpoint for API based engine (Ledger's API) */
extern NSString * __nonnull const LGConfigurationBLOCKCHAINEXPLORERAPIENDPOINT;
/** Selects the blockchain observer engine (Ledger's API) */
extern NSString * __nonnull const LGConfigurationBLOCKCHAINOBSERVERENGINE;
/** Selects the synchronization engine */
extern NSString * __nonnull const LGConfigurationSYNCHRONIZATIONENGINE;

@interface LGConfiguration : NSObject

@end
