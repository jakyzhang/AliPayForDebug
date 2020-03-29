//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface TAApp : NSObject <NSCopying>
{
    NSString *_appId;
    NSString *_version;
    NSString *_name;
    NSString *_desc;
    NSString *_iconUrl;
    NSString *_scene;
    NSString *_slogan;
}

@property(copy, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
