//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALPPassModel, NSError;

@protocol ALPPassModelDelegate <NSObject>

@optional
- (void)modelDidFail:(ALPPassModel *)arg1 withError:(NSError *)arg2;
- (void)modelDidFinish:(ALPPassModel *)arg1;
- (void)modelDidStart:(ALPPassModel *)arg1;
@end

