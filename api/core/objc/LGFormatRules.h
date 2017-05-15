// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from amount.djinni

#import "LGRoundingMode.h"
#import <Foundation/Foundation.h>

@interface LGFormatRules : NSObject
- (nonnull instancetype)initWithRoundingMode:(LGRoundingMode)roundingMode
                         maxNumberOfDecimals:(int32_t)maxNumberOfDecimals;
+ (nonnull instancetype)FormatRulesWithRoundingMode:(LGRoundingMode)roundingMode
                                maxNumberOfDecimals:(int32_t)maxNumberOfDecimals;

@property (nonatomic, readonly) LGRoundingMode roundingMode;

@property (nonatomic, readonly) int32_t maxNumberOfDecimals;

@end
