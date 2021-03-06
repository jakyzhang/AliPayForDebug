//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface PublicLifeInfo : APPBGeneratedMessage <NSCoding, GeneratedMessageProtocol>
{
    _Bool _hasPublicName;
    _Bool _hasLogoUrl;
    _Bool _hasCategory;
    _Bool _hasBackgroundUrl;
    _Bool _hasXianyuUrl;
    _Bool _hasCertified;
    _Bool _hasIsShowOrgName;
    _Bool _hasOrgName;
    NSString *_publicName;
    NSString *_logoUrl;
    NSString *_category;
    NSString *_backgroundUrl;
    NSString *_xianyuUrl;
    NSString *_certified;
    NSMutableArray *_externIconUrlList;
    NSString *_isShowOrgName;
    NSString *_orgName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(retain, nonatomic) NSString *isShowOrgName; // @synthesize isShowOrgName=_isShowOrgName;
@property(retain, nonatomic) NSMutableArray *externIconUrlList; // @synthesize externIconUrlList=_externIconUrlList;
@property(retain, nonatomic) NSString *certified; // @synthesize certified=_certified;
@property(retain, nonatomic) NSString *xianyuUrl; // @synthesize xianyuUrl=_xianyuUrl;
@property(retain, nonatomic) NSString *backgroundUrl; // @synthesize backgroundUrl=_backgroundUrl;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *publicName; // @synthesize publicName=_publicName;
@property(readonly) _Bool hasOrgName; // @synthesize hasOrgName=_hasOrgName;
@property(readonly) _Bool hasIsShowOrgName; // @synthesize hasIsShowOrgName=_hasIsShowOrgName;
@property(readonly) _Bool hasCertified; // @synthesize hasCertified=_hasCertified;
@property(readonly) _Bool hasXianyuUrl; // @synthesize hasXianyuUrl=_hasXianyuUrl;
@property(readonly) _Bool hasBackgroundUrl; // @synthesize hasBackgroundUrl=_hasBackgroundUrl;
@property(readonly) _Bool hasCategory; // @synthesize hasCategory=_hasCategory;
@property(readonly) _Bool hasLogoUrl; // @synthesize hasLogoUrl=_hasLogoUrl;
@property(readonly) _Bool hasPublicName; // @synthesize hasPublicName=_hasPublicName;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addExternIconUrlList:(id)arg1;
- (void)setExternIconUrlListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

