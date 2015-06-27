/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:59:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKMapLayer.h>
#import <VectorKit/VKStyleManagerObserver.h>

@class NSMutableArray, VKAnnotationMarker, NSMutableSet, VKMapModel, NSArray, NSString, VKStyleManager;

@interface VKAnnotationModel : VKModelObject <VKMapLayer, VKStyleManagerObserver> {

	NSMutableArray* _annotationMarkers;
	VKAnnotationMarker* _selectedAnnotationMarker;
	NSMutableSet* _animatingMarkers;
	NSMutableArray* _markersToAnimate;
	VKAnnotationMarker* _draggingAnnotationMarker;
	char _didDragMarker;
	char _hasEverDrawnSomething;
	SCD_Struct_VK261 _styleTransitionState;
	/*^block*/id _annotationMarkerDeselectionCallback;
	VKMapModel* _mapModel;

}

@property (assign,nonatomic) SCD_Struct_VK261 styleTransitionState;                        //@synthesize styleTransitionState=_styleTransitionState - In the implementation block
@property (nonatomic,readonly) NSArray * annotationMarkers;                                //@synthesize annotationMarkers=_annotationMarkers - In the implementation block
@property (nonatomic,readonly) VKAnnotationMarker * selectedAnnotationMarker; 
@property (nonatomic,readonly) char needsLayout; 
@property (nonatomic,copy) id annotationMarkerDeselectionCallback;                         //@synthesize annotationMarkerDeselectionCallback=_annotationMarkerDeselectionCallback - In the implementation block
@property (assign,nonatomic) VKMapModel * mapModel;                                        //@synthesize mapModel=_mapModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) VKStyleManager * styleManager; 
+(char)reloadOnStylesheetChange;
-(void)dealloc;
-(id)init;
-(char)needsLayout;
-(/*^block*/id)annotationRectTest;
-(/*^block*/id)annotationCoordinateTest;
-(VKStyleManager *)styleManager;
-(NSArray *)annotationMarkers;
-(id)annotationMarkerDeselectionCallback;
-(void)setAnnotationMarkerDeselectionCallback:(id)arg1 ;
-(VKAnnotationMarker *)selectedAnnotationMarker;
-(void)removeAnnotationMarker:(id)arg1 ;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(char)arg2 ;
-(void)selectAnnotationMarker:(id)arg1 ;
-(void)deselectAnnotationMarker:(id)arg1 ;
-(void)setMapModel:(VKMapModel *)arg1 ;
-(id)annotationMarkerForSelectionAtPoint:(VKPoint)arg1 avoidCurrent:(char)arg2 canvasSize:(CGSize)arg3 ;
-(char)shouldLayoutWithoutStyleManager;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)setStyleTransitionState:(SCD_Struct_VK261)arg1 ;
-(SCD_Struct_VK261)styleTransitionState;
-(void)stylesheetDidChange;
-(unsigned long long)mapLayerPosition;
-(VKMapModel *)mapModel;
-(void)anchorPositionChangedForMarker:(id)arg1 ;
@end
