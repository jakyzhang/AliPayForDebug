//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface APTSDBLogger : NSObject
{
    _Bool _isSamplingUser;
    NSMutableDictionary *_appendLogMap;
    NSMutableDictionary *_appendErrorLogMap;
    NSOperationQueue *_logQueue;
    long long _operationCount;
    double _lastReportTime;
}

+ (id)constructDicFromBiz:(id)arg1 context:(id)arg2 optType:(unsigned long long)arg3 params:(id)arg4;
+ (id)dicFromAppendErrorItem:(id)arg1;
+ (id)dicFromAppendItem:(id)arg1;
+ (void)uploadViaID:(id)arg1 params:(id)arg2;
+ (id)shareInstance;
+ (void)writeErrorLogWithBiz:(id)arg1 context:(id)arg2 optType:(unsigned long long)arg3 optCode:(unsigned long long)arg4;
+ (void)writeLogWithBiz:(id)arg1 context:(id)arg2 optType:(unsigned long long)arg3 params:(id)arg4;
+ (void)writeLogWithBiz:(id)arg1 context:(id)arg2 optType:(unsigned long long)arg3 optCode:(unsigned long long)arg4 params:(id)arg5;
@property(nonatomic) double lastReportTime; // @synthesize lastReportTime=_lastReportTime;
@property(nonatomic) _Bool isSamplingUser; // @synthesize isSamplingUser=_isSamplingUser;
@property(nonatomic) long long operationCount; // @synthesize operationCount=_operationCount;
@property(retain, nonatomic) NSOperationQueue *logQueue; // @synthesize logQueue=_logQueue;
@property(retain, nonatomic) NSMutableDictionary *appendErrorLogMap; // @synthesize appendErrorLogMap=_appendErrorLogMap;
@property(retain, nonatomic) NSMutableDictionary *appendLogMap; // @synthesize appendLogMap=_appendLogMap;
- (void).cxx_destruct;
- (void)uploadMergedLog;
- (void)checkMergedLog;
- (void)addToErrorLogPoolWithBiz:(id)arg1 context:(id)arg2 optCode:(unsigned long long)arg3;
- (void)addToAppendLogPoolWithBiz:(id)arg1 context:(id)arg2 optType:(unsigned long long)arg3 params:(id)arg4;
- (void)dealloc;
- (id)init;

@end

