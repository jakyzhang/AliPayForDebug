//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BioAuthFacade : NSObject
{
    id _cls;
}

+ (void)preLoad;
+ (id)getBioMetaInfo;
@property(retain, nonatomic) id cls; // @synthesize cls=_cls;
- (void).cxx_destruct;
- (id)version;
- (void)exec:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
- (_Bool)isBusy;
- (void)authWithRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;

@end
