//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RVKRegisteyScopeProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface RVAConfig : NSObject <RVKRegisteyScopeProtocol>
{
    _Bool _isNeed2VerifyApp;
    _Bool _canIgnoreSSLError;
    _Bool _shouldCheckJsApiArguments;
    _Bool _shouldCheckMainurlDegrade;
    _Bool _shouldCheckRVASession;
    _Bool _shouldUseConditionalResponse;
    _Bool _shouldLogResponse;
    _Bool _shouldWKWebViewForceFreshResponse;
    _Bool _shouldGetURLWithNewMethod;
    _Bool _shouldSwizzleMethod;
    _Bool _shouldeDeprecateShowTitleBar;
    _Bool _shouldWKDispatchStartEvent;
    _Bool _skipCustomPrompt;
    _Bool _enableItunesLinkCensor;
    _Bool _shouldSubViewDispatchAppEvent;
    _Bool _fixPageResumeAtStart;
    _Bool _shouldDipatchContextPresentEvent;
    _Bool _useExtensionScope;
    _Bool _autoUnregisterSync;
    int _WKRetryTimes;
    unsigned long long _environment;
    unsigned long long _channel;
    NSString *_clientBundleId;
    NSString *_clientVersion;
    NSString *_clientName;
    NSString *_clientScheme;
    Class _viewControllerClass;
    Class _contentViewClass;
    Class _optionsClass;
    NSString *_defaultUserAgent;
    NSString *_userAgent;
    Class _contentViewPageProfileClass;
    Class _pvReportClass;
    NSArray *_skipJsApiCheckBlackList;
    NSDictionary *_tinyAppPublicURL;
    NSArray *_embedWebViewSetOptionMenuWhiteList;
    NSString *_shotCutRenderURL;
    NSArray *_servicesConfigs;
    NSDictionary *_configDict;
    NSString *_uaClientInfo;
}

+ (id)allocPrivate;
+ (id)defaultConfiguration;
+ (id)defaultApplicationNameForUserAgent;
@property(retain, nonatomic) NSString *uaClientInfo; // @synthesize uaClientInfo=_uaClientInfo;
@property(retain, nonatomic) NSDictionary *configDict; // @synthesize configDict=_configDict;
@property(nonatomic) _Bool autoUnregisterSync; // @synthesize autoUnregisterSync=_autoUnregisterSync;
@property(retain, nonatomic) NSArray *servicesConfigs; // @synthesize servicesConfigs=_servicesConfigs;
@property(nonatomic) _Bool useExtensionScope; // @synthesize useExtensionScope=_useExtensionScope;
@property(copy, nonatomic) NSString *shotCutRenderURL; // @synthesize shotCutRenderURL=_shotCutRenderURL;
@property(copy, nonatomic) NSArray *embedWebViewSetOptionMenuWhiteList; // @synthesize embedWebViewSetOptionMenuWhiteList=_embedWebViewSetOptionMenuWhiteList;
@property(nonatomic) _Bool shouldDipatchContextPresentEvent; // @synthesize shouldDipatchContextPresentEvent=_shouldDipatchContextPresentEvent;
@property(nonatomic) _Bool fixPageResumeAtStart; // @synthesize fixPageResumeAtStart=_fixPageResumeAtStart;
@property(nonatomic) _Bool shouldSubViewDispatchAppEvent; // @synthesize shouldSubViewDispatchAppEvent=_shouldSubViewDispatchAppEvent;
@property(nonatomic) _Bool enableItunesLinkCensor; // @synthesize enableItunesLinkCensor=_enableItunesLinkCensor;
@property(nonatomic) _Bool skipCustomPrompt; // @synthesize skipCustomPrompt=_skipCustomPrompt;
@property(nonatomic) _Bool shouldWKDispatchStartEvent; // @synthesize shouldWKDispatchStartEvent=_shouldWKDispatchStartEvent;
@property(retain, nonatomic) NSDictionary *tinyAppPublicURL; // @synthesize tinyAppPublicURL=_tinyAppPublicURL;
@property(nonatomic) _Bool shouldeDeprecateShowTitleBar; // @synthesize shouldeDeprecateShowTitleBar=_shouldeDeprecateShowTitleBar;
@property(nonatomic) _Bool shouldSwizzleMethod; // @synthesize shouldSwizzleMethod=_shouldSwizzleMethod;
@property(nonatomic) _Bool shouldGetURLWithNewMethod; // @synthesize shouldGetURLWithNewMethod=_shouldGetURLWithNewMethod;
@property(nonatomic) _Bool shouldWKWebViewForceFreshResponse; // @synthesize shouldWKWebViewForceFreshResponse=_shouldWKWebViewForceFreshResponse;
@property(nonatomic) _Bool shouldLogResponse; // @synthesize shouldLogResponse=_shouldLogResponse;
@property(nonatomic) _Bool shouldUseConditionalResponse; // @synthesize shouldUseConditionalResponse=_shouldUseConditionalResponse;
@property(nonatomic) _Bool shouldCheckRVASession; // @synthesize shouldCheckRVASession=_shouldCheckRVASession;
@property(nonatomic) _Bool shouldCheckMainurlDegrade; // @synthesize shouldCheckMainurlDegrade=_shouldCheckMainurlDegrade;
@property(copy, nonatomic) NSArray *skipJsApiCheckBlackList; // @synthesize skipJsApiCheckBlackList=_skipJsApiCheckBlackList;
@property(nonatomic) _Bool shouldCheckJsApiArguments; // @synthesize shouldCheckJsApiArguments=_shouldCheckJsApiArguments;
@property(nonatomic) int WKRetryTimes; // @synthesize WKRetryTimes=_WKRetryTimes;
@property(retain, nonatomic) Class pvReportClass; // @synthesize pvReportClass=_pvReportClass;
@property(retain, nonatomic) Class contentViewPageProfileClass; // @synthesize contentViewPageProfileClass=_contentViewPageProfileClass;
@property(nonatomic) _Bool canIgnoreSSLError; // @synthesize canIgnoreSSLError=_canIgnoreSSLError;
@property(nonatomic) _Bool isNeed2VerifyApp; // @synthesize isNeed2VerifyApp=_isNeed2VerifyApp;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, copy, nonatomic) NSString *defaultUserAgent; // @synthesize defaultUserAgent=_defaultUserAgent;
@property(retain, nonatomic) Class optionsClass; // @synthesize optionsClass=_optionsClass;
@property(retain, nonatomic) Class contentViewClass; // @synthesize contentViewClass=_contentViewClass;
@property(retain, nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;
@property(copy, nonatomic) NSString *clientScheme; // @synthesize clientScheme=_clientScheme;
@property(copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(copy, nonatomic) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
@property(nonatomic) unsigned long long channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned long long environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extraPluginsFilePath;
@property(copy, nonatomic) NSString *pluginsBundleName;
- (id)dictionaryValueForKey:(id)arg1;
- (id)arrayValueForKey:(id)arg1;
- (id)stringValueForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSString *systemVersion;
- (id)parseUASdkversion:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sdkVersion;
@property(readonly, copy, nonatomic) NSString *platform;
- (void)setClientName:(id)arg1 clientVersion:(id)arg2 isAliApp:(_Bool)arg3 customUserAgent:(id)arg4;
- (void)postConfigUpdateNotif:(unsigned long long)arg1;
- (id)initPrivate;
- (_Bool)isSupportExtensionScope;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

