//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface MQPTplTrack : NSObject <NSCoding>
{
    NSString *_tplName;
    NSString *_netType;
    NSString *_reason;
    NSString *_succ;
    NSString *_time;
    NSString *_traceType;
    NSString *_isRender;
}

@property(copy, nonatomic) NSString *isRender; // @synthesize isRender=_isRender;
@property(copy, nonatomic) NSString *traceType; // @synthesize traceType=_traceType;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *succ; // @synthesize succ=_succ;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(copy, nonatomic) NSString *tplName; // @synthesize tplName=_tplName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 net:(id)arg2 reason:(id)arg3 succ:(id)arg4 time:(id)arg5 traceType:(id)arg6 isRender:(id)arg7;

@end
