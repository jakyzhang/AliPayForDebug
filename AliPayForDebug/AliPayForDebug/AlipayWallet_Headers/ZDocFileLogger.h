//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSFileHandle;

@interface ZDocFileLogger : NSObject
{
    NSFileHandle *_currentLogFileHandle;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSFileHandle *currentLogFileHandle; // @synthesize currentLogFileHandle=_currentLogFileHandle;
- (void).cxx_destruct;
- (void)write:(id)arg1;
- (void)dealloc;
- (id)documentName;
- (id)logFileName;
- (id)createLogFile;
- (id)init;

@end

