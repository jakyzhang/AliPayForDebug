//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDOperationQueue;

@interface IDRuleManager : NSObject
{
    _Bool _isRuleCompleted;
    IDOperationQueue *_operationQueue;
}

@property(nonatomic) _Bool isRuleCompleted; // @synthesize isRuleCompleted=_isRuleCompleted;
@property(retain, nonatomic) IDOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)updateRuleComplete:(_Bool)arg1;
- (void)executeStrategyWithRules:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

@end
