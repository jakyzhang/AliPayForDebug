//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class APAnimatedImageView;

@interface BeeLottieImageView : UIImageView
{
    _Bool _useSysmtemImageView;
    APAnimatedImageView *_animationView;
}

- (void).cxx_destruct;
- (void)setBeeImage:(id)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)preferedSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

