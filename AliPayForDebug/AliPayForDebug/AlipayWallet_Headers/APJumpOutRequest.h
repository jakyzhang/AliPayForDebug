//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface APJumpOutRequest : NSObject
{
    NSString *_uri;
    NSString *_curAppId;
    NSString *_curPageId;
    NSNumber *_userTouch;
    NSDictionary *_sceneParams;
}

@property(retain, nonatomic) NSDictionary *sceneParams; // @synthesize sceneParams=_sceneParams;
@property(retain, nonatomic) NSNumber *userTouch; // @synthesize userTouch=_userTouch;
@property(retain, nonatomic) NSString *curPageId; // @synthesize curPageId=_curPageId;
@property(retain, nonatomic) NSString *curAppId; // @synthesize curAppId=_curAppId;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;

@end

