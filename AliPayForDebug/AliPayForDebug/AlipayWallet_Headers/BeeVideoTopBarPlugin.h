//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BeeVideoPlayerPluginDelegate-Protocol.h"

@class BeeVideoPlayerTopBar, BeeVideoPlayerView, NSString, UIButton;
@protocol BeeVideoHandlerDelegate;

@interface BeeVideoTopBarPlugin : NSObject <BeeVideoPlayerPluginDelegate>
{
    _Bool _networkTipIsShowed;
    id <BeeVideoHandlerDelegate> _delegate;
    BeeVideoPlayerView *_playerView;
    BeeVideoPlayerTopBar *_topBar;
    UIButton *_exitFullScreenBtn;
    UIButton *_qualityButton;
    UIButton *_rateButton;
}

@property(retain, nonatomic) UIButton *rateButton; // @synthesize rateButton=_rateButton;
@property(retain, nonatomic) UIButton *qualityButton; // @synthesize qualityButton=_qualityButton;
@property(retain, nonatomic) UIButton *exitFullScreenBtn; // @synthesize exitFullScreenBtn=_exitFullScreenBtn;
@property(retain, nonatomic) BeeVideoPlayerTopBar *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) __weak BeeVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <BeeVideoHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setView:(id)arg1 visible:(_Bool)arg2 withAnimation:(_Bool)arg3;
- (void)btnClicked:(id)arg1;
- (void)showTopBar:(_Bool)arg1;
- (void)handleFullScreen:(_Bool)arg1;
- (void)showTopBar:(_Bool)arg1 withAnimation:(_Bool)arg2;
- (void)updateTopBar:(long long)arg1;
- (void)updateCtrl:(long long)arg1;
- (_Bool)isShowRateButton;
- (_Bool)isShowQualityButton;
- (void)resetUI;
- (void)checkNetWorkState;
- (void)BeeVideoPlayerView:(id)arg1 showView:(_Bool)arg2 byViewTag:(long long)arg3;
- (void)BeeVideoPlayerView:(id)arg1 failed:(id)arg2;
- (void)BeeVideoPlayerView:(id)arg1 netStatusChangedTo:(int)arg2;
- (void)BeeVideoPlayerView:(id)arg1 initWithSrc:(id)arg2;
- (void)BeevideoPlayerViewLayoutChange:(id)arg1;
- (void)BeeVideoPlayerView:(id)arg1 changeProperty:(id)arg2;
- (void)pluginItemDidUninstall:(id)arg1;
- (void)pluginItemDidInstall:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

