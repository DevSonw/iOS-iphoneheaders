/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/GEORouteHypothesizerDelegate.h>

@class NSDate, NSString;

@interface EKTravelRealRoutePredictorInternalDelegate : NSObject <GEORouteHypothesizerDelegate> {

	NSDate* _lastUpdateDate;

}

@property (nonatomic,readonly) NSDate * lastUpdateDate;              //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)lastUpdateDate;
-(void)routeHypothesizerArrived:(id)arg1 ;
-(void)routeHypothesizer:(id)arg1 matchedToRoute:(id)arg2 ;
-(void)routeHypothesizer:(id)arg1 willRequestNewRoute:(id)arg2 ;
-(void)routeHypothesizerRerouted:(id)arg1 request:(id)arg2 response:(id)arg3 ;
-(void)routeHypothesizer:(id)arg1 willSendETARequest:(id)arg2 ;
-(void)routeHypothesizer:(id)arg1 receivedETAResponse:(id)arg2 ;
-(void)routeHypothesizer:(id)arg1 receivedETAError:(id)arg2 ;
-(void)routeHypothesizerUpdatedETA:(id)arg1 etaRoute:(id)arg2 ;
@end
