//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class AUButton, NSString, UIPageControl, UIScrollView;

@interface APSafeBoxGuideViewController : UIViewController <UIScrollViewDelegate>
{
    UIScrollView *_guideScrollView;
    UIPageControl *_pageControl;
    AUButton *_signButton;
}

@property(retain, nonatomic) AUButton *signButton; // @synthesize signButton=_signButton;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *guideScrollView; // @synthesize guideScrollView=_guideScrollView;
- (void).cxx_destruct;
- (void)signButtonClicked;
- (void)agreeProtocol;
- (void)addAgreementView;
- (void)addGuideViews;
- (void)addPageControl;
- (void)scrollViewDidScroll:(id)arg1;
- (void)addGuideScrollView;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
