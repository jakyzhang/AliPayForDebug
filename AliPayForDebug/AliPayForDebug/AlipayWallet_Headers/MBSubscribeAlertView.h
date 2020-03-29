//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEAlertManagedWindow.h"

#import "BEEAlertManagedWindowDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIView, gotoneSubscribeComponent;

@interface MBSubscribeAlertView : BEEAlertManagedWindow <BEEAlertManagedWindowDelegate>
{
    long long _eventType;
    gotoneSubscribeComponent *_component;
    NSString *_serviceCode;
    CDUnknownBlockType _complateBlock;
    UIView *_pannelView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_applyLabel;
    UILabel *_descLabel;
    UIButton *_cancelBtn;
    UIButton *_okBtn;
}

@property(retain, nonatomic) UIButton *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *applyLabel; // @synthesize applyLabel=_applyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *pannelView; // @synthesize pannelView=_pannelView;
@property(copy, nonatomic) CDUnknownBlockType complateBlock; // @synthesize complateBlock=_complateBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)willDissmissManagedWindow:(id)arg1 options:(id)arg2;
- (void)subScribeSuccessed;
- (void)okClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)animationShow;
- (_Bool)setSubscribeComponent:(id)arg1 serviceCode:(id)arg2;
- (id)initWithNoRootControllerFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
