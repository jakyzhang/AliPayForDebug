//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AFWStockJSAPICenter : NSObject
{
    NSArray *_excuterArr;
}

+ (id)defaultCenter;
@property(retain, nonatomic) NSArray *excuterArr; // @synthesize excuterArr=_excuterArr;
- (void).cxx_destruct;
- (id)findHandlerByName:(id)arg1;
- (void)registerJSAPI:(id)arg1 executerClassName:(id)arg2;
- (void)loadAllJSAPI:(id)arg1;

@end

