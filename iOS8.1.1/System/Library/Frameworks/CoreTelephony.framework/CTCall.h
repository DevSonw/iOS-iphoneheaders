/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@class NSString;

@interface CTCall : NSObject {

	NSString* _callState;
	NSString* _callID;

}

@property (nonatomic,copy) NSString * callState;              //@synthesize callState=_callState - In the implementation block
@property (nonatomic,copy) NSString * callID;                 //@synthesize callID=_callID - In the implementation block
+(id)callForCTCallRef:(CTCallRef)arg1 ;
-(NSString *)callState;
-(void)setCallState:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)callID;
-(void)setCallID:(NSString *)arg1 ;
@end
