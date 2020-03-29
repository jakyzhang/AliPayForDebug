//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface ACAppLayout : NSObject <NSCoding, NSCopying>
{
    _Bool _movable;
    _Bool _display;
    NSString *_appId;
    NSString *_name;
    NSString *_desc;
    NSString *_iconUrl;
    NSString *_slogan;
    NSString *_locale;
    NSString *_parentCode;
    NSString *_stageExtProp;
    NSString *_bundleExtra;
    NSString *_stageSchemeUri;
}

@property(retain, nonatomic) NSString *stageSchemeUri; // @synthesize stageSchemeUri=_stageSchemeUri;
@property(retain, nonatomic) NSString *bundleExtra; // @synthesize bundleExtra=_bundleExtra;
@property(nonatomic) _Bool display; // @synthesize display=_display;
@property(nonatomic) _Bool movable; // @synthesize movable=_movable;
@property(copy, nonatomic) NSString *stageExtProp; // @synthesize stageExtProp=_stageExtProp;
@property(copy, nonatomic) NSString *parentCode; // @synthesize parentCode=_parentCode;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)isEqualToACAppLayout:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)originDesc;
- (id)originName;
- (id)languageTextForKey:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSyncInfo:(id)arg1 parentCode:(id)arg2 language:(id)arg3;
- (id)initWithDictionary:(id)arg1 language:(id)arg2;
- (id)initWithPBAppShowInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
