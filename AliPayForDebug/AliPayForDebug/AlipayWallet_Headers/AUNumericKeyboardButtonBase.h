//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface AUNumericKeyboardButtonBase : UIView
{
    CDStruct_eaf340f0 _info;
    UIButton *_button;
    _Bool _tapEnabel;
}

@property(nonatomic) CDStruct_eaf340f0 info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)lineColor;
- (float)lineSize;
- (void)enableTap:(_Bool)arg1;
- (void)dealloc;
- (void)free;
- (void)customInit;
- (id)initWithInfo:(CDStruct_eaf340f0)arg1;

@end
