//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MFAttributeLabel, NSString, UIColor, UIView;
@protocol TFHomeATActionViewDelegate;

@interface TFHomeATActionView : UIControl
{
    NSString *_type;
    MFAttributeLabel *_lblText;
    UIView *_viewBg;
    NSString *_text;
    NSString *_link;
    UIColor *_bgColor;
    id <TFHomeATActionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TFHomeATActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIView *viewBg; // @synthesize viewBg=_viewBg;
@property(retain, nonatomic) MFAttributeLabel *lblText; // @synthesize lblText=_lblText;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)touchHandler;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateFrames;
- (void)configActionView:(id)arg1 text:(id)arg2 link:(id)arg3 bgColor:(id)arg4;

@end
