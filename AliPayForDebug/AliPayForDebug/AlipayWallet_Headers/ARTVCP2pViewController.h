//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "ARTVCCallDelegate-Protocol.h"
#import "ARTVCDynamicConfigProtocol-Protocol.h"
#import "H5ServiceDelegate-Protocol.h"

@class ARTVCP2pCall, H5WebViewController, NSString, UIView;
@protocol H5WebViewInterface;

@interface ARTVCP2pViewController : DTViewController <ARTVCCallDelegate, ARTVCDynamicConfigProtocol, H5ServiceDelegate>
{
    _Bool _fullScreen;
    _Bool _fullScreenAfterVideoCallStarted;
    _Bool _hideLocalView;
    _Bool _hideRemoteView;
    _Bool _enableStats;
    _Bool _useBackCamera;
    _Bool _underConnecting;
    _Bool _videoViewAdded;
    _Bool _addLocalViewFirst;
    float _localViewTop;
    float _localViewLeft;
    float _localViewWidth;
    float _localViewHeight;
    float _remoteViewTop;
    float _remoteViewLeft;
    float _remoteViewWidth;
    float _remoteViewHeight;
    int _bitrate;
    H5WebViewController *_loadingObserver;
    H5WebViewController *_callObserver;
    NSString *_uid;
    NSString *_customTitle;
    NSString *_h5PageURL;
    double _timeout;
    long long _defaultFunction;
    unsigned long long _videoProfile;
    long long _clientAppType;
    ARTVCP2pCall *_p2pCall;
    UIView<H5WebViewInterface> *_tranparentH5View;
    UIView *_videoViewContainer;
    UIView *_localView;
    UIView *_remoteView;
    long long _lastSdpMode;
    struct CGRect _localViewframe;
    struct CGRect _remoteViewframe;
}

