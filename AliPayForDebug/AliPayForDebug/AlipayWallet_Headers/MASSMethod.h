//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MASSMethod : NSObject
{
    _Bool _needCrypto;
    _Bool _needCookieManager;
    _Bool _ignoreMdapLog;
    _Bool _isMainDocument;
    NSString *_bizType;
    long long _router;
    NSURL *_mainDocumentUrl;
    NSString *_pageSession;
    NSString *_bizLog;
    NSString *_spmid;
}

@property(retain, nonatomic) NSString *spmid; // @synthesize spmid=_spmid;
@property(retain, nonatomic) NSString *bizLog; // @synthesize bizLog=_bizLog;
@property(retain, nonatomic) NSString *pageSession; // @synthesize pageSession=_pageSession;
@property(nonatomic) _Bool isMainDocument; // @synthesize isMainDocument=_isMainDocument;
@property(nonatomic) _Bool ignoreMdapLog; // @synthesize ignoreMdapLog=_ignoreMdapLog;
@property(retain, nonatomic) NSURL *mainDocumentUrl; // @synthesize mainDocumentUrl=_mainDocumentUrl;
@property(nonatomic) _Bool needCookieManager; // @synthesize needCookieManager=_needCookieManager;
@property(nonatomic) long long router; // @synthesize router=_router;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(nonatomic) _Bool needCrypto; // @synthesize needCrypto=_needCrypto;
- (void).cxx_destruct;

@end
