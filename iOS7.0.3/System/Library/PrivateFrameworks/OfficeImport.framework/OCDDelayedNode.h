/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OCDDelayedNodeContext;
@interface OCDDelayedNode : NSObject {

	<OCDDelayedNodeContext>* mDelayedContext;
	bool mLoaded;

}
-(void)dealloc;
-(bool)isLoaded;
-(bool)load;
-(void)setDelayedContext:(id)arg1 ;
-(void)setLoaded:(bool)arg1 ;
-(id)delayedContext;
@end

