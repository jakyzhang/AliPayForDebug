//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, O2OCommentInitContext, O2OCommentInitModel, O2OViewController, UIImageView, UILabel;
@protocol O2OCommentPublishViewControllerProtocol;

@interface O2OCommentInteractiveUserView : UIView <CAAnimationDelegate>
{
    UIView *_containerView;
    UIImageView *_bgImageView;
    O2OCommentInitContext *_context;
    O2OCommentInitModel *_infoModel;
    O2OViewController<O2OCommentPublishViewControllerProtocol> *_vc;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(readonly, nonatomic) __weak O2OViewController<O2OCommentPublishViewControllerProtocol> *vc; // @synthesize vc=_vc;
@property(readonly, nonatomic) __weak O2OCommentInitModel *infoModel; // @synthesize infoModel=_infoModel;
@property(readonly, nonatomic) __weak O2OCommentInitContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)addScaleAnimationWithCompleteHandler:(CDUnknownBlockType)arg1;
- (void)setupContentLableWithText:(id)arg1;
- (void)setContentLableText:(id)arg1;
- (void)setupViews;
- (id)initWithWidth:(double)arg1 content:(id)arg2 viewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

