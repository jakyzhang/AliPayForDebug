//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView;

@interface PPChatMessageBoxView : UIView
{
    UIImageView *_background;
    UIView *_backgroundView;
    long long _postion;
    CAShapeLayer *_shapLayer;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) CAShapeLayer *shapLayer; // @synthesize shapLayer=_shapLayer;
@property(nonatomic) long long postion; // @synthesize postion=_postion;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *background; // @synthesize background=_background;
- (void).cxx_destruct;
- (void)layoutBackgroundView;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)useDefaultBackground:(long long)arg1;
- (void)useDefaultBackground;
- (void)setBackgroundImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

