/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iap2d/iap2d-Structs.h>
@class iAP2Connection;

@interface iAP2PowerUpdates : NSObject {

	unsigned paramCountArr[7];
	unsigned long long updateTypesBitmask;
	iAP2Connection* _connection;

}

@property (nonatomic,readonly) iAP2Connection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)clearUpdateTypes;
-(unsigned)paramCount:(int)arg1 ;
-(void)incrementParamCount:(int)arg1 ;
-(char)isUpdateTypeEnabled:(int)arg1 ;
-(void)setUpdateTypesBitmask:(unsigned long long)arg1 ;
-(void)enableUpdateType:(int)arg1 ;
-(void)processPowerInfoChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(iAP2Connection *)connection;
-(id)initWithConnection:(id)arg1 ;
@end
