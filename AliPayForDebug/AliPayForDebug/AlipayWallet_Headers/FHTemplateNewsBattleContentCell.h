//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHTemplateBaseCell.h"

#import "FHTemplateNewsBattleInfoViewProtocol-Protocol.h"

@class FHCellNewsBattleContentModel, FHTemplateNewsBattleInfoView, NSString, UIImageView, UIView;

@interface FHTemplateNewsBattleContentCell : FHTemplateBaseCell <FHTemplateNewsBattleInfoViewProtocol>
{
    UIView *_separateLineView;
    FHTemplateNewsBattleInfoView *_infoViewFirst;
    FHTemplateNewsBattleInfoView *_infoViewSecond;
    FHCellNewsBattleContentModel *_cellModel;
    UIImageView *_leftBorder;
    UIImageView *_rightBorder;
}

@property(retain, nonatomic) UIImageView *rightBorder; // @synthesize rightBorder=_rightBorder;
@property(retain, nonatomic) UIImageView *leftBorder; // @synthesize leftBorder=_leftBorder;
@property(retain, nonatomic) FHCellNewsBattleContentModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) FHTemplateNewsBattleInfoView *infoViewSecond; // @synthesize infoViewSecond=_infoViewSecond;
@property(retain, nonatomic) FHTemplateNewsBattleInfoView *infoViewFirst; // @synthesize infoViewFirst=_infoViewFirst;
@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
- (void).cxx_destruct;
- (void)contentView:(id)arg1 didClickedFollowAction:(id)arg2;
- (id)viewsNeedExposure;
- (void)updateData:(id)arg1 userStatusMap:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
