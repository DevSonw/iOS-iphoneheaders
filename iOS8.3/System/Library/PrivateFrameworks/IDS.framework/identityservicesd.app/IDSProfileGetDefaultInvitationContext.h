/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:04:13 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSProfileMessage.h>
#import <identityservicesd/NSCopying.h>

@class NSString, NSDictionary;

@interface IDSProfileGetDefaultInvitationContext : IDSProfileMessage <NSCopying> {

	char _responseValidated;
	NSString* _responseBasePhoneNumber;
	NSString* _responseRegionID;
	NSDictionary* _responseExtraInfo;

}

@property (copy) NSString * responseRegionID;                     //@synthesize responseRegionID=_responseRegionID - In the implementation block
@property (copy) NSString * responseBasePhoneNumber;              //@synthesize responseBasePhoneNumber=_responseBasePhoneNumber - In the implementation block
@property (copy) NSDictionary * responseExtraInfo;                //@synthesize responseExtraInfo=_responseExtraInfo - In the implementation block
@property (assign) char responseValidated;                        //@synthesize responseValidated=_responseValidated - In the implementation block
-(NSString *)responseBasePhoneNumber;
-(void)setResponseBasePhoneNumber:(NSString *)arg1 ;
-(NSString *)responseRegionID;
-(void)setResponseRegionID:(NSString *)arg1 ;
-(NSDictionary *)responseExtraInfo;
-(void)setResponseExtraInfo:(NSDictionary *)arg1 ;
-(char)responseValidated;
-(void)setResponseValidated:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bagKey;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
@end
