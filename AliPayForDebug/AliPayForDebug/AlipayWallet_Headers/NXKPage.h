//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKScene.h"

#import "NXViewControllerLifeEvent-Protocol.h"
#import "RVKNodeProtocol-Protocol.h"

@class NSString, RVKSceneParam, RVKView, UIViewController;
@protocol ViewControllerProtocol;

@interface NXKPage : RVKScene <NXViewControllerLifeEvent, RVKNodeProtocol>
{
    _Bool _isRVKNode;
    RVKSceneParam *_sceneParamOverride;
    UIViewController<ViewControllerProtocol> *_nxViewController;
}

+ (id)sceneWithSceneParam:(id)arg1 parentObject:(id)arg2;
@property(retain, nonatomic) UIViewController<ViewControllerProtocol> *nxViewController; // @synthesize nxViewController=_nxViewController;
@property(nonatomic) _Bool isRVKNode; // @synthesize isRVKNode=_isRVKNode;
@property(retain, nonatomic) RVKSceneParam *sceneParamOverride; // @synthesize sceneParamOverride=_sceneParamOverride;
- (void).cxx_destruct;
- (void)handleApplicationNotification:(id)arg1;
- (void)removeNotifications4ApplicationEvent;
- (void)addNotifications4ApplicationEvent;
@property(retain, nonatomic) RVKView *psdView;
- (void)injectJsRelyOnAlipayJsBridge;
- (void)injectIndependenceJs;
- (id)dynamicJsUrls;
- (id)init;
- (id)viewController;
- (void)setSceneParam:(id)arg1;
- (id)createParam;
- (id)session;
- (void)callHandler:(id)arg1 data:(id)arg2 callbackImmediatelyIfJSBridgeNotReady:(_Bool)arg3 responseCallback:(CDUnknownBlockType)arg4;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)controller:(id)arg1 viewWillDestroy:(_Bool)arg2;
- (void)controller:(id)arg1 viewDidDisappear:(_Bool)arg2;
- (void)controller:(id)arg1 viewWillDisappear:(_Bool)arg2;
- (void)controller:(id)arg1 viewDidLayoutSubviews:(_Bool)arg2;
- (void)controller:(id)arg1 viewDidAppear:(_Bool)arg2;
- (void)controller:(id)arg1 viewWillAppear:(_Bool)arg2;
- (void)controller:(id)arg1 viewDidUnLoad:(_Bool)arg2;
- (void)controller:(id)arg1 viewDidLoad:(_Bool)arg2;
- (void)controller:(id)arg1 loadView:(_Bool)arg2;
- (id)createViewController:(id)arg1;
- (id)initWithSceneParam:(id)arg1 parentObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

