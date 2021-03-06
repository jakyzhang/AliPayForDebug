//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VZFAsyncDrawingTransaction : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    NSMutableArray *_operations;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completionBlock;
    unsigned long long _state;
}

@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;
- (void)_ensureTransactionData;
- (void)commit;
- (void)cancel;
- (void)addSyncDrawingOperation:(CDUnknownBlockType)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithCallbackQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

