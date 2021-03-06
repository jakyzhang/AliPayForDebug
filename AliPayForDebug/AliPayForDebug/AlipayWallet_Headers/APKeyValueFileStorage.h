//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface APKeyValueFileStorage : NSObject
{
    NSMutableDictionary *_allDataCache;
    NSString *_filePath;
    NSString *_fileName;
    NSRecursiveLock *_storageLock;
    NSString *_userId;
    _Bool _isChanged;
    _Bool _isOpenReport;
    _Bool _hasDelayFlushTask;
}

@property(nonatomic) _Bool hasDelayFlushTask; // @synthesize hasDelayFlushTask=_hasDelayFlushTask;
- (void).cxx_destruct;
- (void)reportInfoToRemote:(id)arg1 errorInfo:(id)arg2;
- (id)fetchDecryptData:(id)arg1 extension:(struct APDataCrypt *)arg2;
- (void)checkDelayFlushTask;
- (void)removeKeyFromCache:(id)arg1;
- (void)setValueForCache:(id)arg1 key:(id)arg2;
- (id)getValueFromCache:(id)arg1;
- (void)deleteExtraMonitorKey;
- (void)loadDataFromFile;
- (_Bool)flushToFile;
- (void)removeItemForKey:(id)arg1 business:(id)arg2 backup:(_Bool)arg3;
- (void)removeItemForKey:(id)arg1 business:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 business:(id)arg3 extension:(struct APDataCrypt *)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2 business:(id)arg3;
- (void)setString:(id)arg1 forKey:(id)arg2 business:(id)arg3 extension:(struct APDataCrypt *)arg4;
- (void)setString:(id)arg1 forKey:(id)arg2 business:(id)arg3;
- (void)setDouble:(double)arg1 forKey:(id)arg2 business:(id)arg3;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2 business:(id)arg3;
- (void)setLongLong:(long long)arg1 forKey:(id)arg2 business:(id)arg3;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 business:(id)arg3;
- (id)objectForKey:(id)arg1 business:(id)arg2 extension:(struct APDataCrypt *)arg3;
- (id)objectForKey:(id)arg1 business:(id)arg2;
- (id)stringForKey:(id)arg1 business:(id)arg2 extension:(struct APDataCrypt *)arg3;
- (id)stringForKey:(id)arg1 business:(id)arg2;
- (double)doubleForKey:(id)arg1 business:(id)arg2 defaultValue:(double)arg3;
- (double)doubleForKey:(id)arg1 business:(id)arg2;
- (_Bool)boolForKey:(id)arg1 business:(id)arg2 defaultValue:(_Bool)arg3;
- (_Bool)boolForKey:(id)arg1 business:(id)arg2;
- (long long)longLongForKey:(id)arg1 business:(id)arg2 defaultValue:(long long)arg3;
- (long long)longLongForKey:(id)arg1 business:(id)arg2;
- (long long)integerForKey:(id)arg1 business:(id)arg2 defaultValue:(long long)arg3;
- (long long)integerForKey:(id)arg1 business:(id)arg2;
- (void)reloadData;
- (id)path;
- (void)didReceiveStartUpEndNotification;
- (void)onEnterBg;
- (void)dealloc;
- (id)initWithPath:(id)arg1 userId:(id)arg2;

@end

