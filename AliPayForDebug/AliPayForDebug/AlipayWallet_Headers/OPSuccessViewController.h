//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class NSData, OPOrderCodeModel, UIScrollView, UIView;

@interface OPSuccessViewController : DTViewController
{
    _Bool _originalPopEnabled;
    long long _viType;
    NSData *_credentialsData;
    UIScrollView *_scrollView;
    UIView *_naviBar;
    OPOrderCodeModel *_model;
}

@property(nonatomic) _Bool originalPopEnabled; // @synthesize originalPopEnabled=_originalPopEnabled;
@property(retain, nonatomic) OPOrderCodeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *naviBar; // @synthesize naviBar=_naviBar;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSData *credentialsData; // @synthesize credentialsData=_credentialsData;
@property(nonatomic) long long viType; // @synthesize viType=_viType;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)submitHandler;
- (void)initSubviews;
- (_Bool)autohideNavigationBar;
- (void)setupKVO;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOrderModel:(id)arg1;

@end

