//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANXOrderPrinterMonitor : NSObject
{
}

+ (id)extParams;
+ (void)monitorWithParams:(id)arg1 actionId:(id)arg2;
+ (void)monitorWithParams:(id)arg1;
+ (void)logEventId:(id)arg1 actionType:(id)arg2 status:(id)arg3;
+ (void)logTransEvent:(id)arg1 success:(_Bool)arg2;
+ (void)logConnectBLECnt:(id)arg1 success:(_Bool)arg2;
+ (void)logGetPrintCmd:(_Bool)arg1;
+ (void)logRcvOrder;
+ (void)logDisConnectBLE:(_Bool)arg1;
+ (void)logBLEWriteCmd:(id)arg1 success:(_Bool)arg2;
+ (void)logConnectBLE:(id)arg1 success:(_Bool)arg2;
+ (void)logJSAPICall:(id)arg1 success:(_Bool)arg2;

@end
