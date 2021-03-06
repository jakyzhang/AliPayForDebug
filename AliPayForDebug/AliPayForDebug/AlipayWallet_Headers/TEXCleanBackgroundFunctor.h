//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TEXFunctor.h"

@interface TEXCleanBackgroundFunctor : TEXFunctor
{
    int _thresholdUniform;
    int _smoothingUniform;
    int _backgroundColorUniform;
    int _replaceForegroundUniform;
    int _foregroundColorUniform;
    _Bool _replaceForeground;
    int _backgroundColor;
    int _foregroundColor;
    double _threshold;
    double _smoothing;
}

@property(nonatomic) _Bool replaceForeground; // @synthesize replaceForeground=_replaceForeground;
@property(nonatomic) int foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) int backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double smoothing; // @synthesize smoothing=_smoothing;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
- (void)initProgramInContext;
- (void)receiveFramebuffer:(id)arg1 fromOutput:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)init;

@end

