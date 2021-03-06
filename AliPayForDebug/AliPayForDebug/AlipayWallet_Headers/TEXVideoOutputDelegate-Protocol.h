//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, TEXVideoOutput, UIImage;

@protocol TEXVideoOutputDelegate <NSObject>
- (void)videoOutput:(TEXVideoOutput *)arg1 snapshot:(UIImage *)arg2;
- (void)videoOutputComplete:(TEXVideoOutput *)arg1;
- (void)videoOutput:(TEXVideoOutput *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoOutputStarted:(TEXVideoOutput *)arg1;
@end

