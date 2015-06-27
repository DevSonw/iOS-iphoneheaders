/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOServiceRequester : NSObject {

	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;

}
+(id)_debugRequestName;
+(unsigned)_urlType;
+(id)_serviceTypeNumber;
+(char)shouldAttributeData;
+(void)setAttributeData;
-(void)dealloc;
-(id)init;
-(void)_startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_cancelRequest:(id)arg1 ;
-(id)_validateResponse:(id)arg1 ;
@end
