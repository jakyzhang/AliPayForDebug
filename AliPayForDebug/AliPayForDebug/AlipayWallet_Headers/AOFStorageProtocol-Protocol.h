//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol AOFStorageProtocol <NSObject>
- (NSArray *)arrayForKey:(NSString *)arg1 class:(Class)arg2;
- (_Bool)saveArray:(NSArray *)arg1 key:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1 class:(Class)arg2;
- (_Bool)saveObject:(id)arg1 key:(NSString *)arg2;
@end

