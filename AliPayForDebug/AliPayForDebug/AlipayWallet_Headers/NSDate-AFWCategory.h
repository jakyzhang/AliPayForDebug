//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (AFWCategory)
+ (long long)afw_daysBetweenDate:(id)arg1 andDate:(id)arg2;
+ (id)afw_dateWithJavaTimestamp:(double)arg1;
- (id)afw_dateByAddingDays:(long long)arg1;
- (id)afw_dateByAddingWeeks:(long long)arg1;
- (id)afw_dateByAddingMonths:(long long)arg1;
- (id)afw_dateByAddingYears:(long long)arg1;
- (id)afw_stringWithFormate:(id)arg1;
- (double)afw_javaTimestamp;
@property(readonly, nonatomic) _Bool isToday_ap;
@property(readonly, nonatomic) long long day_ap;
@property(readonly, nonatomic) long long month;
@end
