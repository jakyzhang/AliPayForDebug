//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPCENTERAppReq : NSObject
{
    NSString *_system;
    NSString *_client;
    NSString *_sdk;
    NSString *_platform;
    NSString *_env;
    NSString *_channel;
    NSString *_bundleid;
    NSString *_query;
    NSString *_existed;
    NSString *_grayRules;
    NSString *_localAppInfo;
    NSString *_stableRpc;
    NSString *_scene;
    NSString *_preferLocal;
    NSString *_reqmode;
}

@property(retain, nonatomic) NSString *reqmode; // @synthesize reqmode=_reqmode;
@property(retain, nonatomic) NSString *preferLocal; // @synthesize preferLocal=_preferLocal;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *stableRpc; // @synthesize stableRpc=_stableRpc;
@property(retain, nonatomic) NSString *localAppInfo; // @synthesize localAppInfo=_localAppInfo;
@property(retain, nonatomic) NSString *grayRules; // @synthesize grayRules=_grayRules;
@property(retain, nonatomic) NSString *existed; // @synthesize existed=_existed;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *bundleid; // @synthesize bundleid=_bundleid;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *env; // @synthesize env=_env;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *sdk; // @synthesize sdk=_sdk;
@property(retain, nonatomic) NSString *client; // @synthesize client=_client;
@property(retain, nonatomic) NSString *system; // @synthesize system=_system;
- (void).cxx_destruct;

@end
