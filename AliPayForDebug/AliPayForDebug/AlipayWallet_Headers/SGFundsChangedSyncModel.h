//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface SGFundsChangedSyncModel : NSObject <NSCoding>
{
    _Bool _close;
    NSString *_text;
    NSString *_linkText;
    NSString *_sessionId;
    NSString *_showTime;
    NSString *_url;
    NSString *_bizType;
}

@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *showTime; // @synthesize showTime=_showTime;
@property(nonatomic) _Bool close; // @synthesize close=_close;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;

@end
