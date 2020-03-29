//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WDAuthenticatorDelegate-Protocol.h"

@class AlisecBioAuthRequest, NSData, NSString, NSTimer, WDPasswordFreeAgent;
@protocol WDProcessDelegate;

@interface WDPasswordFreeAuthenticator : NSObject <WDAuthenticatorDelegate>
{
    id <WDProcessDelegate> _delegate;
    WDPasswordFreeAgent *_agent;
    NSString *_deviceIdentify;
    AlisecBioAuthRequest *_request;
    NSData *_cmd;
    NSTimer *_timeoutTimer;
}

+ (id)authenticatorWith:(id)arg1;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSData *cmd; // @synthesize cmd=_cmd;
@property(retain, nonatomic) AlisecBioAuthRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *deviceIdentify; // @synthesize deviceIdentify=_deviceIdentify;
@property(retain, nonatomic) WDPasswordFreeAgent *agent; // @synthesize agent=_agent;
@property(nonatomic) __weak id <WDProcessDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stop;
- (void)onResultOfEncrypt:(id)arg1;
- (void)onResultOfKeyWriting:(id)arg1;
- (void)verifyProcess;
- (void)bindProcess;
- (_Bool)isTargetDevice:(id)arg1;
- (void)didTimeout:(id)arg1;
- (void)process:(int)arg1 param:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
