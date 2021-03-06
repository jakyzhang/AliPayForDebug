//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DFServiceManager : NSObject
{
    NSMutableDictionary *_serviceMap;
    NSMutableDictionary *_serviceMapAllRegion;
}

@property(retain, nonatomic) NSMutableDictionary *serviceMapAllRegion; // @synthesize serviceMapAllRegion=_serviceMapAllRegion;
@property(retain, nonatomic) NSMutableDictionary *serviceMap; // @synthesize serviceMap=_serviceMap;
- (void).cxx_destruct;
- (_Bool)isNeedFixHandleRegionChange;
- (_Bool)needAllRegionServiceFind;
- (void)reportBizCanNotUse:(id)arg1;
- (id)fixHandleRegionChange:(id)arg1;
- (void)unregisterServicesByServiceInfo:(id)arg1 contextParam:(id)arg2;
- (void)unregisterServicesByNameArray:(id)arg1 contextParam:(id)arg2;
- (void)unregisterAllServices:(id)arg1;
- (void)reinitAllServices:(id)arg1;
- (void)registerServicesExcludeAlive;
- (void)startServicesMapWithName:(id)arg1 asynchronous:(_Bool)arg2 priority:(long long)arg3;
- (void)startAutostartServicesMapGroups;
- (void)doStartServiceGroup:(id)arg1;
- (void)startNonlazyServices;
- (id)serviceNamesOfGroup:(id)arg1;
- (id)findServiceByName:(id)arg1;
- (void)unregisterServiceForName:(id)arg1;
- (_Bool)registerService:(id)arg1 forName:(id)arg2;
- (void)registerAllRegionsServicesFromConfig;
- (void)registerServicesFromConfig;
- (id)init;

@end

