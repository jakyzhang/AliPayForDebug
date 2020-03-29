//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLProtocolClient-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"

@class NSData, NSError, NSInputStream, NSMutableDictionary, NSOutputStream, NSRecursiveLock, NSSet, NSString, NSThread, NSTimer, NSURL, NSURLConnection, NSURLRequest, NSURLResponse, NSURLSessionDataTask;

@interface DTURLRequestOperation : NSOperation <NSURLConnectionDataDelegate, NSURLProtocolClient, NSURLSessionDataDelegate>
{
    _Bool _networkActivityIndicatorVisible;
    _Bool _requestBodyGZip;
    _Bool _requestBodySign;
    _Bool _hasCanceled;
    _Bool _isH2RPC;
    _Bool _httpGET;
    _Bool _isCrypt;
    _Bool _enableCrypt;
    int _state;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSURLResponse *_responseOrg;
    NSMutableDictionary *_httpBodyParameters;
    NSData *_responseData;
    NSString *_responseString;
    NSString *_customAppKey;
    NSString *_customAppID;
    NSError *_error;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSSet *_runLoopModes;
    long long _totalBytesRead;
    NSRecursiveLock *_lock;
    NSThread *_runningThread;
    NSThread *_createdThread;
    NSTimer *_timeoutTimer;
    NSString *_httpDnsIp;
    NSData *_deKey;
    NSURL *_gatewayURL;
    NSString *_netRetryable;
    NSURLConnection *_connection;
    id _responseObject;
    NSURLSessionDataTask *_task;
}

+ (_Bool)stateTransitionIsValid:(int)arg1 toState:(int)arg2 cancelled:(_Bool)arg3;
+ (id)keyPathFromState:(int)arg1;
+ (id)URLRequestThread;
+ (void)URLRequestThreadProc:(id)arg1;
+ (id)defaultOperationQueue;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) id responseObject; // @synthesize responseObject=_responseObject;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *netRetryable; // @synthesize netRetryable=_netRetryable;
@property(retain, nonatomic) NSURL *gatewayURL; // @synthesize gatewayURL=_gatewayURL;
@property(nonatomic) _Bool enableCrypt; // @synthesize enableCrypt=_enableCrypt;
@property(nonatomic) _Bool isCrypt; // @synthesize isCrypt=_isCrypt;
@property(retain, nonatomic) NSData *deKey; // @synthesize deKey=_deKey;
@property(nonatomic) _Bool httpGET; // @synthesize httpGET=_httpGET;
@property(retain, nonatomic) NSString *httpDnsIp; // @synthesize httpDnsIp=_httpDnsIp;
@property(nonatomic) _Bool isH2RPC; // @synthesize isH2RPC=_isH2RPC;
@property(nonatomic) _Bool hasCanceled; // @synthesize hasCanceled=_hasCanceled;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) _Bool requestBodySign; // @synthesize requestBodySign=_requestBodySign;
@property(nonatomic) _Bool requestBodyGZip; // @synthesize requestBodyGZip=_requestBodyGZip;
@property(nonatomic) _Bool networkActivityIndicatorVisible; // @synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible;
@property(retain, nonatomic) NSThread *createdThread; // @synthesize createdThread=_createdThread;
@property(retain, nonatomic) NSThread *runningThread; // @synthesize runningThread=_runningThread;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(retain, nonatomic) NSSet *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *customAppID; // @synthesize customAppID=_customAppID;
@property(retain, nonatomic) NSString *customAppKey; // @synthesize customAppKey=_customAppKey;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSMutableDictionary *httpBodyParameters; // @synthesize httpBodyParameters=_httpBodyParameters;
@property(retain, nonatomic) NSURLResponse *responseOrg; // @synthesize responseOrg=_responseOrg;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)shouldCrypt;
- (void)gzipAndEncrypt:(id)arg1;
- (id)gunzipAndDecrypt:(id)arg1;
- (id)rpcEncrypt:(id)arg1;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)doFinalHTTPBody;
- (void)addHTTPBodyParameter:(id)arg1 forKey:(id)arg2;
- (void)stopSendRPC;
- (void)cancelConnection;
- (void)finish;
- (id)rpcV1Sign:(id)arg1 newSign:(_Bool)arg2 request:(id)arg3;
- (void)addRetryToRequest:(id)arg1;
- (void)startConnection;
- (void)cancel;
- (void)start;
- (_Bool)isReady;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (id)rpcOperationType;
- (void)didFinish;
- (void)didStart;
- (void)dealloc;
- (void)commonInit;
- (id)initWithRequest:(id)arg1 outputStream:(id)arg2;
- (id)initWithRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
