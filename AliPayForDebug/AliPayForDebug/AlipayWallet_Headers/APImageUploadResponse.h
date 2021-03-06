//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface APImageUploadResponse : NSObject
{
    NSString *_identifier;
    NSError *_error;
    NSString *_publicUrl;
    unsigned long long _fileSize;
    NSString *_thumbnailIdForGif;
}

@property(copy, nonatomic) NSString *thumbnailIdForGif; // @synthesize thumbnailIdForGif=_thumbnailIdForGif;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *publicUrl; // @synthesize publicUrl=_publicUrl;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)buildUrlFromPublicDjangoID:(id)arg1;
- (id)initWithIdentifier:(id)arg1 error:(id)arg2 isPublic:(_Bool)arg3 userInfo:(id)arg4;
- (id)initWithIdentifier:(id)arg1 error:(id)arg2 isPublic:(_Bool)arg3;
- (id)initWithError:(id)arg1;

@end

