//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTRpcAsyncCaller, NSLock, NSMutableDictionary;
@protocol FalconModalDataManagerDelegate;

@interface FalconModalDataManager : NSObject
{
    _Bool _isSupportModaDataUpdate;
    id <FalconModalDataManagerDelegate> _modalDataDelegate;
    NSMutableDictionary *_repository;
    NSLock *_lock;
    DTRpcAsyncCaller *_sendModalDataAsyncCaller;
}

+ (unsigned long long)currentConnectValue;
@property(nonatomic) _Bool isSupportModaDataUpdate; // @synthesize isSupportModaDataUpdate=_isSupportModaDataUpdate;
@property(retain, nonatomic) DTRpcAsyncCaller *sendModalDataAsyncCaller; // @synthesize sendModalDataAsyncCaller=_sendModalDataAsyncCaller;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *repository; // @synthesize repository=_repository;
@property(nonatomic) __weak id <FalconModalDataManagerDelegate> modalDataDelegate; // @synthesize modalDataDelegate=_modalDataDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)buildRequestModalData:(id)arg1;
- (void)downloadModaDataWithType:(id)arg1 From:(id)arg2;
- (void)saveModalDataInfo:(id)arg1;
- (void)updateModalData:(id)arg1;
- (_Bool)updateModalDataWith:(id)arg1;
- (id)getModalDataFilePathWith:(id)arg1;
- (id)getModalDataInfoFrom:(id)arg1;
- (int)getModalDataFileStatusWith:(id)arg1;
- (void)handleFalconDataSyncPushNotification:(id)arg1;
- (void)addObserver;
- (void)checkModalData:(_Bool)arg1;
- (void)createRepository:(id)arg1;
- (id)init;

@end

