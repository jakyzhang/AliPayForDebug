//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCONTENTPRODBaseResult.h"

@class NSArray, NSDictionary;

@interface KBCONTENTPRODHeadlineSearchResp : KBCONTENTPRODBaseResult
{
    _Bool _hasMore;
    int _start;
    NSDictionary *_blockTemplates;
    NSArray *_items;
    NSDictionary *_ext;
}

+ (Class)extElementClass;
+ (Class)itemsElementClass;
+ (Class)blockTemplatesElementClass;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) int start; // @synthesize start=_start;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSDictionary *blockTemplates; // @synthesize blockTemplates=_blockTemplates;
- (void).cxx_destruct;

@end

