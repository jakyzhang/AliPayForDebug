//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKEngineProtocol-Protocol.h"

@class CKHandlerManager, CKWidgetManager, NSString;

@interface CKEngine : NSObject <CKEngineProtocol>
{
    CKHandlerManager *_handlerManager;
    CKWidgetManager *_widgetManager;
}

+ (void)registerModules:(id)arg1;
+ (void)registerWidgets:(id)arg1;
+ (id)handlerForProtocol:(id)arg1;
+ (void)registerHandler:(id)arg1 withProtocol:(id)arg2;
+ (id)startPage:(id)arg1 bundleURL:(id)arg2 bundleJS:(id)arg3 frame:(struct CGRect)arg4 viewOption:(id)arg5 instanceOption:(id)arg6;
+ (id)startApp:(id)arg1 option:(id)arg2;
+ (id)launchWithConfig:(id)arg1;
+ (id)shared;
@property(retain, nonatomic) CKWidgetManager *widgetManager; // @synthesize widgetManager=_widgetManager;
@property(retain, nonatomic) CKHandlerManager *handlerManager; // @synthesize handlerManager=_handlerManager;
- (void).cxx_destruct;
- (void)registerConfigHandlers:(id)arg1;
- (void)registerModules:(id)arg1;
- (void)registerWidgets:(id)arg1;
- (id)handlerForProtocol:(id)arg1;
- (void)registerHandler:(id)arg1 withProtocol:(id)arg2;
- (id)startPage:(id)arg1 bundleURL:(id)arg2 bundleJS:(id)arg3 frame:(struct CGRect)arg4 viewOption:(id)arg5 instanceOption:(id)arg6;
- (id)startApp:(id)arg1 option:(id)arg2;
- (id)launchWithConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

