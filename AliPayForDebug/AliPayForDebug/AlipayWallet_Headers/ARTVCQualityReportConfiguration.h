//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARTVCQualityReportConfiguration : NSObject
{
    int _step1Ts;
    int _rpcInterval1;
    int _sampleInterval1;
    int _step2Ts;
    int _rpcInterval2;
    int _sampleInterval2;
    int _reportEndTs;
}

@property(nonatomic) int reportEndTs; // @synthesize reportEndTs=_reportEndTs;
@property(nonatomic) int sampleInterval2; // @synthesize sampleInterval2=_sampleInterval2;
@property(nonatomic) int rpcInterval2; // @synthesize rpcInterval2=_rpcInterval2;
@property(nonatomic) int step2Ts; // @synthesize step2Ts=_step2Ts;
@property(nonatomic) int sampleInterval1; // @synthesize sampleInterval1=_sampleInterval1;
@property(nonatomic) int rpcInterval1; // @synthesize rpcInterval1=_rpcInterval1;
@property(nonatomic) int step1Ts; // @synthesize step1Ts=_step1Ts;
- (id)initWithJsonDictionary:(id)arg1;

@end

