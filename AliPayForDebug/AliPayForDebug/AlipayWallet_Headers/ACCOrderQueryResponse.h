//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCBaseRPCResponseInfo, NSString;

@interface ACCOrderQueryResponse : NSObject
{
    ACCBaseRPCResponseInfo *_baseRPCResponseInfo;
    NSString *_tradeNo;
    NSString *_orderAmount;
    NSString *_paidAmount;
    NSString *_discountAmount;
    NSString *_startStation;
    NSString *_endStation;
}

@property(retain, nonatomic) NSString *endStation; // @synthesize endStation=_endStation;
@property(retain, nonatomic) NSString *startStation; // @synthesize startStation=_startStation;
@property(retain, nonatomic) NSString *discountAmount; // @synthesize discountAmount=_discountAmount;
@property(retain, nonatomic) NSString *paidAmount; // @synthesize paidAmount=_paidAmount;
@property(retain, nonatomic) NSString *orderAmount; // @synthesize orderAmount=_orderAmount;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(retain, nonatomic) ACCBaseRPCResponseInfo *baseRPCResponseInfo; // @synthesize baseRPCResponseInfo=_baseRPCResponseInfo;
- (void).cxx_destruct;

@end
