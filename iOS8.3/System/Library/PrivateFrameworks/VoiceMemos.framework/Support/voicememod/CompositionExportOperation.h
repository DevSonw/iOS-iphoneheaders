/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:06:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/Support/voicememod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <voicememod/AssetExportOperation.h>

@interface CompositionExportOperation : AssetExportOperation {

	char _deleteFragmentsWhenFinished;

}

@property (assign,nonatomic) char deleteFragmentsWhenFinished;              //@synthesize deleteFragmentsWhenFinished=_deleteFragmentsWhenFinished - In the implementation block
-(void)setDeleteFragmentsWhenFinished:(char)arg1 ;
-(char)deleteFragmentsWhenFinished;
-(char)run:(id*)arg1 ;
@end
