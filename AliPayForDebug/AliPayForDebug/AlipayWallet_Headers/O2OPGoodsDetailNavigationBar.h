//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AULoadingIndicatorView, CAGradientLayer, UIButton, UILabel;

@interface O2OPGoodsDetailNavigationBar : UIView
{
    _Bool _translucent;
    UILabel *_titleLabel;
    CDUnknownBlockType _action;
    CAGradientLayer *_gradientBgLayer;
    UIView *_backgroundView;
    UIButton *_backButton;
    UIButton *_shareButton;
    UIButton *_moreButton;
    AULoadingIndicatorView *_loadingView;
    double _fadeInStart;
    double _fadeInEnd;
    double _offsetY;
}

+ (id)naviMoreInfo;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) double fadeInEnd; // @synthesize fadeInEnd=_fadeInEnd;
@property(nonatomic) double fadeInStart; // @synthesize fadeInStart=_fadeInStart;
@property(retain, nonatomic) AULoadingIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) CAGradientLayer *gradientBgLayer; // @synthesize gradientBgLayer=_gradientBgLayer;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) _Bool translucent; // @synthesize translucent=_translucent;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)hideShareButton;
- (void)showShareButton;
- (void)reset;
- (void)updateWithOffsetY:(double)arg1;
- (void)setFadeInStart:(double)arg1 end:(double)arg2;
- (void)stopTitleLoading;
- (void)startTitleLoading;
- (void)moreButtonPressed:(id)arg1;
- (void)shareButtonPressed:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)update;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
