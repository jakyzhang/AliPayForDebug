//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AORecentUsedApp.h"

@class NSString;

@interface AORecentUsedSortApp : AORecentUsedApp
{
    NSString *_itemId;
    NSString *_nbsn;
    NSString *_nbsv;
    NSString *_scheme;
}

@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *nbsv; // @synthesize nbsv=_nbsv;
@property(copy, nonatomic) NSString *nbsn; // @synthesize nbsn=_nbsn;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)uniqueIdentier;
- (_Bool)isOnlineApp;
- (id)replaceAppId;
- (id)toDictionary;
- (void)updateWithRecentUsedAppInfo:(id)arg1;
- (void)updateWithACApp:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

