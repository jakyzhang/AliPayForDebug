//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKNormalCellModel.h"

@class FBDocument, NSString;

@interface WKTableCellModel : WKNormalCellModel
{
    _Bool _isReusable;
    _Bool _isFixedHeight;
}

@property(nonatomic) _Bool isFixedHeight; // @synthesize isFixedHeight=_isFixedHeight;
@property(nonatomic) _Bool isReusable; // @synthesize isReusable=_isReusable;
- (void)dealloc;
@property(retain, nonatomic) NSString *templateId;
- (void)setCellClass:(Class)arg1;
- (id)init;
@property(retain, nonatomic) NSString *cachedJsonDataString;
@property(retain, nonatomic) FBDocument *cachedDoc;
@property(nonatomic) double cacheHeight;

@end
