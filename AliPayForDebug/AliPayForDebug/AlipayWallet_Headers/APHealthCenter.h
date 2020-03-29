//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore;

@interface APHealthCenter : NSObject
{
    _Bool _canReadMotion;
    HKHealthStore *_healthStore;
}

+ (_Bool)schemeToAlipaySportsSetting;
+ (id)shareCenter;
+ (_Bool)isHealthDataAvailable;
@property _Bool canReadMotion; // @synthesize canReadMotion=_canReadMotion;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (void)forceReadHealthStepCount;
- (int)readStepCountSourceType;
- (void)changeMotionSource;
- (void)trigerSyncHealthData;
- (void)executeQuery:(id)arg1 withAppKey:(id)arg2;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)authorizationStatusForType:(id)arg1;
- (void)setWalkingVersion:(id)arg1;
- (void)resetHealthStore;

@end
