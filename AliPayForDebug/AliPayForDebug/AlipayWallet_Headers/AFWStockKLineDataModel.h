//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMLBaseModel.h"

@class NSMutableArray, NSString;

@interface AFWStockKLineDataModel : FMLBaseModel
{
    NSString *_type;
    long long _recoverType;
    NSMutableArray *_kLineDataArray;
    unsigned long long _region2ShowType;
}

+ (unsigned long long)region2ShowType:(id)arg1;
+ (id)setDataWithSECUPRODStockCandlestickResult:(id)arg1;
+ (id)daoWithKLineType:(id)arg1 recover:(long long)arg2;
@property(nonatomic) unsigned long long region2ShowType; // @synthesize region2ShowType=_region2ShowType;
@property(retain, nonatomic) NSMutableArray *kLineDataArray; // @synthesize kLineDataArray=_kLineDataArray;
@property(nonatomic) long long recoverType; // @synthesize recoverType=_recoverType;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (long long)dotLength:(id)arg1 defaultNum:(long long)arg2;
- (id)init;

@end

