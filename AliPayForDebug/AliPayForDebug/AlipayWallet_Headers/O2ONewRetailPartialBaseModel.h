//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class NSDictionary;

@interface O2ONewRetailPartialBaseModel : O2OMistModel
{
    NSDictionary *_commonDic;
}

@property(retain, nonatomic) NSDictionary *commonDic; // @synthesize commonDic=_commonDic;
- (void).cxx_destruct;
- (id)templatesFromResponse:(id)arg1;
- (id)specifiedScene;
- (id)rpcRequest;
- (SEL)selectorNameForRPCService;
- (id)key;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (Class)RPCServiceClass;

@end

