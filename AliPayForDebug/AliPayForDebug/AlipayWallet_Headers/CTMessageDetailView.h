//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MFAttributedLabelDelegate-Protocol.h"

@class MFAttributeLabel, NSDictionary, NSString, UILongPressGestureRecognizer, UIScrollView, UITapGestureRecognizer;
@protocol CTMessageDetailViewDelegate;

@interface CTMessageDetailView : UIView <MFAttributedLabelDelegate>
{
    _Bool _enableSelect;
    _Bool _tracksTouch;
    _Bool _isEditing;
    NSString *_text;
    id <CTMessageDetailViewDelegate> _delegate;
    NSDictionary *_chatDataSource;
    UIScrollView *_scrollView;
    MFAttributeLabel *_label;
    UITapGestureRecognizer *_tap;
    UILongPressGestureRecognizer *_longPress;
}

@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) _Bool tracksTouch; // @synthesize tracksTouch=_tracksTouch;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPress; // @synthesize longPress=_longPress;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) MFAttributeLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSDictionary *chatDataSource; // @synthesize chatDataSource=_chatDataSource;
@property(nonatomic) _Bool enableSelect; // @synthesize enableSelect=_enableSelect;
@property(nonatomic) __weak id <CTMessageDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)didEnterBackground:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mfAttributedLabel:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)mfAttributedLabel:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)mfAttributedLabel:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)mfAttributedLabel:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)mfAttributedLabel:(id)arg1 longPressOnLink:(id)arg2 CGRect:(struct CGRect)arg3;
- (void)mfAttributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)hide;
- (void)stopEditing;
- (void)selectAllText;
- (void)collect:(id)arg1;
- (void)selectAllMenu:(id)arg1;
- (void)forwardMenu:(id)arg1;
- (void)copyMenu:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dismissPopMenus;
- (void)onMenuWillHide:(id)arg1;
- (void)setUpPopMenuNotification;
- (void)showPopMenus:(id)arg1;
- (void)longPress:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

