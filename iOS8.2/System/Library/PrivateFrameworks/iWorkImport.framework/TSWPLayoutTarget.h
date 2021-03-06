/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSMutableArray, TSDCanvas, TSDLayout;


@protocol TSWPLayoutTarget <NSObject>
@property (nonatomic,retain,readonly) NSMutableArray * columns; 
@property (nonatomic,retain,readonly) id<TSWPOffscreenColumn> previousTargetLastColumn; 
@property (nonatomic,readonly) const TSWPTopicNumberHints* previousTargetTopicNumbers; 
@property (nonatomic,retain,readonly) id<TSWPOffscreenColumn> nextTargetFirstColumn; 
@property (nonatomic,readonly) const TSWPTopicNumberHints* nextTargetTopicNumbers; 
@property (nonatomic,readonly) id<TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer; 
@property (nonatomic,readonly) id<TSWPFootnoteMarkProvider> footnoteMarkProvider; 
@property (nonatomic,readonly) TSPObject*<TSDHint> nextTargetFirstChildHint; 
@property (nonatomic,readonly) CGSize minSize; 
@property (nonatomic,readonly) CGSize maxSize; 
@property (nonatomic,readonly) CGSize currentSize; 
@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (nonatomic,readonly) unsigned autosizeFlags; 
@property (nonatomic,readonly) int verticalAlignment; 
@property (nonatomic,readonly) int naturalAlignment; 
@property (nonatomic,readonly) int naturalDirection; 
@property (nonatomic,readonly) char wantsLineFragments; 
@property (nonatomic,readonly) unsigned pageNumber; 
@property (nonatomic,readonly) unsigned pageCount; 
@property (nonatomic,readonly) char textIsVertical; 
@property (nonatomic,readonly) char layoutIsValid; 
@property (nonatomic,readonly) float maxAnchorY; 
@property (nonatomic,readonly) CGRect maskRect; 
@property (nonatomic,retain) NSMutableArray * anchoredDrawablesForRelayout; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,readonly) TSDLayout * parentLayoutForInlineAttachments; 
@property (nonatomic,readonly) char shouldHyphenate; 
@property (nonatomic,readonly) CFLocaleRef hyphenationLocale; 
@optional
-(CGRect)maskRect;
-(void)setAnchoredDrawablesForRelayout:(id)arg1;
-(NSMutableArray *)anchoredDrawablesForRelayout;
-(char)shouldHyphenate;
-(char)siblingTargetIsManipulatingDrawable:(id)arg1;
-(TSDLayout *)parentLayoutForInlineAttachments;
-(CGPoint*)anchoredAttachmentPositionFromLayoutPosition:(CGPoint)arg1;
-(CGPoint*)layoutPositionFromAnchoredAttachmentPosition:(CGPoint)arg1;
-(CFLocaleRef)hyphenationLocale;
-(id)interiorClippingPath;
-(char)invalidateForPageCountChange;
-(CGPoint*)layoutPositionFromInlineAttachmentPosition:(CGPoint)arg1;
-(unsigned)pageIndex;
-(TSDCanvas *)canvas;

@required
-(char)textIsVertical;
-(id)columnMetricsForCharIndex:(unsigned)arg1 outRange:(NSRange*)arg2;
-(id)currentAnchoredDrawableLayouts;
-(id)validatedLayoutForAnchoredDrawable:(id)arg1;
-(unsigned)autosizeFlags;
-(id)validatedLayoutForInlineDrawable:(id)arg1;
-(id<TSWPOffscreenColumn>)previousTargetLastColumn;
-(id<TSWPFootnoteHeightMeasurer>)footnoteHeightMeasurer;
-(id<TSWPFootnoteMarkProvider>)footnoteMarkProvider;
-(id)currentInlineDrawableLayouts;
-(float)maxAnchorY;
-(TSPObject*<TSDHint>)nextTargetFirstChildHint;
-(void)setNeedsDisplayInTargetRect:(CGRect)arg1;
-(const TSWPTopicNumberHints*)nextTargetTopicNumbers;
-(id<TSWPOffscreenColumn>)nextTargetFirstColumn;
-(void)addAttachmentLayout:(id)arg1;
-(const TSWPTopicNumberHints*)previousTargetTopicNumbers;
-(char)isLastTarget;
-(int)naturalAlignment;
-(char)isLayoutOffscreen;
-(CGRect*)targetRectForCanvasRect:(CGRect)arg1;
-(int)naturalDirection;
-(char)wantsLineFragments;
-(char)layoutIsValid;
-(CGSize)currentSize;
-(CGSize)maxSize;
-(CGPoint)position;
-(CGPoint)anchorPoint;
-(CGSize)minSize;
-(unsigned)pageCount;
-(unsigned)pageNumber;
-(NSMutableArray *)columns;
-(int)verticalAlignment;

@end

