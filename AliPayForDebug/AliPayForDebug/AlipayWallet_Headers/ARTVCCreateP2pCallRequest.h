//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ARTVCCreateP2pCallRequest : NSObject
{
    NSString *_uid;
    NSString *_bizName;
    NSString *_subBiz;
    NSString *_signature;
    long long _callMode;
    double _timeout;
    NSDictionary *_extInfo;
}

@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long callMode; // @synthesize callMode=_callMode;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *subBiz; // @synthesize subBiz=_subBiz;
@property(copy, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)init;

@end
