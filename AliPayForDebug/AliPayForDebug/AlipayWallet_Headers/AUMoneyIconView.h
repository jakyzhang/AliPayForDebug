//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface AUMoneyIconView : UIView
{
    double _fontSize;
    double _rightPadding;
    UILabel *_moneyLabel;
}

@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void).cxx_destruct;
- (void)setMoneyLabelFontSize:(double)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

