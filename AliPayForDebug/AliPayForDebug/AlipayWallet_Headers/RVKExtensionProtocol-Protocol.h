//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RVKEvent, RVKNode;
@protocol RVKExtensionDataStorageProtocol;

@protocol RVKExtensionProtocol <NSObject>
@property(nonatomic) __weak RVKEvent *currentEvent;
@property(nonatomic) __weak RVKNode *currentTargetNode;
@property(retain, nonatomic) id <RVKExtensionDataStorageProtocol> dataStorage;
@property(nonatomic) _Bool didInited;
- (void)onInit;
@end
