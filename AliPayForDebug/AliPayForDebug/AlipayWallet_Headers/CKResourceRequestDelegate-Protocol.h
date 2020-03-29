//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CKResourceRequest, CKResourceResponse, NSData, NSError;

@protocol CKResourceRequestDelegate <NSObject>
- (void)request:(CKResourceRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)requestDidFinishLoading:(CKResourceRequest *)arg1;
- (void)request:(CKResourceRequest *)arg1 didReceiveData:(NSData *)arg2;
- (void)request:(CKResourceRequest *)arg1 didReceiveResponse:(CKResourceResponse *)arg2;
- (void)request:(CKResourceRequest *)arg1 didSendData:(unsigned long long)arg2 totalBytesToBeSent:(unsigned long long)arg3;
@end
