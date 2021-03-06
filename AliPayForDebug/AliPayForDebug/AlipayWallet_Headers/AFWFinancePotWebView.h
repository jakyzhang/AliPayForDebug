//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WKScriptMessageHandler-Protocol.h"

@class NSMutableURLRequest, NSString, NSURL, UIScrollView, WKWebView;

@interface AFWFinancePotWebView : UIView <WKScriptMessageHandler>
{
    _Bool _loading;
    _Bool _canGoForward;
    WKWebView *_wkWebView;
    NSMutableURLRequest *_request;
    NSString *_ua;
    NSString *_messageChannel;
}

+ (void)recoveryCookies;
+ (void)syncMainProcessCookie;
+ (void)syncDeviceCookieWithStorage:(id)arg1;
+ (void)syncSimulatorCookieWithStorage:(id)arg1;
+ (id)jsBridgeFileContentString;
@property(copy, nonatomic) NSString *messageChannel; // @synthesize messageChannel=_messageChannel;
@property(copy, nonatomic) NSString *ua; // @synthesize ua=_ua;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(readonly, nonatomic) _Bool canGoForward; // @synthesize canGoForward=_canGoForward;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
- (void).cxx_destruct;
- (void)handleWKCookie;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)stopLoading;
- (void)reload;
- (void)goForward;
- (void)goBack;
- (void)loadData:(id)arg1 MIMEType:(id)arg2;
- (void)loadRequest:(id)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) _Bool canGoBack;
@property(readonly, copy, nonatomic) NSURL *URL;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)removeMessageHandle;
- (void)addMessageHandle;
- (id)setupWKConfig;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

