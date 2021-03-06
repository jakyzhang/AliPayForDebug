//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CTToolBoxEmojiComponentProtocol-Protocol.h"
#import "EmotionBoardViewDelegate-Protocol.h"

@class EmotionBoardView, NSString;
@protocol CTToolBoxEmojiComponentLayoutDelegate, CTToolBoxEmojiComponentSessionDelegate, CTToolBoxGeneralComponentLayoutDelegate, CTToolBoxGeneralComponentSessionDelegate;

@interface CTToolBoxEmojiComponent : UIView <EmotionBoardViewDelegate, CTToolBoxEmojiComponentProtocol>
{
    id <CTToolBoxEmojiComponentLayoutDelegate> _layoutDelegate;
    id <CTToolBoxEmojiComponentSessionDelegate> _sessionDelegate;
    EmotionBoardView *_emojiView;
    NSString *_sessionType;
    NSString *_sessionId;
}

+ (double)defautHeight;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) EmotionBoardView *emojiView; // @synthesize emojiView=_emojiView;
@property(nonatomic) __weak id <CTToolBoxGeneralComponentSessionDelegate> sessionDelegate;
@property(nonatomic) __weak id <CTToolBoxGeneralComponentLayoutDelegate> layoutDelegate;
- (void).cxx_destruct;
- (void)emojiTextViewHasText:(_Bool)arg1;
- (void)deleteButtonPressed;
- (void)sendButtonPressed;
- (void)emotionToSend:(id)arg1;
- (_Bool)sessionTypeIsDiscussGroup;
- (_Bool)sessionTypeIsGroup;
- (_Bool)sessionTypeIsPrivate;
- (void)updateEmojiView;
- (void)analysisParamsWithDict:(id)arg1;
- (void)setupBaseUI;
- (id)initWithFrame:(struct CGRect)arg1 viewParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

