//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AOFAppPool;
@protocol AOFRequestProtocol, AOFServiceProtocol;

@interface AOFContext : NSObject
{
    id <AOFServiceProtocol> _dcService;
    id <AOFServiceProtocol> _ccService;
    id <AOFRequestProtocol> _dataRequest;
    AOFAppPool *_appPoolNormal;
    AOFAppPool *_appPoolFailOperation;
    AOFAppPool *_appPoolCacheAppInfo;
    AOFAppPool *_appPoolCacheSortInfo;
    AOFAppPool *_appPoolUploadQueue;
}

+ (id)dataRequest;
+ (id)service4AppId:(id)arg1;
+ (id)service;
+ (id)shared;
@property(retain, nonatomic) AOFAppPool *appPoolUploadQueue; // @synthesize appPoolUploadQueue=_appPoolUploadQueue;
@property(retain, nonatomic) AOFAppPool *appPoolCacheSortInfo; // @synthesize appPoolCacheSortInfo=_appPoolCacheSortInfo;
@property(retain, nonatomic) AOFAppPool *appPoolCacheAppInfo; // @synthesize appPoolCacheAppInfo=_appPoolCacheAppInfo;
@property(retain, nonatomic) AOFAppPool *appPoolFailOperation; // @synthesize appPoolFailOperation=_appPoolFailOperation;
@property(retain, nonatomic) AOFAppPool *appPoolNormal; // @synthesize appPoolNormal=_appPoolNormal;
@property(retain, nonatomic) id <AOFRequestProtocol> dataRequest; // @synthesize dataRequest=_dataRequest;
@property(retain, nonatomic) id <AOFServiceProtocol> ccService; // @synthesize ccService=_ccService;
@property(retain, nonatomic) id <AOFServiceProtocol> dcService; // @synthesize dcService=_dcService;
- (void).cxx_destruct;
- (id)willUploadQueue;
- (id)recentUsedAppSortPool;
- (id)recentUsedAppInfoPool;
- (id)operationQueue;
- (id)appPool;
- (id)initInPrivate;

@end

