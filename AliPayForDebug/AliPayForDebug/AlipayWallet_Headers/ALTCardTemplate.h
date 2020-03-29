//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ALTCardTemplate : NSObject
{
    double _templateStartLoadingTime;
    unsigned long long _state;
}

+ (_Bool)reuseable;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (id)getLogInfoWithContainer:(id)arg1 withView:(id)arg2;
- (id)getSpmWithContainer:(id)arg1 withView:(id)arg2;
- (void)templateStartLoading;
- (id)exporsureViewsForComponent:(id)arg1;
- (_Bool)containerShouldOpenByDefault;
- (void)refreshTemplate;
- (void)onTemplateViewChanged;
- (id)getViewWithContainer:(id)arg1;
- (struct CGSize)estimateSizeWithContainer:(id)arg1;
- (struct CGSize)componentSizeWithContainer:(id)arg1 atIndex:(long long)arg2;
- (id)getComponentWithContainer:(id)arg1 atIndex:(long long)arg2;
- (unsigned long long)componentCountForContainer:(id)arg1;
- (void)checkTemplateState;
- (id)initWithParams:(id)arg1;

@end
