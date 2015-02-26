/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUFaceTimeCall.h>

@interface TUFaceTimeVideoCall : TUFaceTimeCall
-(BOOL)isVideo;
-(id)audioCategory;
-(int)service;
-(unsigned)endedReason;
-(int)endedError;
-(BOOL)isSendingVideo;
-(void)setIsSendingVideo:(BOOL)arg1 ;
-(BOOL)hasReceivedFirstFrame;
-(int)callStatus;
-(int)supportedModelType;
-(id)audioMode;
@end
