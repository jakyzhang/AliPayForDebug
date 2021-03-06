//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FHHighlightClickExposureProtocol-Protocol.h"

@class FHCellNewsBattleTopic, FHHighlightLabel, FHNewsBattleGradientLabel, FHTemplateNewsBattleTopicViewTimerProxy, NSString, UIImageView, UILabel;

@interface FHTemplateNewsBattleTopicView : UIView <FHHighlightClickExposureProtocol>
{
    FHHighlightLabel *titleLabel;
    FHNewsBattleGradientLabel *tagLabel;
    UIImageView *tagArrow;
    UIImageView *backgroundImage;
    FHTemplateNewsBattleTopicViewTimerProxy *recyleTimerProxy;
    UILabel *_positiveLabel;
    UILabel *_negativeLabel;
    FHCellNewsBattleTopic *_topicData;
    UIImageView *_positiveView;
    UIImageView *_negativeView;
    UIImageView *_positiveOption;
    UIImageView *_negativeOption;
    UILabel *_positiveOptionLabel;
    UILabel *_negativeOptionLabel;
}

@property(retain, nonatomic) UILabel *negativeOptionLabel; // @synthesize negativeOptionLabel=_negativeOptionLabel;
@property(retain, nonatomic) UILabel *positiveOptionLabel; // @synthesize positiveOptionLabel=_positiveOptionLabel;
@property(retain, nonatomic) UIImageView *negativeOption; // @synthesize negativeOption=_negativeOption;
@property(retain, nonatomic) UIImageView *positiveOption; // @synthesize positiveOption=_positiveOption;
@property(retain, nonatomic) UIImageView *negativeView; // @synthesize negativeView=_negativeView;
@property(retain, nonatomic) UIImageView *positiveView; // @synthesize positiveView=_positiveView;
@property(retain, nonatomic) FHCellNewsBattleTopic *topicData; // @synthesize topicData=_topicData;
@property(retain, nonatomic) UILabel *negativeLabel; // @synthesize negativeLabel=_negativeLabel;
@property(retain, nonatomic) UILabel *positiveLabel; // @synthesize positiveLabel=_positiveLabel;
- (void).cxx_destruct;
- (id)createLayerWithColor:(id)arg1 cornerRadius:(double)arg2 rectCornerType:(unsigned long long)arg3 size:(struct CGSize)arg4;
- (id)createImageWithColor:(id)arg1 cornerRadius:(double)arg2 rectCornerType:(unsigned long long)arg3 size:(struct CGSize)arg4;
- (void)optionScaleAnimation;
- (void)handleTimer:(id)arg1;
- (void)startAutoScroll;
- (void)stopAutoScroll;
- (double)getWidthWithText:(id)arg1 height:(double)arg2;
- (void)reloadData:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)clickExposure;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

