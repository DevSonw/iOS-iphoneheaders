/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/ISStoreURLOperationDelegate.h>

@class NSDate, MicroPaymentQueueRequest, NSString;

@interface LoadMicroPaymentQueueCountOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSDate* _lastQueueCheckDate;
	int _queueItemCount;
	MicroPaymentQueueRequest* _request;
	NSString* _urlBagKey;

}

@property (retain) NSDate * lastQueueCheckDate;                     //@synthesize lastQueueCheckDate=_lastQueueCheckDate - In the implementation block
@property (copy) MicroPaymentQueueRequest * request;                //@synthesize request=_request - In the implementation block
@property (retain) NSString * URLBagKey;                            //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (assign) int queueItemCount;                              //@synthesize queueItemCount=_queueItemCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)lastQueueCheckDate;
-(char)_loadCountReturningError:(id*)arg1 ;
-(char)_setCountWithResponse:(id)arg1 error:(id*)arg2 ;
-(void)setQueueItemCount:(int)arg1 ;
-(void)setLastQueueCheckDate:(NSDate *)arg1 ;
-(int)queueItemCount;
-(void)setURLBagKey:(NSString *)arg1 ;
-(void)dealloc;
-(MicroPaymentQueueRequest *)request;
-(void)run;
-(NSString *)URLBagKey;
-(void)setRequest:(MicroPaymentQueueRequest *)arg1 ;
-(char)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
@end
