//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PLDImageProtocol-Protocol.h"

@class NSString;

@interface PLDImageHandler : NSObject <PLDImageProtocol>
{
}

- (_Bool)isDataUrl:(id)arg1;
- (_Bool)isMultiMediaTaskId:(id)arg1;
- (void)cancel:(id)arg1;
- (id)sendRequestForLocalImageUrl:(id)arg1 ckAppId:(id)arg2 ckViewId:(id)arg3 size:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)fetchRemoteImage:(id)arg1 option:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)getImageFromSrc:(id)arg1 appId:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
