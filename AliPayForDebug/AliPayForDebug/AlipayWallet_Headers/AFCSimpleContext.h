//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFCBaseContext.h"

@interface AFCSimpleContext : AFCBaseContext
{
}

- (void)drawCursor:(id)arg1 withCGContext:(struct CGContext *)arg2;
- (void)drawMinuteGraphAnimation:(id)arg1 withCGContext:(struct CGContext *)arg2;
- (void)drawGridLabel:(id)arg1 withCGContext:(struct CGContext *)arg2;
- (void)drawLoading:(id)arg1 withCGContext:(struct CGContext *)arg2;
- (void)drawRegionGraph:(CDStruct_9fdde268 *)arg1 leftBottomLocation:(struct CGPoint)arg2 withCGContext:(struct CGContext *)arg3 forceSetColor:(_Bool *)arg4;
- (void)drawGraph:(id)arg1 withCGContext:(struct CGContext *)arg2;
- (void)drawGridHeader:(id)arg1 withCGContext:(struct CGContext *)arg2;
- (void)drawRegionGridLines:(CDStruct_af61540b)arg1 withCGContext:(struct CGContext *)arg2 forceSetColor:(_Bool *)arg3;
- (void)drawGrid:(id)arg1 withCGContext:(struct CGContext *)arg2;
- (void)drawGridBackgroud:(id)arg1 withCGContext:(struct CGContext *)arg2;

@end
