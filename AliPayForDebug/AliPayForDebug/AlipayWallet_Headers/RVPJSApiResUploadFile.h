//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKJSApiResponseBase.h"

@class NSDictionary, NSString;

@interface RVPJSApiResUploadFile : RVKJSApiResponseBase
{
    NSString *_data;
    NSString *_statusCode;
    NSDictionary *_header;
}

@property(retain, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(retain, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end
