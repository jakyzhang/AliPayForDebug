//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "kbhomepageToString.h"

@class MOBILECSAHomePageDynamicReponse, NSString;

@interface kbhomepageHomePageWrapperResponse : kbhomepageToString
{
    _Bool _success;
    MOBILECSAHomePageDynamicReponse *_data;
    NSString *_scene;
    NSString *_errorCode;
    NSString *_errorMsg;
}

@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MOBILECSAHomePageDynamicReponse *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end
