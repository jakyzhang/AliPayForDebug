//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface H5LdcLevel : NSObject
{
    NSString *_level;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *level; // @synthesize level=_level;
- (void).cxx_destruct;
- (id)getCurrentLdcLevel;
- (void)updateLdcLevel;
- (void)dealloc;
- (id)initPrivate;

@end

