//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHCellBaseModel.h"

@class FHAssetsHeaderMarkModel, FHCellTitleModel, NSArray;

@interface FHCellWorkbenchModel : FHCellBaseModel
{
    _Bool _scrollTop;
    NSArray *_cardContainerList;
    NSArray *_subCards;
    FHCellTitleModel *_titleModel;
    FHAssetsHeaderMarkModel *_mark;
    NSArray *_cardExtInfoList;
}

@property(retain, nonatomic) NSArray *cardExtInfoList; // @synthesize cardExtInfoList=_cardExtInfoList;
@property(retain, nonatomic) FHAssetsHeaderMarkModel *mark; // @synthesize mark=_mark;
@property(retain, nonatomic) FHCellTitleModel *titleModel; // @synthesize titleModel=_titleModel;
@property(retain, nonatomic) NSArray *subCards; // @synthesize subCards=_subCards;
@property(nonatomic) _Bool scrollTop; // @synthesize scrollTop=_scrollTop;
@property(retain, nonatomic) NSArray *cardContainerList; // @synthesize cardContainerList=_cardContainerList;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValid;
- (double)cellHeight;
- (id)initWithDataModel:(id)arg1 card:(id)arg2 obFloor:(id)arg3;

@end
