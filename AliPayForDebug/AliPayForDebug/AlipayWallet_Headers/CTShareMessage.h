//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, UIImage;

@interface CTShareMessage : NSObject
{
    NSDictionary *_messageInfo;
    UIImage *_photo;
}

@property(retain, nonatomic) UIImage *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) NSDictionary *messageInfo; // @synthesize messageInfo=_messageInfo;
- (void).cxx_destruct;
- (int)messageType;

@end

