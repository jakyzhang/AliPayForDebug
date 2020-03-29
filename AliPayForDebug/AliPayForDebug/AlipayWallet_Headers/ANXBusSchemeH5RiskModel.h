//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANXSchemeBaseModel.h"

#import "H5ServiceDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol ANXSchemeHandlerDelegate;

@interface ANXBusSchemeH5RiskModel : ANXSchemeBaseModel <H5ServiceDelegate>
{
    id <ANXSchemeHandlerDelegate> _delegate;
    NSString *_riskurl;
    UIViewController *_nebula;
}

+ (id)queryParamsOfUrl:(id)arg1;
@property(retain, nonatomic) UIViewController *nebula; // @synthesize nebula=_nebula;
@property(retain, nonatomic) NSString *riskurl; // @synthesize riskurl=_riskurl;
@property(nonatomic) __weak id <ANXSchemeHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)serviceEventDidComeWithController:(id)arg1 event:(int)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)handle;
- (id)initWithLaunchOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
