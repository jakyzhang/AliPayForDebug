//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFWStockBaseModel.h"

@class NSArray, NSString;

@interface AFWStockFinancialBlockModel : AFWStockBaseModel
{
    NSString *_title;
    NSString *_subTitle;
    NSString *_actionUrl;
    NSString *_blockId;
    NSArray *_financialStatementItems;
}

+ (id)modelWithfinscbffFinancialStatementBlockPB:(id)arg1;
@property(readonly, nonatomic) NSArray *financialStatementItems; // @synthesize financialStatementItems=_financialStatementItems;
@property(readonly, copy, nonatomic) NSString *blockId; // @synthesize blockId=_blockId;
@property(readonly, copy, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(readonly, copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)transformModelFromPrototype:(id)arg1;
- (id)initWithfinscbffFinancialStatementBlockPB:(id)arg1;

@end

