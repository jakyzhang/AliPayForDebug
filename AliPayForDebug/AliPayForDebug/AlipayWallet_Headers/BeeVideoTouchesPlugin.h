//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BeeVideoPlayerPluginDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class BEEBrightnessSlider, BeeVideoPlayerView, NSString, UILabel, UITapGestureRecognizer;
@protocol BeeVideoTouchesPluginDelegate;

@interface BeeVideoTouchesPlugin : UIView <UIGestureRecognizerDelegate, BeeVideoPlayerPluginDelegate>
{
    _Bool _shouldBeginTouch;
    id <BeeVideoTouchesPluginDelegate> _delegate;
    double _originalBrightness;
    double _originalVolume;
    double _originalTime;
    double _originalDuration;
    BeeVideoPlayerView *_playerView;
    long long _moveAction;
    UILabel *_seekTimeLabel;
    double _seekTime;
    BEEBrightnessSlider *_brightnessSlider;
    UITapGestureRecognizer *_controlTapGesture;
    UITapGestureRecognizer *_controlDoubleTapGesture;
    struct CGPoint _originalPoint;
}

@property(retain, nonatomic) UITapGestureRecognizer *controlDoubleTapGesture; // @synthesize controlDoubleTapGesture=_controlDoubleTapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *controlTapGesture; // @synthesize controlTapGesture=_controlTapGesture;
@property(retain, nonatomic) BEEBrightnessSlider *brightnessSlider; // @synthesize brightnessSlider=_brightnessSlider;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
@property(retain, nonatomic) UILabel *seekTimeLabel; // @synthesize seekTimeLabel=_seekTimeLabel;
@property(nonatomic) long long moveAction; // @synthesize moveAction=_moveAction;
@property(nonatomic) __weak BeeVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool shouldBeginTouch; // @synthesize shouldBeginTouch=_shouldBeginTouch;
@property(nonatomic) double originalDuration; // @synthesize originalDuration=_originalDuration;
@property(nonatomic) double originalTime; // @synthesize originalTime=_originalTime;
@property(nonatomic) double originalVolume; // @synthesize originalVolume=_originalVolume;
@property(nonatomic) double originalBrightness; // @synthesize originalBrightness=_originalBrightness;
@property(nonatomic) struct CGPoint originalPoint; // @synthesize originalPoint=_originalPoint;
@property(nonatomic) __weak id <BeeVideoTouchesPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onTap:(id)arg1;
- (void)pluginItemDidUninstall:(id)arg1;
- (void)pluginItemDidInstall:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
