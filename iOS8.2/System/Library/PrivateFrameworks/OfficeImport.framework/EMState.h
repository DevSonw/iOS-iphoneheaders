/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMState.h>

@class EDWorkbook, EDSheet;

@interface EMState : CMState {

	EDWorkbook* _workbook;
	EDSheet* _currentSheet;

}

@property (retain) EDWorkbook * workbook;               //@synthesize workbook=_workbook - In the implementation block
@property (assign) EDSheet * currentSheet;              //@synthesize currentSheet=_currentSheet - In the implementation block
-(void)dealloc;
-(EDSheet *)currentSheet;
-(EDWorkbook *)workbook;
-(void)setWorkbook:(EDWorkbook *)arg1 ;
-(void)setCurrentSheet:(EDSheet *)arg1 ;
@end

