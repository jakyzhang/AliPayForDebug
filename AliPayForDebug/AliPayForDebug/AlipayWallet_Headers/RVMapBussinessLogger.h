//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RVMapBussinessLogger : NSObject
{
}

+ (id)getErrorMessageWithErrorInfo:(id)arg1;
+ (long long)getErrorCodeWithErrorInfo:(id)arg1;
+ (void)map_logDelayEventWithCode:(long long)arg1 appId:(id)arg2;
+ (void)map_logZebraWithMapCode:(long long)arg1 source:(long long)arg2 appId:(id)arg3;
+ (void)map_logNativeMapEvent:(id)arg1 mapCode:(long long)arg2 appId:(id)arg3;
+ (void)map_logTinyAppMapEvent:(id)arg1 mapCode:(long long)arg2 appId:(id)arg3;
+ (void)map_logParamError:(long long)arg1 appId:(id)arg2;
+ (void)map_logLoadMapError:(long long)arg1 responseCode:(long long)arg2 appId:(id)arg3;
+ (void)map_logJsApiError:(id)arg1 errorInfo:(id)arg2 appId:(id)arg3;
+ (void)map_logRenderAbroadWithMapCode:(long long)arg1 appId:(id)arg2;
+ (void)map_logJsApiCall:(id)arg1 appId:(id)arg2;
+ (void)p_LogWithParams:(id)arg1;

@end

