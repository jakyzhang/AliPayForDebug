//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUAmountEditTextNew, UILabel;

@interface AUAmountInputFieldNew : UIView
{
    AUAmountEditTextNew *_amountEditText;
    UILabel *_amountTitleLabel;
}

+ (id)amountInputWithTitle:(id)arg1;
@property(retain, nonatomic) UILabel *amountTitleLabel; // @synthesize amountTitleLabel=_amountTitleLabel;
@property(retain, nonatomic) AUAmountEditTextNew *amountEditText; // @synthesize amountEditText=_amountEditText;
- (void).cxx_destruct;
- (void)layoutInnerViews;
- (void)createSubView;
- (id)titleLabel;
- (id)textField;
- (id)initWithFrame:(struct CGRect)arg1;

@end

