//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface SPDYSocketReadOp : NSObject
{
    NSMutableData *_buffer;
    unsigned long long _bytesRead;
    unsigned long long _startOffset;
    unsigned long long _maxLength;
    unsigned long long _fixedLength;
    unsigned long long _originalBufferLength;
    double _timeout;
    _Bool _bufferOwner;
    long long _tag;
    _Bool createByATLS;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)safeReadLength;
- (id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 fixedLength:(unsigned long long)arg5 tag:(long long)arg6;

@end
