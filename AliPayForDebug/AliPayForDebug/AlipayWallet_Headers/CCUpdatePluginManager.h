//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCPluginManager-Protocol.h"

@class NSDictionary, NSString;

@interface CCUpdatePluginManager : NSObject <CCPluginManager>
{
    NSDictionary *_info;
}

@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)findPlugin:(id)arg1 param:(id)arg2 enumerate:(CDUnknownBlockType)arg3;
- (id)findPlugin:(id)arg1 param:(id)arg2;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
