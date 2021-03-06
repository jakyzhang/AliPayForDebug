//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UcdpBaseRequest.h"

@class NSArray;

@interface UcdpPositionRequest : UcdpBaseRequest
{
    NSArray *_positionReqs;
    CDUnknownBlockType _rpcCallback;
    CDUnknownBlockType _dataCallback;
    NSArray *_mergedRequests;
}

@property(copy, nonatomic) NSArray *mergedRequests; // @synthesize mergedRequests=_mergedRequests;
@property(copy, nonatomic) CDUnknownBlockType dataCallback; // @synthesize dataCallback=_dataCallback;
@property(copy, nonatomic) CDUnknownBlockType rpcCallback; // @synthesize rpcCallback=_rpcCallback;
@property(copy, nonatomic) NSArray *positionReqs; // @synthesize positionReqs=_positionReqs;
- (void).cxx_destruct;
- (_Bool)isValid;

@end

