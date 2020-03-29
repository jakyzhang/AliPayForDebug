//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "H5ServiceDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AUButton, AUILoadingIndicatorView, NSString, UIImageView, UILabel, UITapGestureRecognizer, UIViewController;
@protocol ASQuestionaireWindowDelegate, H5WebViewInterface, UIScrollViewDelegate;

@interface ASQuestionaireWindow : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, H5ServiceDelegate>
{
    id <ASQuestionaireWindowDelegate> _delegate;
    UIImageView *_closeButton;
    UILabel *_titleLabel;
    NSString *_webURL;
    CDUnknownBlockType _callback;
    AUILoadingIndicatorView *_loadView;
    UIView<H5WebViewInterface> *_webView;
    UIView *_backView;
    UILabel *_loadLabel;
    id <UIScrollViewDelegate> _oldScrollDelegate;
    UITapGestureRecognizer *_tapWeb;
    UIView *_titleView;
    AUButton *_submitButton;
    NSString *_spaceId;
    UIViewController *_popVC;
}

@property(nonatomic) __weak UIViewController *popVC; // @synthesize popVC=_popVC;
@property(retain, nonatomic) NSString *spaceId; // @synthesize spaceId=_spaceId;
@property(retain, nonatomic) AUButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UITapGestureRecognizer *tapWeb; // @synthesize tapWeb=_tapWeb;
@property(nonatomic) __weak id <UIScrollViewDelegate> oldScrollDelegate; // @synthesize oldScrollDelegate=_oldScrollDelegate;
@property(retain, nonatomic) UILabel *loadLabel; // @synthesize loadLabel=_loadLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView<H5WebViewInterface> *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) AUILoadingIndicatorView *loadView; // @synthesize loadView=_loadView;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <ASQuestionaireWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)keyboardWillShown:(id)arg1;
- (void)webWindowAction:(id)arg1;
- (void)submit;
- (void)backToPreWeb;
- (void)updateButtonStatus:(_Bool)arg1;
- (void)upDataTitle:(id)arg1 backButtonStyle:(long long)arg2;
- (void)dealloc;
- (void)closeWebWindow;
- (void)autoCloseWebwindow;
- (void)show;
- (double)webViewHeight;
- (void)loadTitleUI:(id)arg1;
- (void)loadDefualt;
- (id)initWihtType:(unsigned long long)arg1 title:(id)arg2 url:(id)arg3 withSpaceId:(id)arg4 viewController:(id)arg5 closeCallBack:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
