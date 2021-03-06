//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, REDetailPreviewView, REImageView, UIActivityIndicatorView, UIView, giftprodGiftHbTemplateViewInfo;

@interface REThemePreviewViewCell : UICollectionViewCell
{
    REImageView *_topImageView;
    REImageView *_bottomImageView;
    REDetailPreviewView *_previewView;
    giftprodGiftHbTemplateViewInfo *_templateModel;
    unsigned long long _imageType;
    UIView *_errorView;
    UIView *_loadingView;
    UIActivityIndicatorView *_indicatorView;
    NSString *_interRemark;
    NSString *_interMoney;
}

@property(retain, nonatomic) NSString *interMoney; // @synthesize interMoney=_interMoney;
@property(retain, nonatomic) NSString *interRemark; // @synthesize interRemark=_interRemark;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(retain, nonatomic) giftprodGiftHbTemplateViewInfo *templateModel; // @synthesize templateModel=_templateModel;
@property(retain, nonatomic) REDetailPreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) REImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) REImageView *topImageView; // @synthesize topImageView=_topImageView;
- (void).cxx_destruct;
- (void)handleDetailImage;
- (void)resetTopImage:(id)arg1 bottomImge:(id)arg2;
- (void)handleUnpackImage;
- (void)switchPageWithPageType:(unsigned long long)arg1;
- (void)reloadWithTemplateModel:(id)arg1 withImageType:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

