/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface VKGuidanceStepInfo : NSObject {

	NSString* _roadName;
	int _routePoint;

}

@property (nonatomic,retain,readonly) NSString * roadName;              //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,readonly) int routePoint;                          //@synthesize routePoint=_routePoint - In the implementation block
-(void)dealloc;
-(id)initWithRoadName:(id)arg1 point:(int)arg2 ;
-(int)routePoint;
-(NSString *)roadName;
@end
