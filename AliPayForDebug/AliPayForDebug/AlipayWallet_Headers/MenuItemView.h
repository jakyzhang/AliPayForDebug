//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "MenuItemViewProtocol-Protocol.h"

@class MPBadgeView, NSString, UILabel;

@interface MenuItemView : UIButton <MenuItemViewProtocol>
{
    UILabel *_textView;
    MPBadgeView *_badgeView;
    double _itemWidth;
}

@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(retain, nonatomic) MPBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)animationShowSubButtons:(_Bool)arg1;
- (void)updateBadgeValue:(id)arg1;
- (void)layoutSubviews;
- (id)textView:(id)arg1;
- (void)loadButtonView:(id)arg1;
- (id)initWithButtonInfo:(id)arg1 itemWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

