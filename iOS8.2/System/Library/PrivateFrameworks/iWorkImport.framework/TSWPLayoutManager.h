/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPStorageObserver.h>

@protocol TSWPLayoutOwner;
@class TSWPStorage, TSWPCTTypesetterCache;

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver> {

	TSWPStorage* _storage;
	char _isObservingStorage;
	char _useLigatures;
	int _delta;
	NSRange _dirtyRange;
	TSWPCTTypesetterCache* _typesetterCache;
	TSWPTopicNumberHints* _cachedTopicNumbers;
	id<TSWPLayoutOwner> _owner;

}

@property (nonatomic,readonly) id<TSWPLayoutOwner> owner;                                   //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain,readonly) TSWPStorage * storage;                                //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSRange dirtyRange;                                          //@synthesize dirtyRange=_dirtyRange - In the implementation block
@property (nonatomic,retain,readonly) TSWPCTTypesetterCache * typesetterCache; 
+(void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned)arg3 firstColumnIndex:(unsigned)arg4 precedingHeight:(float)arg5 height:(float)arg6 alreadyHasMargins:(char)arg7 styleProvider:(id)arg8 vertical:(char)arg9 ;
-(void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(int)arg3 broadcastKind:(int)arg4 ;
-(void)clearOwner;
-(int)p_layoutConfigFlagsForTarget:(id)arg1 ;
-(void)clearTypesetterCache;
-(id)initWithStorage:(id)arg1 owner:(id)arg2 ;
-(void)willRemoveAttachmentLayout:(id)arg1 ;
-(char)needsLayoutInColumn:(id)arg1 ;
-(void*)layoutIntoTarget:(id)arg1 withLayoutState:(void*)arg2 outSync:(char*)arg3 ;
-(void*)layoutStateForLayoutAfterHint:(const SCD_Struct_TS581*)arg1 childHint:(id)arg2 topicNumbers:(const TSWPTopicNumberHints*)arg3 textIsVertical:(char)arg4 ;
-(void)deflateTarget:(id)arg1 intoHints:(vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >*)arg2 childHints:(id)arg3 anchoredAttachmentPositions:(id*)arg4 topicNumbers:(TSWPTopicNumberHints*)arg5 layoutState:(void*)arg6 ;
-(void)inflateTarget:(id)arg1 fromHints:(const vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >*)arg2 childHint:(id)arg3 anchoredAttachmentPositions:(id)arg4 topicNumbers:(const TSWPTopicNumberHints*)arg5 ;
-(void)destroyLayoutState:(void*)arg1 ;
-(TSWPCTTypesetterCache *)typesetterCache;
-(NSRange)dirtyRange;
-(id)styleProvider;
-(void)dealloc;
-(TSWPStorage *)storage;
-(id<TSWPLayoutOwner>)owner;
@end
