//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JsApiHandlerBase.h"

@class MBProgressHUD;

@interface MOJsApiHandlerBase : JsApiHandlerBase
{
    MBProgressHUD *_hud;
}

@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
- (void).cxx_destruct;
- (id)exceptionInfoForKey:(id)arg1 defaultMemo:(id)arg2;
- (id)getWebAppID:(id)arg1;
- (_Bool)isTinyApp:(id)arg1;
- (id)getAppURL:(id)arg1;
- (void)hideLoadingView;
- (void)showLoadingView;
- (_Bool)showLoadingViewForConfigKey:(id)arg1;

@end
