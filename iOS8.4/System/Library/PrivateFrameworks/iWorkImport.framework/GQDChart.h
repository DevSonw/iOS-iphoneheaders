/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDGraphic.h>

@class GQDChartLegend, GQDChartModel, GQDSStyle;

@interface GQDChart : GQDGraphic {

	GQDChartLegend* mLegend;
	BOOL mIsLegendRetained;
	GQDChartModel* mModel;
	GQDSStyle* mStyle;
	long long mType;

}
+(const StateSpec*)stateForReading;
-(id)graphicStyle;
-(void)dealloc;
-(long long)type;
-(id)style;
-(id)model;
-(id)legend;
-(void)setLegend:(id)arg1 ;
@end

