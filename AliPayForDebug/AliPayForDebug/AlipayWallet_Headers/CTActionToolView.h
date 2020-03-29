//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CTInputViewActionToolProtocol-Protocol.h"

@class NSString, UIButton;
@protocol CTActionToolViewActionDelegate;

@interface CTActionToolView : UIView <CTInputViewActionToolProtocol>
{
    _Bool _disableActions;
    id <CTActionToolViewActionDelegate> _actionDelegate;
    UIButton *_share;
    UIButton *_collect;
    UIButton *_delete;
}

+ (double)defaultViewHeight;
@property(retain, nonatomic) UIButton *delete; // @synthesize delete=_delete;
@property(retain, nonatomic) UIButton *collect; // @synthesize collect=_collect;
@property(retain, nonatomic) UIButton *share; // @synthesize share=_share;
@property(nonatomic) __weak id <CTActionToolViewActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void).cxx_destruct;
- (void)setDisableActions:(_Bool)arg1;
- (void)actionToolView:(id)arg1 didPerformSEL:(int)arg2;
- (void)clickActionButton:(id)arg1;
- (void)showAllButtons:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addRedDotToTools:(id)arg1;
- (id)collectViewInfos;
- (id)initWithFrame:(struct CGRect)arg1 viewParams:(id)arg2 viewInfos:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
