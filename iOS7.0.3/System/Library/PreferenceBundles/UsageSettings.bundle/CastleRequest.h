/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:06:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class AAAccount;

@interface CastleRequest : AARequest {

	AAAccount* _account;

}

@property (nonatomic,retain) AAAccount * account;              //@synthesize account=_account - In the implementation block
+(void)addHeadersToRequest:(id)arg1 forAccount:(id)arg2 ;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 ;
-(void)dealloc;
-(id)urlRequest;
-(id)account;
-(void)setAccount:(id)arg1 ;
@end

