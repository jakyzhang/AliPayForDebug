//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;
@protocol APScanContainerMaskDelegate;

@interface APUGScanContainerMaskView : UIView
{
    _Bool _loadingWithoutMarkCode;
    unsigned int _maskType;
    id <APScanContainerMaskDelegate> _maskDelegate;
    NSString *_sourceId;
    UIView *_noNetTipsView;
    UIView *_noNetIconView;
    UIView *_loadingTipsView;
    UIView *_markCodeView;
    UIView *_loadingView;
}

+ (id)buildLoadingViewWithFrame:(struct CGRect)arg1 gradientLineWidth:(double)arg2;
+ (id)buildMarkCodeViewWithFrame:(struct CGRect)arg1 bgColor:(id)arg2 bgCornerRadius:(double)arg3 borderColor:(id)arg4 borderWidth:(double)arg5 centerColor:(id)arg6 centerWidth:(double)arg7 centerCornerRadius:(double)arg8;
+ (id)tipsLabel:(id)arg1;
@property(nonatomic) _Bool loadingWithoutMarkCode; // @synthesize loadingWithoutMarkCode=_loadingWithoutMarkCode;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *markCodeView; // @synthesize markCodeView=_markCodeView;
@property(retain, nonatomic) UIView *loadingTipsView; // @synthesize loadingTipsView=_loadingTipsView;
@property(retain, nonatomic) UIView *noNetIconView; // @synthesize noNetIconView=_noNetIconView;
@property(retain, nonatomic) UIView *noNetTipsView; // @synthesize noNetTipsView=_noNetTipsView;
@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) unsigned int maskType; // @synthesize maskType=_maskType;
@property(nonatomic) __weak id <APScanContainerMaskDelegate> maskDelegate; // @synthesize maskDelegate=_maskDelegate;
- (void).cxx_destruct;
- (id)buildTipsView:(id)arg1 tip2:(id)arg2;
- (void)startLoadingAnimation;
- (void)showMarkCodeAndLoadingAnimation:(struct CGRect)arg1;
- (void)showLoadingAnimation;
- (void)showLoadingWithMarkCodeRect:(struct CGRect)arg1;
- (void)hideLoadingViews;
- (id)buildNoNetIconView;
- (void)hideNoNetViews;
- (void)showNoNetViews;
- (void)layoutSubviews;
- (_Bool)hideMask:(unsigned int)arg1;
- (_Bool)showMaskWithType:(unsigned int)arg1 markCodeRect:(struct CGRect)arg2;
- (_Bool)showMaskWithType:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

