//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FMLModelInfoManager : NSObject
{
    NSMutableDictionary *_modelInfoGroupDictionary;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *modelInfoGroupDictionary; // @synthesize modelInfoGroupDictionary=_modelInfoGroupDictionary;
- (void).cxx_destruct;
- (void)cleanAllMemoryCache;
- (void)cleanupForModelConfig:(id)arg1;
- (void)freeDataInMemoryWithModelConfig:(id)arg1 objectId:(id)arg2;
- (id)modelInfoWithModelConfig:(id)arg1 objectId:(id)arg2;
- (id)init;

@end
