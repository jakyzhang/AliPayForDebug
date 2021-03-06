//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSMutableDictionary, NSString;

@interface TNBizPackage : NSObject
{
    NSString *_vhost;
    NSString *_namappVersion;
    NSString *_rnVersion;
    NSString *_bizVersion;
    NSString *_name;
    NSString *_appId;
    NSString *_path;
    NSDictionary *_extendInfo;
    NSMutableDictionary *_keysAndValues;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableDictionary *keysAndValues; // @synthesize keysAndValues=_keysAndValues;
@property(retain, nonatomic) NSDictionary *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *bizVersion; // @synthesize bizVersion=_bizVersion;
@property(copy, nonatomic) NSString *rnVersion; // @synthesize rnVersion=_rnVersion;
@property(copy, nonatomic) NSString *namappVersion; // @synthesize namappVersion=_namappVersion;
@property(copy, nonatomic) NSString *vhost; // @synthesize vhost=_vhost;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *launchParams;
- (id)dataWithPath:(id)arg1;
- (id)imageWithPath:(id)arg1;
- (id)apiPermissionData;
- (id)configData;
- (id)bundleData;
- (id)init;

@end

