//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface AFWBankTrackerExposureStructure : NSObject
{
    NSMutableArray *_listStructure;
    NSMutableDictionary *_mapStructure;
}

@property(readonly, nonatomic) NSDictionary *mapStructure; // @synthesize mapStructure=_mapStructure;
@property(readonly, nonatomic) NSArray *listStructure; // @synthesize listStructure=_listStructure;
- (void).cxx_destruct;
- (void)resetExposure;
- (_Bool)mapExposureIfNeeded:(id)arg1;
- (void)appendMap:(id)arg1;
- (id)initWithListStructure:(unsigned long long)arg1;
- (id)init;

@end

