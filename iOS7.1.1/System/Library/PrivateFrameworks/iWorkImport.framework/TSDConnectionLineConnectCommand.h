/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>

@class TSDConnectionLineInfo, TSDDrawableInfo;

@interface TSDConnectionLineConnectCommand : TSKCommand {

	TSDConnectionLineInfo* mConnectionLine;
	TSDDrawableInfo* mOldConnectedFrom;
	TSDDrawableInfo* mOldConnectedTo;
	TSDDrawableInfo* mConnectFrom;
	TSDDrawableInfo* mConnectTo;

}

@property (nonatomic,readonly) TSDConnectionLineInfo * connectionLine; 
@property (nonatomic,readonly) TSDDrawableInfo * connectFrom; 
@property (nonatomic,readonly) TSDDrawableInfo * connectTo; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)p_do;
-(id)initWithConnectionLine:(id)arg1 connectingFrom:(id)arg2 to:(id)arg3 context:(id)arg4 ;
-(id)connectionLine;
-(id)connectFrom;
-(id)connectTo;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(bool)process;
-(id)actionString;
@end
