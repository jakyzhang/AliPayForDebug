//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapIndoorData : AMapSearchObject
{
    long long _floor;
    NSString *_floorName;
    NSString *_pid;
}

+ (id)ajo_mapping;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *floorName; // @synthesize floorName=_floorName;
@property(nonatomic) long long floor; // @synthesize floor=_floor;
- (void).cxx_destruct;
- (id)init;

@end
