//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, NSArray, UIColor, UIImageView;

@interface FHScrollWidgetProgressBar : UIView
{
    UIColor *_bgProgressColor;
    UIColor *_bgProgressBorderColor;
    NSArray *_colorArr;
    double _progress;
    UIImageView *_icon;
    CALayer *_bgLayer;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CALayer *bgLayer; // @synthesize bgLayer=_bgLayer;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSArray *colorArr; // @synthesize colorArr=_colorArr;
@property(retain, nonatomic) UIColor *bgProgressBorderColor; // @synthesize bgProgressBorderColor=_bgProgressBorderColor;
@property(retain, nonatomic) UIColor *bgProgressColor; // @synthesize bgProgressColor=_bgProgressColor;
- (void).cxx_destruct;
- (void)updateProgressColorArr:(id)arg1 bgProgressColor:(id)arg2 borderColor:(id)arg3;
- (void)updateProgress;
- (id)initWithFrame:(struct CGRect)arg1;

@end
