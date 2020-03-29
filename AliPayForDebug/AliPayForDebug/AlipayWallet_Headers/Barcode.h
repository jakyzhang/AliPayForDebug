//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

@interface Barcode : NSObject
{
    NSArray *encoding;
    NSArray *first;
    NSArray *code128Encoding;
    _Bool _useCCore;
    UIImage *_oneDimBarcode;
    UIImage *_qRBarcode;
    NSString *_oneDimCode;
    long long _bitsLength;
}

@property(nonatomic) _Bool useCCore; // @synthesize useCCore=_useCCore;
@property(nonatomic) long long bitsLength; // @synthesize bitsLength=_bitsLength;
@property(copy, nonatomic) NSString *oneDimCode; // @synthesize oneDimCode=_oneDimCode;
@property(retain, nonatomic) UIImage *qRBarcode; // @synthesize qRBarcode=_qRBarcode;
@property(retain, nonatomic) UIImage *oneDimBarcode; // @synthesize oneDimBarcode=_oneDimBarcode;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)digitToBmpRenderer:(id)arg1;
- (id)addQuietZone:(id)arg1 quietZoneMultiple:(long long)arg2;
- (id)addQuietZone:(id)arg1;
- (id)compute:(id)arg1 withType:(int)arg2;
- (id)getDigit128:(id)arg1;
- (id)getDigit:(id)arg1 withType:(int)arg2;
- (int)charToInt:(BOOL)arg1;
- (void)setupQRCode:(id)arg1;
- (id)genMarginImage:(id)arg1 margin:(long long)arg2;
- (id)scaleQrImgFromData:(char *)arg1 sWidth:(int)arg2 targetWidth:(int)arg3 forceNoPadding:(_Bool)arg4;
- (void)genQRCodeWithCode:(id)arg1 level:(long long)arg2 width:(int)arg3 forceNoPadding:(_Bool)arg4;
- (id)scaleQrImgFromData:(char *)arg1 sWidth:(int)arg2 targetWidth:(int)arg3 marginSize:(int)arg4 ajustModel:(unsigned long long)arg5;
- (void)setupBlueQRCode:(id)arg1 size:(unsigned int)arg2 level:(long long)arg3;
- (void)genResizeQRCode:(id)arg1 level:(long long)arg2 width:(int)arg3 ajustModel:(unsigned long long)arg4;
- (void)genQRCodeWithData:(id)arg1 level:(long long)arg2 width:(int)arg3 ajustModel:(unsigned long long)arg4;
- (void)setupQRCode:(id)arg1 level:(long long)arg2;
- (void)setupOneDimBarcode:(id)arg1 type:(int)arg2;
- (void)setupOneDimBarcode:(id)arg1 type:(int)arg2 quietZoneMultiple:(long long)arg3;

@end
