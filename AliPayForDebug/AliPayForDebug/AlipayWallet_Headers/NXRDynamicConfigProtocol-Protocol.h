//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol NXRDynamicConfigProtocol <NSObject>

@optional
- (NSArray *)fallbackHeadersWhitelist;
- (_Bool)enableRemoveFallbackHeaders;
- (double)pluginExpireTime;
- (_Bool)optimizationForSaveApps;
- (_Bool)enableNebulaAriver;
- (double)preferConfigWaitTime;
- (_Bool)enableTemplateApp;
- (id)clientConfigForKey:(NSString *)arg1 shortKey:(NSString *)arg2 error:(id *)arg3;
- (NSDictionary *)clientConfigForApps;
- (_Bool)enableTinyappConfig;
- (_Bool)callbackInHighPriorityAfterUnzip;
- (_Bool)enableAsyncUnzipWhenLaunchingApps;
- (double)prepareTimeLimit:(NSString *)arg1 isForce:(_Bool)arg2;
- (double)packageDowngradePrepareTimeLimit:(NSString *)arg1;
- (_Bool)shouldAppDowngrade:(NSString *)arg1;
- (_Bool)enablePreDownloadWith4G:(NSString *)arg1;
- (_Bool)enablePreDownload:(NSString *)arg1;
- (NSDictionary *)resManifestSwitchers;
- (_Bool)useMmapReadTar;
- (_Bool)forcedDownload;
- (unsigned long long)networkStatus;
- (NSString *)currentUserId;
- (_Bool)coverInstall;
@end

