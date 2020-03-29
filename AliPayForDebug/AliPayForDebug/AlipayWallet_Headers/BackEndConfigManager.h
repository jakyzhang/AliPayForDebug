//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, OpTypeRpcIdManager;

@interface BackEndConfigManager : NSObject
{
    NSMutableDictionary *_spmDict;
    NSMutableDictionary *_spmTrackInfoDict;
    NSMutableDictionary *_timestampDict;
    long long _backEndExpExpiredTime;
    NSString *_tag;
    NSString *_uniqueId;
    NSString *_spmDictKey;
    NSString *_timeStampDictKey;
    NSString *_spmTrackInfoDictKey;
    NSString *_rpcIdDictKey;
    OpTypeRpcIdManager *_opTypeRpcIdManager;
    _Bool _updated;
}

@property _Bool updated; // @synthesize updated=_updated;
- (void).cxx_destruct;
- (_Bool)updateTimestampByOpType:(id)arg1 spm:(id)arg2;
- (_Bool)hardDelelteCarriedBackInfoByOpType:(id)arg1;
- (_Bool)setTimestampToZeroByOpType:(id)arg1;
- (_Bool)softDelelteTrackInfoByOpType:(id)arg1;
- (void)spmDictUnserialize:(id)arg1;
- (id)spmDictSerialize;
- (id)timestampDictSerialize;
- (id)timestampDictUnserialize:(id)arg1;
- (_Bool)deleteCarriedBackInfoForSpm:(id)arg1 opType:(id)arg2;
- (_Bool)clear;
- (void)addToSpmDict:(id)arg1 forSpm:(id)arg2 forRpc:(id)arg3;
- (_Bool)updateTrackStr:(id)arg1 bySpm:(id)arg2 opType:(id)arg3;
- (_Bool)updateExpid:(id)arg1 bySpm:(id)arg2 opType:(id)arg3;
- (_Bool)updateExpidStr:(id)arg1 bySpm:(id)arg2 opType:(id)arg3;
- (_Bool)update:(id)arg1 forRpc:(id)arg2 forSpm:(id)arg3 forRpcid:(id)arg4;
- (_Bool)load;
- (_Bool)dump;
- (id)getRpcIdForSpm:(id)arg1;
- (id)getExtInfoForSpmA:(id)arg1;
- (id)experimentsWithSpmA:(id)arg1;
- (id)initWithUniqueId:(id)arg1;
- (id)init;

@end
