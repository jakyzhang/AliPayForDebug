//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ImmPayEventHandler, ImmPayFlyBird, ImmPayViewHandler, MQPBaseService, MQPPaySession, MQPTrackModel;

@interface ImmPayEventPlugin : NSObject
{
    MQPBaseService *_service;
    MQPTrackModel *_log;
}

@property(nonatomic) __weak MQPTrackModel *log; // @synthesize log=_log;
@property(nonatomic) __weak MQPBaseService *service; // @synthesize service=_service;
- (void).cxx_destruct;
@property(readonly) ImmPayEventHandler *eh;
@property(readonly) ImmPayFlyBird *flybird;
@property(readonly) ImmPayViewHandler *viewHandler;
@property(readonly) MQPPaySession *paySession;
- (void)onCode:(id)arg1 Err:(id)arg2;
- (_Bool)onEvent:(id)arg1 param:(id)arg2;
- (id)initWithService:(id)arg1;

@end
