// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from encrypt.djinni

#import "TXSSourceData.h"
#import <Foundation/Foundation.h>
@class TXSDataProcessor;
@protocol TXSProcessCallBack;


@interface TXSDataProcessor : NSObject

+ (nullable TXSDataProcessor *)create;

- (void)process:(nonnull TXSSourceData *)data
       callback:(nullable id<TXSProcessCallBack>)callback;

@end
