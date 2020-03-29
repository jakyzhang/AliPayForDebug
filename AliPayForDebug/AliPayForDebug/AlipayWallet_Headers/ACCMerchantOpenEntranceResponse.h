//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ACCMerchantOpenEntranceResponse : NSObject
{
    _Bool _success;
    _Bool _needRetry;
    _Bool _entranceShow;
    int _resultCode;
    NSString *_resultMsg;
    NSDictionary *_extinfos;
    NSString *_openUrl;
    NSString *_entranceName;
    NSString *_serverDisplayName;
}

+ (Class)extinfosElementClass;
@property(retain, nonatomic) NSString *serverDisplayName; // @synthesize serverDisplayName=_serverDisplayName;
@property(retain, nonatomic) NSString *entranceName; // @synthesize entranceName=_entranceName;
@property(retain, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(nonatomic) _Bool entranceShow; // @synthesize entranceShow=_entranceShow;
@property(nonatomic) _Bool needRetry; // @synthesize needRetry=_needRetry;
@property(retain, nonatomic) NSDictionary *extinfos; // @synthesize extinfos=_extinfos;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
