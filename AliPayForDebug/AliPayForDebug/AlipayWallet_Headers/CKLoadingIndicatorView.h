//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIColor;

@interface CKLoadingIndicatorView : UIView
{
    CALayer *_animationLayer;
    _Bool _animating;
    unsigned long long _type;
    UIColor *_tintColor;
    double _size;
}

+ (id)activityIndicatorAnimationForAnimationType:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) double size; // @synthesize size=_size;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setupAnimation;
- (void)commonInit;
- (id)initWithType:(unsigned long long)arg1 tintColor:(id)arg2 size:(double)arg3;
- (id)initWithType:(unsigned long long)arg1 tintColor:(id)arg2;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;

@end

