//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ARTVCMessageCache : NSObject
{
    CriticalSection_e2a1dca8 cslock_;
    NSMutableArray *_messages;
}

@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allMessages;
- (void)removeMessageByKey:(id)arg1;
- (void)addMessage:(id)arg1;
- (id)init;

@end

