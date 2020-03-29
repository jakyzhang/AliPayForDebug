//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBPluginBase.h"

#import "PSDPluginProtocol-Protocol.h"

@class NSString;

@interface Plugin4SsoLoginWithEntranceRPC : NBPluginBase <PSDPluginProtocol>
{
    NSString *_ssoLoginURL;
    double _startSsoRpcTime;
}

@property(nonatomic) double startSsoRpcTime; // @synthesize startSsoRpcTime=_startSsoRpcTime;
@property(copy, nonatomic) NSString *ssoLoginURL; // @synthesize ssoLoginURL=_ssoLoginURL;
- (void).cxx_destruct;
- (id)loginInterceptDomains;
- (void)handleEvent:(id)arg1;
- (_Bool)shouldSyncLoginWithRequest:(id)arg1 appId:(id)arg2;
- (int)priority;
@property(readonly, copy, nonatomic) NSString *name;
- (void)pluginDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
