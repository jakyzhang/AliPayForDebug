//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface GSViewController : UIViewController
{
    _Bool _entranceLv2;
    unsigned long long _entranceType;
}

@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) _Bool entranceLv2; // @synthesize entranceLv2=_entranceLv2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)backToHome;
- (_Bool)shouldAutorotate;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)findService;
- (id)initWithEntranceType:(unsigned long long)arg1;

@end

