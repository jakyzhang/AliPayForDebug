//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APLogAutoPageStatus : NSObject
{
    NSString *_pageId;
    NSString *_pageSpmId;
    NSString *_currentViewId;
    NSString *_clickPageId;
    NSString *_clickViewId;
    NSString *_clickViewKey;
    NSString *_lastClickViewId;
}

@property(retain) NSString *lastClickViewId; // @synthesize lastClickViewId=_lastClickViewId;
@property(retain) NSString *clickViewKey; // @synthesize clickViewKey=_clickViewKey;
@property(retain) NSString *clickViewId; // @synthesize clickViewId=_clickViewId;
@property(retain) NSString *clickPageId; // @synthesize clickPageId=_clickPageId;
@property(retain) NSString *currentViewId; // @synthesize currentViewId=_currentViewId;
@property(copy) NSString *pageSpmId; // @synthesize pageSpmId=_pageSpmId;
@property(copy) NSString *pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *ref;
- (id)init;

@end
