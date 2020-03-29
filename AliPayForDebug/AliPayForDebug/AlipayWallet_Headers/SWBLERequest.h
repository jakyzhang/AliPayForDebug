//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SWBLERequest : NSObject
{
    unsigned char _cmd;
    unsigned char _ext;
    int _seq;
    NSData *_data;
    NSString *_encryptFactor;
}

@property(retain, nonatomic) NSString *encryptFactor; // @synthesize encryptFactor=_encryptFactor;
@property(nonatomic) unsigned char ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned char cmd; // @synthesize cmd=_cmd;
- (void).cxx_destruct;
- (id)requestData;
- (_Bool)hasEncrypt;
- (_Bool)hasAppendData;
- (_Bool)isCmdData;
- (_Bool)asAppendData;
- (id)initWithData:(id)arg1;
- (id)init;

@end
