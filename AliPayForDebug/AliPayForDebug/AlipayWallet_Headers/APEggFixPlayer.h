//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APEggPlayer-Protocol.h"

@class NSString, NSTimer, UIImage, UIImageView, UIView;

@interface APEggFixPlayer : NSObject <APEggPlayer>
{
    UIImageView *_animatedView;
    UIView *_parentView;
    UIImage *_image;
    NSTimer *_timer;
    _Bool _isPlaying;
    double _lifeTime;
    CDUnknownBlockType _eggTapAction;
}

@property(copy, nonatomic) CDUnknownBlockType eggTapAction; // @synthesize eggTapAction=_eggTapAction;
@property(nonatomic) double lifeTime; // @synthesize lifeTime=_lifeTime;
- (void).cxx_destruct;
- (void)stopTimerHandler;
- (double)hide;
- (void)stop;
- (_Bool)isPlaying;
- (void)pressEggAction;
- (void)play;
- (id)initWithSuperview:(id)arg1 andImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
