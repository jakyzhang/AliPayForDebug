//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IBeeVideoManager-Protocol.h"

@class NSString;

@interface BeeVideoManager : NSObject <IBeeVideoManager>
{
}

+ (id)shareInstance;
- (id)getThumbnailWithIdentifier:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getPosterFromUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getLocalIdWithPosterImage:(id)arg1;
- (id)getRealPathFromLocalId:(id)arg1;
- (_Bool)cancelTaskWithTaskId:(id)arg1;
- (_Bool)cancelTaskWithIdentifier:(id)arg1 business:(id)arg2;
- (id)uploadVideo:(id)arg1 business:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)downloadVideo:(id)arg1 business:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isCachedWithUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

