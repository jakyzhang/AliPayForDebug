//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ExpressWayParamers : NSObject
{
    NSString *_LogTime;
    NSString *_Productid;
    NSString *_Productversion;
    NSString *_Utdid;
    NSString *_Userid;
    NSString *_Sessionid;
    NSString *_Channel;
    NSString *_Sdkversion;
    NSString *_Logversion;
    NSString *_Logindex;
    NSString *_Pagespm;
    NSString *_Pageid;
    NSString *_Cityid;
    NSString *_Location;
}

@property(retain, nonatomic) NSString *Location; // @synthesize Location=_Location;
@property(retain, nonatomic) NSString *Cityid; // @synthesize Cityid=_Cityid;
@property(retain, nonatomic) NSString *Pageid; // @synthesize Pageid=_Pageid;
@property(retain, nonatomic) NSString *Pagespm; // @synthesize Pagespm=_Pagespm;
@property(retain, nonatomic) NSString *Logindex; // @synthesize Logindex=_Logindex;
@property(retain, nonatomic) NSString *Logversion; // @synthesize Logversion=_Logversion;
@property(retain, nonatomic) NSString *Sdkversion; // @synthesize Sdkversion=_Sdkversion;
@property(retain, nonatomic) NSString *Channel; // @synthesize Channel=_Channel;
@property(retain, nonatomic) NSString *Sessionid; // @synthesize Sessionid=_Sessionid;
@property(retain, nonatomic) NSString *Userid; // @synthesize Userid=_Userid;
@property(retain, nonatomic) NSString *Utdid; // @synthesize Utdid=_Utdid;
@property(retain, nonatomic) NSString *Productversion; // @synthesize Productversion=_Productversion;
@property(retain, nonatomic) NSString *Productid; // @synthesize Productid=_Productid;
@property(retain, nonatomic) NSString *LogTime; // @synthesize LogTime=_LogTime;
- (void).cxx_destruct;
- (id)createLogIndex;
- (id)createUserID;

@end

