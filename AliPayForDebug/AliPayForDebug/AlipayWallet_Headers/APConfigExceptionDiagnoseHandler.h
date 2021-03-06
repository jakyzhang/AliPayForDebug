//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FLExceptionDiagnoseHandler.h"

@class APConfigDiagnoseLRUCache, NSObject;
@protocol OS_dispatch_queue;

@interface APConfigExceptionDiagnoseHandler : FLExceptionDiagnoseHandler
{
    _Bool _isNeedDiagnose;
    APConfigDiagnoseLRUCache *_trakerCache;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) APConfigDiagnoseLRUCache *trakerCache; // @synthesize trakerCache=_trakerCache;
@property(nonatomic) _Bool isNeedDiagnose; // @synthesize isNeedDiagnose=_isNeedDiagnose;
- (void).cxx_destruct;
- (void)monitorConfigWithKey:(id)arg1 value:(id)arg2;
- (void)receiveConfigMonitor:(id)arg1;
- (id)getResult;
- (void)onEnd:(id)arg1;
- (void)onStart:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1;

@end

