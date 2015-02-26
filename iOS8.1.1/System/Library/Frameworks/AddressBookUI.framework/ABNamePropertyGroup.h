/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABAbstractPropertyGroup.h>

@protocol ABPrimaryValueDelegate;
@class NSMutableArray, ABUIPerson, NSMutableSet, NSMutableDictionary;

@interface ABNamePropertyGroup : ABAbstractPropertyGroup {

	NSMutableArray* _properties;
	ABUIPerson* _preferredPerson;
	NSMutableSet* _propertiesWithMultipleValuePlaceholders;
	NSMutableDictionary* _valuesByPersonByProperty;
	id<ABPrimaryValueDelegate> _delegate;

}

@property (nonatomic,readonly) ABUIPerson * preferredPerson;                   //@synthesize preferredPerson=_preferredPerson - In the implementation block
@property (assign,nonatomic) id<ABPrimaryValueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)reloadFromModel;
-(void)updateRecord;
-(CFArrayRef)nameProperties;
-(unsigned long long)namePropertiesCount;
-(id)keyboardSettingsForRow:(unsigned long long)arg1 ;
-(id)placeholderTextForRow:(unsigned long long)arg1 ;
-(id)valueForRow:(unsigned long long)arg1 whenEditing:(BOOL)arg2 ;
-(BOOL)showsMultipleValuePlaceholderAtRow:(unsigned long long)arg1 ;
-(ABUIPerson *)preferredPerson;
-(void)_insertItemAtIndex:(long long)arg1 forProperty:(int)arg2 duringReload:(BOOL)arg3 ;
-(id)_allPeople;
-(BOOL)_showsMultipleValuePlaceholderForProperty:(int)arg1 ;
-(id)_valueForProperty:(int)arg1 person:(id)arg2 ;
-(BOOL)_isEmptyValue:(id)arg1 forProperty:(int)arg2 ;
-(int)_propertyAtIndex:(unsigned long long)arg1 ;
-(BOOL)showsMultipleValuePlaceholderForProperty:(int)arg1 ;
-(void)_clearAllCachedInfo;
-(BOOL)refreshPreferredPerson;
-(void)_addItemForProperty:(int)arg1 duringReload:(BOOL)arg2 ;
-(id)_newLocalizedPlaceholderForProperty:(int)arg1 ;
-(void)_removeValueForProperty:(int)arg1 ;
-(void)_removeMultipleValuePlaceholderForProperty:(int)arg1 ;
-(int)propertyForRow:(unsigned long long)arg1 ;
-(id)copyCompositeNameIgnoringOrganization:(BOOL)arg1 ;
-(id)_fakePersonFromCurrentProperties;
-(id)_labelAtIndex:(long long)arg1 ;
-(long long)_indexForProperty:(int)arg1 ;
-(id)_indexPathForIndexPath:(id)arg1 ;
-(void)addNameProperty:(int)arg1 ;
-(unsigned long long)rowForProperty:(int)arg1 ;
-(id)primaryValueForProperty:(int)arg1 ;
-(void)setValue:(id)arg1 atRow:(unsigned long long)arg2 ;
-(BOOL)autofillValuesForRow:(unsigned long long)arg1 ;
-(id)copyCompositeName;
-(id)copyCompositePhoneticName;
-(void)dealloc;
-(void)setDelegate:(id<ABPrimaryValueDelegate>)arg1 ;
-(id)init;
-(id<ABPrimaryValueDelegate>)delegate;
-(void)_setValue:(id)arg1 forProperty:(int)arg2 ;
-(id)valueForProperty:(int)arg1 ;
-(BOOL)canSave;
-(int)property;
@end
