//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTVCMCUBasicNotify.h"

@class ARTVCIceMessage, NSString;

@interface ARTVCMCUIceMsgNotify : ARTVCMCUBasicNotify
{
    ARTVCIceMessage *_msg;
    NSString *_streamId;
}

@property(copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) ARTVCIceMessage *msg; // @synthesize msg=_msg;
- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)arg1;

@end

