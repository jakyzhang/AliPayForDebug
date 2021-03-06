//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "AFEWebGuideViewDelegate-Protocol.h"

@class AFEWebGuideView, NSString, ToastManagerView, UIViewController, ZDocCamera, ZDocImageUploader, ZDocLocalDataModel, ZDocRemoteMonitor, ZDocUIController;
@protocol ZDocCardManagerResultDelegate;

@interface ZDocCardManagerBaseViewController : DTViewController <AFEWebGuideViewDelegate>
{
    _Bool _bIsCardAndFace;
    _Bool _bIsFromCardPackage;
    _Bool _deviceCheckEndLog;
    _Bool _quited;
    id <ZDocCardManagerResultDelegate> _delegate;
    ZDocLocalDataModel *_dataModel;
    ZDocRemoteMonitor *_monitor;
    UIViewController *_rootVC;
    ZDocUIController *_uiController;
    ZDocCamera *_camera;
    ZDocImageUploader *_imgUploader;
    ToastManagerView *_timeOutToast;
    ToastManagerView *_limitToast;
    ToastManagerView *_uploadFailToast;
    ToastManagerView *_networkFailToast;
    ToastManagerView *_interruptToast;
    ToastManagerView *_quitToast;
    AFEWebGuideView *_guideView;
}

@property(nonatomic) _Bool quited; // @synthesize quited=_quited;
@property(nonatomic) _Bool deviceCheckEndLog; // @synthesize deviceCheckEndLog=_deviceCheckEndLog;
@property(retain, nonatomic) AFEWebGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) ToastManagerView *quitToast; // @synthesize quitToast=_quitToast;
@property(retain, nonatomic) ToastManagerView *interruptToast; // @synthesize interruptToast=_interruptToast;
@property(retain, nonatomic) ToastManagerView *networkFailToast; // @synthesize networkFailToast=_networkFailToast;
@property(retain, nonatomic) ToastManagerView *uploadFailToast; // @synthesize uploadFailToast=_uploadFailToast;
@property(retain, nonatomic) ToastManagerView *limitToast; // @synthesize limitToast=_limitToast;
@property(retain, nonatomic) ToastManagerView *timeOutToast; // @synthesize timeOutToast=_timeOutToast;
@property(retain, nonatomic) ZDocImageUploader *imgUploader; // @synthesize imgUploader=_imgUploader;
@property(retain, nonatomic) ZDocCamera *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) ZDocUIController *uiController; // @synthesize uiController=_uiController;
@property(nonatomic) __weak UIViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) ZDocRemoteMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) ZDocLocalDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <ZDocCardManagerResultDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bIsFromCardPackage; // @synthesize bIsFromCardPackage=_bIsFromCardPackage;
@property(nonatomic) _Bool bIsCardAndFace; // @synthesize bIsCardAndFace=_bIsCardAndFace;
- (void).cxx_destruct;
- (void)onLoadFinished:(_Bool)arg1;
- (void)onButtonCancel;
- (void)onButtonBegin;
- (void)quit;
- (_Bool)canUseNewQuit;
- (_Bool)checkCamera;
- (void)callbackWithFlag:(id)arg1;
- (void)setUpConnector;
- (void)setUpCamera;
- (void)back;
- (void)initCurrentViewWithMode:(id)arg1 andUIType:(id)arg2;
- (void)initLocalParametersWithIndex:(id)arg1;
- (void)setupTouchQuitBtn;
- (void)limitQuit;
- (void)removeAllObserver;
- (void)appWillResignActive;
- (void)appWillEnterForegound;
- (void)appDidEnterBackground;
- (void)setUpObserver;
- (void)initBaseCardManager;
- (void)removeAllToasts;
- (void)onLogoutNotification:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDestroy;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

