//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCConfigurationManager : NSObject
{
    NSMutableDictionary *_welomes;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *welomes; // @synthesize welomes=_welomes;
- (void).cxx_destruct;
- (void)postChangeNotificationWith:(id)arg1;
- (id)keyForCurrentUser;
- (void)saveConfigModel:(id)arg1;
- (void)updateWithSyncMsg:(id)arg1;
- (id)getCurrentUserConfig;
- (id)getLocalDefaultConfig;
- (id)setConfig:(id)arg1 value:(_Bool)arg2 resultCallback:(CDUnknownBlockType)arg3;
- (void)updateContactInfoWith:(id)arg1;
- (id)getSelfProfileInfoAsync:(CDUnknownBlockType)arg1;
- (void)onSelfInfoChangedSync:(id)arg1;
- (id)init;

@end
