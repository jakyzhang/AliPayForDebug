//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OOrderBaseQueryCountModel.h"

@class NSString;

@interface O2OOrderCommentQueryCountModel : O2OOrderBaseQueryCountModel
{
    _Bool _needRemove;
    NSString *_orderNo;
    NSString *_orderType;
    NSString *_queryType;
}

@property(nonatomic) _Bool needRemove; // @synthesize needRemove=_needRemove;
@property(copy, nonatomic) NSString *queryType; // @synthesize queryType=_queryType;
@property(copy, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
@property(copy, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
- (void).cxx_destruct;
- (_Bool)parseResponse:(id)arg1;
- (void)reset;
- (id)operationType;
- (id)rpcRequest;
- (SEL)selectorNameForRPCService;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (Class)RPCServiceClass;

@end
