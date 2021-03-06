//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "OSPChannelDlgDelegate-Protocol.h"

@class AUActionSheetAnimation, NSString, OSPBarcodeMemberView, OSPBarcodeView, OSPBarcodeYellowBar, OSPChannelCtr, QRCodeImageView, UIImageView, UILabel;

@interface CodeBothImageView : UIView <OSPChannelDlgDelegate>
{
    UIImageView *backgroundImgView;
    UIView *channelBgView;
    UIView *sepLine2;
    _Bool _hasShowCode;
    _Bool _useCsahierChannel;
    OSPBarcodeView *_barcodeImageView;
    QRCodeImageView *_qrcodeImageView;
    OSPBarcodeYellowBar *_yellowBar;
    AUActionSheetAnimation *_payChannelPage;
    OSPChannelCtr *_channelCtr;
    UILabel *_descLabel;
    OSPChannelCtr *_shortcutBtn;
    UIView *_promotoView;
    UIView *_sepLine;
    OSPBarcodeMemberView *_memberView;
}

@property(nonatomic) _Bool useCsahierChannel; // @synthesize useCsahierChannel=_useCsahierChannel;
@property(nonatomic) _Bool hasShowCode; // @synthesize hasShowCode=_hasShowCode;
@property(retain, nonatomic) OSPBarcodeMemberView *memberView; // @synthesize memberView=_memberView;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) UIView *promotoView; // @synthesize promotoView=_promotoView;
@property(retain, nonatomic) OSPChannelCtr *shortcutBtn; // @synthesize shortcutBtn=_shortcutBtn;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) OSPChannelCtr *channelCtr; // @synthesize channelCtr=_channelCtr;
@property(retain, nonatomic) AUActionSheetAnimation *payChannelPage; // @synthesize payChannelPage=_payChannelPage;
@property(retain, nonatomic) OSPBarcodeYellowBar *yellowBar; // @synthesize yellowBar=_yellowBar;
@property(retain, nonatomic) QRCodeImageView *qrcodeImageView; // @synthesize qrcodeImageView=_qrcodeImageView;
@property(retain, nonatomic) OSPBarcodeView *barcodeImageView; // @synthesize barcodeImageView=_barcodeImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showYellowBarWithTitle:(id)arg1 btnTitle:(id)arg2;
- (void)clearBarcodeImages;
- (void)onClose;
- (void)removeFloatDlg;
- (void)showDialogWithString:(id)arg1 assignedChannel:(id)arg2;
- (void)onShortcutBtnClick;
- (void)showPayChannelPage;
- (void)setPreChannelModelV2:(id)arg1;
- (void)setPreChannelModel:(id)arg1;
- (void)removeFullCode;
- (void)updateWithCode:(id)arg1;
- (void)setPayChannelDisplay:(_Bool)arg1;
- (void)makeErrorViewTop;
- (void)setPromotoViewArea:(id)arg1;
- (void)setShortcutModel:(id)arg1 extText:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

