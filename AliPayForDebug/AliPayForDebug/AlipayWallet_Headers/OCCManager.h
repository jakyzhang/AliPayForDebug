//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OCCProtocol;

@interface OCCManager : NSObject
{
    id <OCCProtocol> _occProtocol;
}

+ (id)getActionUrl:(id)arg1;
+ (id)createTinyUrl:(id)arg1 clickid:(id)arg2;
+ (void)openTarget:(id)arg1 clickid:(id)arg2;
+ (id)combinImage:(id)arg1 rightImage:(id)arg2;
+ (id)batchAddAdLogo:(id)arg1;
+ (_Bool)canAdQuery;
+ (id)cpaActived:(id)arg1 pid:(id)arg2 nameSpace:(id)arg3 actionType:(id)arg4 args:(id)arg5;
+ (id)clicked:(id)arg1 pid:(id)arg2;
+ (id)taped:(id)arg1 pid:(id)arg2 needOpen:(_Bool)arg3;
+ (void)expose:(id)arg1 nameSpace:(id)arg2 pid:(id)arg3 ignoreDuplication:(_Bool)arg4 args:(id)arg5;
+ (void)trigger:(id)arg1 nameSpace:(id)arg2 userDic:(id)arg3 isForce:(_Bool)arg4;
+ (id)getDataSync:(id)arg1 isNeedAdLogo:(_Bool)arg2;
+ (void)removeObserver:(id)arg1;
+ (void)setObserverAsync:(id)arg1 pids:(id)arg2 observerReq:(id)arg3 complete:(CDUnknownBlockType)arg4;
+ (void)createAdView:(id)arg1 nameSpace:(id)arg2 cityid:(id)arg3 frame:(struct CGRect)arg4 complete:(CDUnknownBlockType)arg5 click:(CDUnknownBlockType)arg6;
+ (id)shareInstance;
@property(retain, nonatomic) id <OCCProtocol> occProtocol; // @synthesize occProtocol=_occProtocol;
- (void).cxx_destruct;

@end

