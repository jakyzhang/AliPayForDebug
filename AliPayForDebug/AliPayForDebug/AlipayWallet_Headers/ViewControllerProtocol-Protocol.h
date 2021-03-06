//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NXControllerDelegate-Protocol.h"
#import "NXViewControllerLifeEvent-Protocol.h"
#import "RVKExpandoProtocol-Protocol.h"

@class NXANavigationBarManager, NXKPage, RVKView, RVPTabBarManager, UIView;
@protocol NXDNavigationTitleView, NXDPageOption, NXDWebViewInjection, RVAProgressViewProtocol, ViewControllerProtocol;

@protocol ViewControllerProtocol <NXControllerDelegate, NXViewControllerLifeEvent, RVKExpandoProtocol>
- (_Bool)isApplet;
- (id <ViewControllerProtocol>)viewControllerIMP;
- (void)sendCreateRightItemsEvent;
- (UIView *)contentView;
- (RVKView *)rvkView;
- (NXKPage *)scene;

@optional
@property(nonatomic) _Bool originshowProgress;
@property(nonatomic) _Bool isFallbackMode;
@property(retain, nonatomic) id <RVAProgressViewProtocol> nxProgressView;
@property(retain, nonatomic) NXANavigationBarManager *navigationBarManager;
@property(retain, nonatomic) RVPTabBarManager *tabBarManager;
@property(retain, nonatomic) id <NXDNavigationTitleView> navigationTitleView;
@property(retain, nonatomic) id <NXDWebViewInjection> webViewInjectDelegate;
@property(readonly, nonatomic) id <NXDPageOption> options;
@end

