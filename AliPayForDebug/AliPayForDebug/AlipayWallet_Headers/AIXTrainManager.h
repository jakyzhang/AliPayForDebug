//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SyncDownCallback-Protocol.h"

@class NSMutableArray, NSOperationQueue, NSString;

@interface AIXTrainManager : NSObject <SyncDownCallback>
{
    NSOperationQueue *_queueForTrain;
    NSMutableArray *_runingTasks;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *runingTasks; // @synthesize runingTasks=_runingTasks;
@property(retain, nonatomic) NSOperationQueue *queueForTrain; // @synthesize queueForTrain=_queueForTrain;
- (void).cxx_destruct;
- (void)onReceiveMessageNotification:(id)arg1;
- (void)unregisterSync;
- (void)registerSync;
- (void)excuteLocalTaskByKey:(id)arg1;
- (id)trainResultCheck:(id)arg1 trainPlan:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)nameForTrainingQueue;
- (void)addTaskWithBlock:(CDUnknownBlockType)arg1 compeletion:(CDUnknownBlockType)arg2;
- (_Bool)addTaskWithConfig:(id)arg1;
- (_Bool)addTask:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
