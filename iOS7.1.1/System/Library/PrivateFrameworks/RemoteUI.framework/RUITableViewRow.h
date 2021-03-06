/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RUIElement.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class RemoteUITableViewCell, NSMutableArray, NSDate, UISwitch, NSDictionary, NSData, UIWebView, WebContainerView;

@interface RUITableViewRow : RUIElement <UIPickerViewDelegate, UITextFieldDelegate> {

	RemoteUITableViewCell* _tableCell;
	id _delegate;
	NSMutableArray* _selectOptions;
	long long _selectedRow;
	NSDate* _date;
	NSDate* _dateMax;
	NSDate* _dateMin;
	UISwitch* _switchControl;
	bool _rowInvalid;
	NSDictionary* _deleteAction;
	NSData* _data;
	UIWebView* _webView;
	WebContainerView* _webContainerView;
	float _cachedHeight;
	bool _configured;
	double _height;

}

@property (assign,nonatomic) bool rowInvalid;                          //@synthesize rowInvalid=_rowInvalid - In the implementation block
@property (nonatomic,retain) NSDictionary * deleteAction;              //@synthesize deleteAction=_deleteAction - In the implementation block
@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long selectedRow;                  //@synthesize selectedRow=_selectedRow - In the implementation block
@property (nonatomic,retain) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * dateMin;                         //@synthesize dateMin=_dateMin - In the implementation block
@property (nonatomic,retain) NSDate * dateMax;                         //@synthesize dateMax=_dateMax - In the implementation block
@property (assign,nonatomic) double height;                            //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) bool configured;                          //@synthesize configured=_configured - In the implementation block
+(void)initialize;
+(id)_formatterForDateYMD;
+(id)_timeZoneAdjustedDateFromDate:(id)arg1 ;
+(id)_formatterForMonthAndDay;
+(id)_formatterForShortDate;
+(void)resetLocale;
-(id)sourceURL;
-(void)_datePickerChanged:(id)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)date;
-(id)data;
-(void)setData:(id)arg1 ;
-(bool)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(double)height;
-(void)setDate:(id)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(id)tableCell;
-(void)setRowInvalid:(bool)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(id)deleteAction;
-(id)selectOptions;
-(void)setDeleteAction:(id)arg1 ;
-(void)accessoryImageLoaded;
-(Class)tableCellClass;
-(long long)tableCellStyle;
-(void)setDateMin:(id)arg1 ;
-(void)setDateMax:(id)arg1 ;
-(bool)loadAccessoryImage;
-(bool)supportsAutomaticSelection;
-(float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4 ;
-(void)clearCachedHeight;
-(void)_activate;
-(bool)rowInvalid;
-(long long)selectedRow;
-(id)dateMin;
-(id)dateMax;
-(bool)configured;
-(void)setConfigured:(bool)arg1 ;
@end

