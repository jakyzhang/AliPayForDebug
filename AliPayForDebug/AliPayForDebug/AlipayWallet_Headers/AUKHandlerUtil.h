//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AUKHandlerUtil : NSObject
{
}

+ (_Bool)isInputChange:(id)arg1;
+ (_Bool)isNeedReport:(id)arg1;
+ (void)updateCellIdentify:(id)arg1;
+ (void)updateIdentifyWithView:(id)arg1 onCell:(id)arg2;
+ (id)setupViewIdentify:(id)arg1 onCell:(id)arg2;
+ (id)getExposureModel:(id)arg1;
+ (void)removeListViewLastVisibleInfosWithView:(id)arg1 onSuperView:(id)arg2;
+ (void)updateListViewVisibleInfosWithView:(id)arg1 onSuperView:(id)arg2 exposureState:(id)arg3;
+ (void)commitScrolledViewEventLog:(id)arg1;
+ (void)handlerExposureEvent:(id)arg1 superView:(id)arg2;
+ (void)commitExposureStart:(id)arg1 superView:(id)arg2;
+ (void)commitExposureEnd:(id)arg1;
+ (id)bindSubViewToScrollView:(id)arg1;

@end
