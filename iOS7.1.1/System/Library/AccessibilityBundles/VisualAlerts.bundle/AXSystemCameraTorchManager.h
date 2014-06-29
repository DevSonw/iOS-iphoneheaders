/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/VisualAlerts.bundle/VisualAlerts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AXCameraTorchManager.h>

@class AVCaptureDevice;

@interface AXSystemCameraTorchManager : NSObject <AXCameraTorchManager> {

	AVCaptureDevice* _captureDevice;

}
-(bool)openTorchDevice;
-(void)closeTorchDevice;
-(void)turnTorchOn;
-(void)turnTorchOff;
@end
