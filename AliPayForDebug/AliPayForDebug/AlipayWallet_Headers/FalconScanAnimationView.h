//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface FalconScanAnimationView : UIView
{
    _Bool _stopAnimate;
    _Bool _animationRunning;
    UIView *_scanNetBgView;
    UIImageView *_scanNetView;
    struct CGRect _animationRect;
}

@property(nonatomic) _Bool animationRunning; // @synthesize animationRunning=_animationRunning;
@property(nonatomic) _Bool stopAnimate; // @synthesize stopAnimate=_stopAnimate;
@property(retain, nonatomic) UIImageView *scanNetView; // @synthesize scanNetView=_scanNetView;
@property(retain, nonatomic) UIView *scanNetBgView; // @synthesize scanNetBgView=_scanNetBgView;
@property(nonatomic) struct CGRect animationRect; // @synthesize animationRect=_animationRect;
- (void).cxx_destruct;
- (void)scanNetAnimate:(id)arg1;
- (void)layoutSubviews;
- (void)stopFalconScanAnimation;
- (void)startFalconScanAnimation;
- (void)setFalconScanAnimationRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