@property(nonatomic) _Bool addLocalViewFirst; // @synthesize addLocalViewFirst=_addLocalViewFirst;
@property(nonatomic) struct CGRect remoteViewframe; // @synthesize remoteViewframe=_remoteViewframe;
@property(nonatomic) struct CGRect localViewframe; // @synthesize localViewframe=_localViewframe;
@property(nonatomic) long long lastSdpMode; // @synthesize lastSdpMode=_lastSdpMode;
@property(nonatomic) _Bool videoViewAdded; // @synthesize videoViewAdded=_videoViewAdded;
@property(nonatomic) _Bool underConnecting; // @synthesize underConnecting=_underConnecting;
@property(retain, nonatomic) UIView *remoteView; // @synthesize remoteView=_remoteView;
@property(retain, nonatomic) UIView *localView; // @synthesize localView=_localView;
@property(retain, nonatomic) UIView *videoViewContainer; // @synthesize videoViewContainer=_videoViewContainer;
@property(retain, nonatomic) UIView<H5WebViewInterface> *tranparentH5View; // @synthesize tranparentH5View=_tranparentH5View;
@property(retain, nonatomic) ARTVCP2pCall *p2pCall; // @synthesize p2pCall=_p2pCall;
@property(nonatomic) long long clientAppType; // @synthesize clientAppType=_clientAppType;
@property(nonatomic) unsigned long long videoProfile; // @synthesize videoProfile=_videoProfile;
@property(nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) _Bool useBackCamera; // @synthesize useBackCamera=_useBackCamera;
@property(nonatomic) _Bool enableStats; // @synthesize enableStats=_enableStats;
@property(nonatomic) long long defaultFunction; // @synthesize defaultFunction=_defaultFunction;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) float remoteViewHeight; // @synthesize remoteViewHeight=_remoteViewHeight;
@property(nonatomic) float remoteViewWidth; // @synthesize remoteViewWidth=_remoteViewWidth;
@property(nonatomic) float remoteViewLeft; // @synthesize remoteViewLeft=_remoteViewLeft;
@property(nonatomic) float remoteViewTop; // @synthesize remoteViewTop=_remoteViewTop;
@property(nonatomic) _Bool hideRemoteView; // @synthesize hideRemoteView=_hideRemoteView;
@property(nonatomic) float localViewHeight; // @synthesize localViewHeight=_localViewHeight;
@property(nonatomic) float localViewWidth; // @synthesize localViewWidth=_localViewWidth;
@property(nonatomic) float localViewLeft; // @synthesize localViewLeft=_localViewLeft;
@property(nonatomic) float localViewTop; // @synthesize localViewTop=_localViewTop;
@property(nonatomic) _Bool hideLocalView; // @synthesize hideLocalView=_hideLocalView;
@property(nonatomic) _Bool fullScreenAfterVideoCallStarted; // @synthesize fullScreenAfterVideoCallStarted=_fullScreenAfterVideoCallStarted;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(copy, nonatomic) NSString *h5PageURL; // @synthesize h5PageURL=_h5PageURL;
@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) __weak H5WebViewController *callObserver; // @synthesize callObserver=_callObserver;
@property(nonatomic) __weak H5WebViewController *loadingObserver; // @synthesize loadingObserver=_loadingObserver;
- (void).cxx_destruct;
- (void)onCallEvent:(id)arg1;
- (void)h5PageLoadFinished:(_Bool)arg1;
- (id)configWithKey:(id)arg1;
- (void)participant:(id)arg1 didPeerLeaveRoom:(id)arg2 leaveReason:(long long)arg3;
- (void)participant:(id)arg1 didPeerReply:(int)arg2 callId:(id)arg3;
- (void)participant:(id)arg1 didPeerReplyToInvite:(id)arg2;
- (void)participant:(id)arg1 didReceiveForwardMsg:(id)arg2;
- (void)participant:(id)arg1 didGetPeerUid:(id)arg2;
- (void)participant:(id)arg1 didReceiveRoomInfo:(id)arg2;
- (void)didFirstVideoFrameRendered:(id)arg1 participantId:(id)arg2;
- (void)participant:(id)arg1 didAvailabeSendBandwidthBecomeLow:(_Bool)arg2 currentBandwidth:(double)arg3;
- (void)didNetworkChangedTo:(long long)arg1;
- (void)didAudioPlayModeChangedTo:(unsigned long long)arg1;
- (void)participant:(id)arg1 didEncounterError:(id)arg2;
- (void)participant:(id)arg1 didStateChangedTo:(long long)arg2;
- (void)didVideoViewRenderStopped:(id)arg1 participantId:(id)arg2;
- (void)didFirstVideoFrameRenderedForParticipantId:(id)arg1;
- (void)didVideoRenderViewInitialized:(id)arg1 participantId:(id)arg2;
- (void)didMicrophonePermissionNotAllowed;
- (void)didCameraPermissionNotAllowed;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)startCameraIfNeed:(long long)arg1;
- (void)addRemote:(_Bool)arg1;
- (void)addLocal:(_Bool)arg1;
- (_Bool)localIsBigger;
- (void)removeVideoViews;
- (void)createAndAddVideoViewsIfNeed:(long long)arg1;
- (void)createP2pCallObjects;
- (id)createTransparentH5View;
- (void)addTransparentH5View;
- (void)appWillEnterForegroundNotification;
- (void)layout;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)callbackBackCommand;
- (void)back;
- (void)viewDidLoad;
- (void)goBack;
- (void)switchVideoView;
- (id)snapshot:(_Bool)arg1;
- (void)hideNavigationBar:(_Bool)arg1;
- (void)muteMicrophone:(_Bool)arg1;
- (void)switchCamera;
- (void)enableCamera:(_Bool)arg1;
- (id)sendTextOrEvent:(id)arg1;
- (_Bool)endFunctionCall:(id)arg1;
- (id)startFunctionCall:(id)arg1;
- (_Bool)invite:(id)arg1;
- (_Bool)leaveRoom:(id)arg1;
- (_Bool)joinRoom:(id)arg1;
- (_Bool)createRoom:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

