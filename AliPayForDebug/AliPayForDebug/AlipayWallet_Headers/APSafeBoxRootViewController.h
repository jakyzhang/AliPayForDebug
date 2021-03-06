//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class APMainPageExceptionView, APSafeBoxGuideViewController, APSafeBoxMainPageViewController, UIViewController;

@interface APSafeBoxRootViewController : DTViewController
{
    UIViewController *_currentVC;
    APSafeBoxGuideViewController *_guideView;
    APSafeBoxMainPageViewController *_mainPageView;
    APMainPageExceptionView *_exceptionView;
}

@property(retain, nonatomic) APMainPageExceptionView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(retain, nonatomic) APSafeBoxMainPageViewController *mainPageView; // @synthesize mainPageView=_mainPageView;
@property(retain, nonatomic) APSafeBoxGuideViewController *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
- (void).cxx_destruct;
- (void)loadExceptionView;
- (void)realNameVerify;
- (void)handleResult:(id)arg1;
- (void)quarySignCondition;
- (void)replaceCurrentVC:(id)arg1 with:(id)arg2;
- (void)showMainPageView;
- (void)showGuideView;
- (void)onBack;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)retry;
- (void)schemeRefreshMainPageView:(CDUnknownBlockType)arg1;

@end

