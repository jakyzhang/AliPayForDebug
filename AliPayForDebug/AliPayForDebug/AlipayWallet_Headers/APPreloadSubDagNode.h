//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBlockOperation, NSMutableDictionary, NSString;

@interface APPreloadSubDagNode : NSObject
{
    NSString *_bizType;
    NSString *_subBizType;
    unsigned long long _preloadType;
    NSString *_customPhase;
    CDUnknownBlockType _block;
    NSBlockOperation *_operation;
    NSArray *_dependencies;
    NSMutableDictionary *_result;
}

@property(retain, nonatomic) NSMutableDictionary *result; // @synthesize result=_result;
@property(copy, nonatomic) NSArray *dependencies; // @synthesize dependencies=_dependencies;
@property(retain, nonatomic) NSBlockOperation *operation; // @synthesize operation=_operation;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSString *customPhase; // @synthesize customPhase=_customPhase;
@property(nonatomic) unsigned long long preloadType; // @synthesize preloadType=_preloadType;
@property(copy, nonatomic) NSString *subBizType; // @synthesize subBizType=_subBizType;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;

@end
