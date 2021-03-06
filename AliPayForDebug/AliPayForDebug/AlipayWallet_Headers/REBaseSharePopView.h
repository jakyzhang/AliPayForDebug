//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "REPopView.h"

#import "REBaseSharePopViewProtocol-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface REBaseSharePopView : REPopView <REBaseSharePopViewProtocol>
{
    UIImageView *_topImageView;
    UIImageView *_bottomImageView;
    UIButton *_dismissButton;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
- (void).cxx_destruct;
- (void)callbackWhenDismiss;
- (id)contentViewWithBounds:(struct CGRect)arg1;
- (void)runDisplayAnimation;
- (void)displayWithAnimation:(_Bool)arg1;
- (void)setupSubview;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

