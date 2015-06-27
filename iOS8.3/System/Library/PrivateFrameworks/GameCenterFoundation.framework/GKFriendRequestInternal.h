/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:46:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString, NSDate;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal {

	NSString* _message;
	NSDate* _date;

}

@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(NSDate *)date;
-(NSString *)message;
-(void)setDate:(NSDate *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(int)defaultFamiliarity;
@end
