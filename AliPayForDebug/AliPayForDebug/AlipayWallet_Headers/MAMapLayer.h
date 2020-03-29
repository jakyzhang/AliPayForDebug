//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@protocol MAMapLayerDelegate;

@interface MAMapLayer : CALayer
{
    id <MAMapLayerDelegate> _coreAnimationDelegate;
}

@property(nonatomic) __weak id <MAMapLayerDelegate> coreAnimationDelegate; // @synthesize coreAnimationDelegate=_coreAnimationDelegate;
- (void).cxx_destruct;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;

@end
