/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <com.apple.lakitu/LakituResponse.h>

@class NSString;

@interface EscrowGenericResponse : LakituResponse

@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) long long errorCode; 
-(NSString *)message;
-(long long)version;
-(long long)status;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(long long)errorCode;
@end
