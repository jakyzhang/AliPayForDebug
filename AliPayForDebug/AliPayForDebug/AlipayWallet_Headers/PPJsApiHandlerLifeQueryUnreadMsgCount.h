//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPJsApiHandlerBase.h"

@interface PPJsApiHandlerLifeQueryUnreadMsgCount : PPJsApiHandlerBase
{
}

- (long long)ccUnreadMessageCount:(id)arg1 userId:(id)arg2;
- (long long)chatUnreadMessageCount:(id)arg1 userId:(id)arg2;
- (void)pp_handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)receiveMonitor:(id)arg1;
- (_Bool)msgTypeListCheck:(id)arg1;

@end

