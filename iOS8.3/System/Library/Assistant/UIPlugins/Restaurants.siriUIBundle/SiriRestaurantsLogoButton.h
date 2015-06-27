/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:07:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@protocol SiriRestaurantsLogoButtonDelegate;
@class NSString, SiriRestaurantsMapKitPunchOutHelper, SAUIAppPunchOut;

@interface SiriRestaurantsLogoButton : UIButton {

	unsigned _attributionType;
	char _needsToFetch;
	id<SiriRestaurantsLogoButtonDelegate> _logoResolutionDelegate;
	NSString* _providerId;
	SiriRestaurantsMapKitPunchOutHelper* _punchOutHelper;
	SAUIAppPunchOut* _punchOut;

}

@property (assign,nonatomic,__weak) id<SiriRestaurantsLogoButtonDelegate> logoResolutionDelegate;              //@synthesize logoResolutionDelegate=_logoResolutionDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerId;                                                     //@synthesize providerId=_providerId - In the implementation block
@property (nonatomic,readonly) unsigned attributionType;                                                       //@synthesize attributionType=_attributionType - In the implementation block
@property (nonatomic,readonly) SiriRestaurantsMapKitPunchOutHelper * punchOutHelper;                           //@synthesize punchOutHelper=_punchOutHelper - In the implementation block
@property (nonatomic,readonly) char needsToFetch;                                                              //@synthesize needsToFetch=_needsToFetch - In the implementation block
@property (nonatomic,readonly) SAUIAppPunchOut * punchOut;                                                     //@synthesize punchOut=_punchOut - In the implementation block
-(SiriRestaurantsMapKitPunchOutHelper *)punchOutHelper;
-(id<SiriRestaurantsLogoButtonDelegate>)logoResolutionDelegate;
-(char)needsToFetch;
-(id)initWithProviderId:(id)arg1 ;
-(unsigned)attributionType;
-(id)_initWithProviderId:(id)arg1 ;
-(void)_mapItemDidFetchAttribution:(id)arg1 ;
-(id)_attributionForMapItem:(id)arg1 ;
-(void)_configureForAttribution:(id)arg1 ;
-(id)initWithPlaceData:(id)arg1 providerId:(id)arg2 attributionType:(unsigned)arg3 ;
-(void)fetchLogoWithCompletion:(/*^block*/id)arg1 ;
-(void)setLogoResolutionDelegate:(id<SiriRestaurantsLogoButtonDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)providerId;
-(SAUIAppPunchOut *)punchOut;
@end
