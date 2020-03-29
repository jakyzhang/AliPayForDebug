//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKActionButton, UIButton, UIImage, UIImageView, UILabel;
@protocol CTTitleViewDelegate;

@interface CTTitleView : UIView
{
    _Bool _inputingMode;
    _Bool _quteBool;
    _Bool _isNotReceive;
    id <CTTitleViewDelegate> _delegate;
    double _rightWidth;
    double _leftWidth;
    long long _iconTheme;
    unsigned long long _quickMenuStyle;
    UIImageView *_quiteImageView;
    UIImageView *_voiceImageView;
    UIImageView *_notReceiveImageView;
    UILabel *_nameLabel;
    UILabel *_numOfMemberLabel;
    PKActionButton *_quickBtn;
    UIButton *_quickBtnIcon;
    unsigned long long _modeTitle;
    double _minWidth;
    double _minX;
    UIImage *_quickIcon;
}

+ (double)maxTitleViewHeight;
@property(retain, nonatomic) UIImage *quickIcon; // @synthesize quickIcon=_quickIcon;
@property(nonatomic) double minX; // @synthesize minX=_minX;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) unsigned long long modeTitle; // @synthesize modeTitle=_modeTitle;
@property(nonatomic) _Bool isNotReceive; // @synthesize isNotReceive=_isNotReceive;
@property(nonatomic) _Bool quteBool; // @synthesize quteBool=_quteBool;
@property(retain, nonatomic) UIButton *quickBtnIcon; // @synthesize quickBtnIcon=_quickBtnIcon;
@property(retain, nonatomic) PKActionButton *quickBtn; // @synthesize quickBtn=_quickBtn;
@property(retain, nonatomic) UILabel *numOfMemberLabel; // @synthesize numOfMemberLabel=_numOfMemberLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *notReceiveImageView; // @synthesize notReceiveImageView=_notReceiveImageView;
@property(retain, nonatomic) UIImageView *voiceImageView; // @synthesize voiceImageView=_voiceImageView;
@property(retain, nonatomic) UIImageView *quiteImageView; // @synthesize quiteImageView=_quiteImageView;
@property(nonatomic) unsigned long long quickMenuStyle; // @synthesize quickMenuStyle=_quickMenuStyle;
@property(nonatomic) long long iconTheme; // @synthesize iconTheme=_iconTheme;
@property(nonatomic) double leftWidth; // @synthesize leftWidth=_leftWidth;
@property(nonatomic) double rightWidth; // @synthesize rightWidth=_rightWidth;
@property(nonatomic) _Bool inputingMode; // @synthesize inputingMode=_inputingMode;
@property(nonatomic) __weak id <CTTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)quickBtnTaped:(id)arg1;
- (void)adjustFrames;
- (void)layoutSubviews;
- (void)updateQuickMenuTitle:(id)arg1 icon:(id)arg2;
- (void)updateQuickMenuTitle:(id)arg1;
- (void)layoutWithName:(id)arg1 numberOfMember:(long long)arg2 quite:(_Bool)arg3 voiceMode:(unsigned long long)arg4 unreadCount:(id)arg5;
- (void)updateWithName:(id)arg1 numberOfMember:(long long)arg2 quite:(_Bool)arg3 notReceive:(_Bool)arg4 voiceMode:(unsigned long long)arg5 unreadCount:(id)arg6;
- (void)updateWithName:(id)arg1 numberOfMember:(long long)arg2 quite:(_Bool)arg3 voiceMode:(unsigned long long)arg4 unreadCount:(id)arg5;
- (void)setupNotReceiveView;
- (void)setupVoiceView;
- (void)setupQuiteView;
- (void)setupQuickMenuIcon;
- (void)setupQuickMenu;
- (void)setupNumOfMemberLabel;
- (void)setupNameLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end
