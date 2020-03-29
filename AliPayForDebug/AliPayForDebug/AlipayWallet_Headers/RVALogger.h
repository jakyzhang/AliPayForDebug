//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RVALoggerDelegate;

@interface RVALogger : NSObject
{
    id <RVALoggerDelegate> _delegate;
}

+ (id)formateDictionaryFromConcatedLoag:(id)arg1;
+ (id)getCommonDatasFromPage:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) __weak id <RVALoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)behaviorWithData:(id)arg1 contentView:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)behaviorWithType:(id)arg1 commonDatas:(id)arg2 extDatas:(id)arg3 currentVC:(id)arg4;
- (void)performanceWithType:(id)arg1 commonDatas:(id)arg2 properties:(id)arg3 stages:(id)arg4 events:(id)arg5;
- (void)errorWithType:(id)arg1 code:(id)arg2 msg:(id)arg3 commonDatas:(id)arg4 extDatas:(id)arg5;

@end
