//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMSimplePingDelegate-Protocol.h"

@class APMSimplePing, NSMutableDictionary, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface APMPing : NSObject <APMSimplePingDelegate>
{
    _Bool _pingStarted;
    APMSimplePing *_pinger;
    NSObject<OS_dispatch_queue> *_pingQueue;
    NSTimer *_sendTimer;
    NSTimer *_stopPingTimer;
    NSMutableDictionary *_seqTimeDict;
    unsigned long long _designedPingCount;
    unsigned long long _curSendPingCount;
    unsigned long long _curRecvReplyCount;
}

@property(nonatomic, getter=isPingStarted) _Bool pingStarted; // @synthesize pingStarted=_pingStarted;
@property(nonatomic) unsigned long long curRecvReplyCount; // @synthesize curRecvReplyCount=_curRecvReplyCount;
@property(nonatomic) unsigned long long curSendPingCount; // @synthesize curSendPingCount=_curSendPingCount;
@property(nonatomic) unsigned long long designedPingCount; // @synthesize designedPingCount=_designedPingCount;
@property(retain, nonatomic) NSMutableDictionary *seqTimeDict; // @synthesize seqTimeDict=_seqTimeDict;
@property(retain, nonatomic) NSTimer *stopPingTimer; // @synthesize stopPingTimer=_stopPingTimer;
@property(retain, nonatomic) NSTimer *sendTimer; // @synthesize sendTimer=_sendTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pingQueue; // @synthesize pingQueue=_pingQueue;
@property(retain, nonatomic) APMSimplePing *pinger; // @synthesize pinger=_pinger;
- (void).cxx_destruct;
- (void)dealloc;
- (void)simplePing:(id)arg1 didReceiveUnexpectedPacket:(id)arg2;
- (void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
- (void)simplePing:(id)arg1 didSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didFailWithError:(id)arg2;
- (void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
- (void)sendPing;
- (void)stopPing;
- (void)startPingWithCount:(unsigned long long)arg1;
- (id)initWithHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

