//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FMLLoggerProtocol <NSObject>
- (void)logErrorWithFilename:(const char *)arg1 lineNumber:(int)arg2 method:(const char *)arg3 message:(NSString *)arg4;
- (void)logWarningWithFilename:(const char *)arg1 lineNumber:(int)arg2 method:(const char *)arg3 message:(NSString *)arg4;
- (void)logInfoWithFilename:(const char *)arg1 lineNumber:(int)arg2 method:(const char *)arg3 message:(NSString *)arg4;
- (void)logDebugWithFilename:(const char *)arg1 lineNumber:(int)arg2 method:(const char *)arg3 message:(NSString *)arg4;
@end

