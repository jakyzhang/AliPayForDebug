//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface LSTheme : NSObject
{
    NSDictionary *_themeMap;
    NSDictionary *_themeImageMap;
}

@property(retain, nonatomic) NSDictionary *themeImageMap; // @synthesize themeImageMap=_themeImageMap;
@property(retain, nonatomic) NSDictionary *themeMap; // @synthesize themeMap=_themeMap;
- (void).cxx_destruct;
- (id)imageNameForThemeItem:(id)arg1 themeId:(id)arg2;
- (id)colorForThemeItem:(id)arg1 themeId:(id)arg2;

@end

