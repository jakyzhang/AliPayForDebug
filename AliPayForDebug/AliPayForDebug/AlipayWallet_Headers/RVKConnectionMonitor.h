//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RVKURLProtocolProcessorDelegate-Protocol.h"

@class NSString, NSURLRequest, NSURLResponse, RVKConnectionProfile;

@interface RVKConnectionMonitor : NSObject <RVKURLProtocolProcessorDelegate>
{
    NSString *_channelId;
    RVKConnectionProfile *_profile;
    NSURLRequest *_currentRequest;
    NSURLRequest *_redirectRequest;
    NSURLResponse *_currentResponse;
}

@property(retain, nonatomic) NSURLResponse *currentResponse; // @synthesize currentResponse=_currentResponse;
@property(retain, nonatomic) NSURLRequest *redirectRequest; // @synthesize redirectRequest=_redirectRequest;
@property(retain, nonatomic) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) RVKConnectionProfile *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;
- (void)RVKURLProtocolProcessor:(id)arg1 didFailWithError:(id)arg2 protocol:(id)arg3;
- (void)RVKURLProtocolProcessor:(id)arg1 didFinishLoading:(id)arg2 receiveDataLength:(unsigned long long)arg3 protocol:(id)arg4;
- (void)RVKURLProtocolProcessor:(id)arg1 didLoadData:(id)arg2;
- (void)RVKURLProtocolProcessor:(id)arg1 didReceiveResponse:(id)arg2;
- (void)RVKURLProtocolProcessor:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3 receiveData:(id)arg4;
- (void)RVKURLProtocolProcessor:(id)arg1 startLoading:(id)arg2;
- (void)RVKURLProtocolProcessor:(id)arg1 willStartLoading:(id)arg2 channelId:(id)arg3;
- (void)reportProfile;
- (void)startStatistics:(id)arg1 receiveDataLength:(unsigned long long)arg2 error:(id)arg3 netInfo:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
