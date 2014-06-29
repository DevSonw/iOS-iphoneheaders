/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface SBSUICarDisplayNowPlayingStateContext : NSObject <NSSecureCoding> {

	NSString* _stateName;
	NSString* _animationName;
	NSString* _associatedBundleID;

}

@property (nonatomic,copy) NSString * stateName;                       //@synthesize stateName=_stateName - In the implementation block
@property (nonatomic,copy) NSString * animationName;                   //@synthesize animationName=_animationName - In the implementation block
@property (nonatomic,copy) NSString * associatedBundleID;              //@synthesize associatedBundleID=_associatedBundleID - In the implementation block
+(bool)supportsSecureCoding;
+(id)contextWithState:(id)arg1 animationName:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithState:(id)arg1 animationName:(id)arg2 ;
-(void)setStateName:(id)arg1 ;
-(void)setAnimationName:(id)arg1 ;
-(void)setAssociatedBundleID:(id)arg1 ;
-(id)stateName;
-(id)associatedBundleID;
-(id)animationName;
@end
