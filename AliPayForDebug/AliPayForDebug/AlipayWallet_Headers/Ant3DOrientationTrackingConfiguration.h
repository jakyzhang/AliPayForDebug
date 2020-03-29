//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Ant3DConfiguration.h"

@interface Ant3DOrientationTrackingConfiguration : Ant3DConfiguration
{
    float _initMatrix[16];
    float _initRotation[16];
    _Bool _coherent;
    unsigned long long _attitudeMode;
    unsigned long long _resetMode;
    unsigned long long _cs;
}

+ (_Bool)isSupported;
@property(nonatomic) unsigned long long cs; // @synthesize cs=_cs;
@property(readonly, nonatomic) unsigned long long resetMode; // @synthesize resetMode=_resetMode;
@property(nonatomic) _Bool coherent; // @synthesize coherent=_coherent;
@property(nonatomic) unsigned long long attitudeMode; // @synthesize attitudeMode=_attitudeMode;
- (void)updateResetMode;
- (id)init;

@end
