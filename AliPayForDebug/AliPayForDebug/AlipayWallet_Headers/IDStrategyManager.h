//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDStrategy;

@interface IDStrategyManager : NSObject
{
    IDStrategy *_strategy;
}

@property(retain, nonatomic) IDStrategy *strategy; // @synthesize strategy=_strategy;
- (void).cxx_destruct;
- (void)executeWithContext:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

