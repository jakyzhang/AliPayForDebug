//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluRegSetPaypwdControllerBase.h"

@class NSString, NSTimer, aluButton;

@interface aluRegSetPaypwdResultController : aluRegSetPaypwdControllerBase
{
    NSString *_loginId;
    NSString *_passToken;
    aluButton *_nextButton;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) aluButton *nextButton; // @synthesize nextButton=_nextButton;
@property(copy, nonatomic) NSString *passToken; // @synthesize passToken=_passToken;
@property(copy, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)onButtonPress;
- (void)repeatButton;
- (void)createSubviews;
- (void)viewDidLoad;

@end

