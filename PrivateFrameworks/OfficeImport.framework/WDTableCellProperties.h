/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDShading, WDBorder;



@interface WDTableCellProperties : NSObject 
{
    short mWidth;
    short mPosition;
    BOOL mOriginal;
    BOOL mTracked;
    BOOL mResolved;
    struct { 
        WDShading *shading; 
        BOOL shadingOverridden; 
        WDBorder *topBorder; 
        BOOL topBorderOverridden; 
        WDBorder *leftBorder; 
        BOOL leftBorderOverridden; 
        WDBorder *bottomBorder; 
        BOOL bottomBorderOverridden; 
        WDBorder *rightBorder; 
        BOOL rightBorderOverridden; 
        WDBorder *diagonalUpBorder; 
        BOOL diagonalUpBorderOverridden; 
        WDBorder *diagonalDownBorder; 
        BOOL diagonalDownBorderOverridden; 
        WDBorder *insideHorizontalBorder; 
        BOOL insideHorizontalBorderOverridden; 
        WDBorder *insideVerticalBorder; 
        BOOL insideVerticalBorderOverridden; 
        NSInteger widthType; 
        BOOL widthTypeOverridden; 
        short topMargin; 
        BOOL topMarginOverridden; 
        NSInteger topMarginType; 
        BOOL topMarginTypeOverridden; 
        short bottomMargin; 
        BOOL bottomMarginOverridden; 
        NSInteger bottomMarginType; 
        BOOL bottomMarginTypeOverridden; 
        short leftMargin; 
        BOOL leftMarginOverridden; 
        NSInteger leftMarginType; 
        BOOL leftMarginTypeOverridden; 
        short rightMargin; 
        BOOL rightMarginOverridden; 
        NSInteger rightMarginType; 
        BOOL rightMarginTypeOverridden; 
        NSInteger verticalAlignment; 
        BOOL verticalAlignmentOverridden; 
        BOOL verticallyMergedCell; 
        BOOL verticallyMergedCellOverridden; 
        BOOL firstInSetOfVerticallyMergedCells; 
        BOOL firstInSetOfVerticallyMergedCellsOverridden; 
        BOOL noWrap; 
        BOOL noWrapOverridden; 
    } mOriginalProperties;
    struct { 
        WDShading *shading; 
        BOOL shadingOverridden; 
        WDBorder *topBorder; 
        BOOL topBorderOverridden; 
        WDBorder *leftBorder; 
        BOOL leftBorderOverridden; 
        WDBorder *bottomBorder; 
        BOOL bottomBorderOverridden; 
        WDBorder *rightBorder; 
        BOOL rightBorderOverridden; 
        WDBorder *diagonalUpBorder; 
        BOOL diagonalUpBorderOverridden; 
        WDBorder *diagonalDownBorder; 
        BOOL diagonalDownBorderOverridden; 
        WDBorder *insideHorizontalBorder; 
        BOOL insideHorizontalBorderOverridden; 
        WDBorder *insideVerticalBorder; 
        BOOL insideVerticalBorderOverridden; 
        NSInteger widthType; 
        BOOL widthTypeOverridden; 
        short topMargin; 
        BOOL topMarginOverridden; 
        NSInteger topMarginType; 
        BOOL topMarginTypeOverridden; 
        short bottomMargin; 
        BOOL bottomMarginOverridden; 
        NSInteger bottomMarginType; 
        BOOL bottomMarginTypeOverridden; 
        short leftMargin; 
        BOOL leftMarginOverridden; 
        NSInteger leftMarginType; 
        BOOL leftMarginTypeOverridden; 
        short rightMargin; 
        BOOL rightMarginOverridden; 
        NSInteger rightMarginType; 
        BOOL rightMarginTypeOverridden; 
        NSInteger verticalAlignment; 
        BOOL verticalAlignmentOverridden; 
        BOOL verticallyMergedCell; 
        BOOL verticallyMergedCellOverridden; 
        BOOL firstInSetOfVerticallyMergedCells; 
        BOOL firstInSetOfVerticallyMergedCellsOverridden; 
        BOOL noWrap; 
        BOOL noWrapOverridden; 
    } mTrackedProperties;
}


- (id)init;
- (void)dealloc;
- (short)width;
- (void)setWidth:(short)arg1;
- (short)position;
- (void)setPosition:(short)arg1;
- (NSInteger)resolveMode;
- (void)setResolveMode:(NSInteger)arg1;
- (void)addProperties:(id)arg1;
- (id)shading;
- (id)mutableShading;
- (BOOL)isShadingOverridden;
- (id)topBorder;
- (id)mutableTopBorder;
- (BOOL)isTopBorderOverridden;
- (id)leftBorder;
- (id)mutableLeftBorder;
- (BOOL)isLeftBorderOverridden;
- (id)bottomBorder;
- (id)mutableBottomBorder;
- (BOOL)isBottomBorderOverridden;
- (id)rightBorder;
- (id)mutableRightBorder;
- (BOOL)isRightBorderOverridden;
- (id)diagonalUpBorder;
- (id)mutableDiagonalUpBorder;
- (BOOL)isDiagonalUpBorderOverridden;
- (id)diagonalDownBorder;
- (id)mutableDiagonalDownBorder;
- (BOOL)isDiagonalDownBorderOverridden;
- (id)insideHorizontalBorder;
- (id)mutableInsideHorizontalBorder;
- (BOOL)isInsideHorizontalBorderOverridden;
- (id)insideVerticalBorder;
- (id)mutableInsideVerticalBorder;
- (BOOL)isInsideVerticalBorderOverridden;
- (NSInteger)widthType;
- (void)setWidthType:(NSInteger)arg1;
- (BOOL)isWidthTypeOverridden;
- (short)topMargin;
- (void)setTopMargin:(short)arg1;
- (BOOL)isTopMarginOverridden;
- (NSInteger)topMarginType;
- (void)setTopMarginType:(NSInteger)arg1;
- (BOOL)isTopMarginTypeOverridden;
- (short)bottomMargin;
- (void)setBottomMargin:(short)arg1;
- (BOOL)isBottomMarginOverridden;
- (NSInteger)bottomMarginType;
- (void)setBottomMarginType:(NSInteger)arg1;
- (BOOL)isBottomMarginTypeOverridden;
- (short)leftMargin;
- (void)setLeftMargin:(short)arg1;
- (BOOL)isLeftMarginOverridden;
- (NSInteger)leftMarginType;
- (void)setLeftMarginType:(NSInteger)arg1;
- (BOOL)isLeftMarginTypeOverridden;
- (short)rightMargin;
- (void)setRightMargin:(short)arg1;
- (BOOL)isRightMarginOverridden;
- (NSInteger)rightMarginType;
- (void)setRightMarginType:(NSInteger)arg1;
- (BOOL)isRightMarginTypeOverridden;
- (NSInteger)verticalAlignment;
- (void)setVerticalAlignment:(NSInteger)arg1;
- (BOOL)isVerticalAlignmentOverridden;
- (BOOL)verticallyMergedCell;
- (void)setVerticallyMergedCell:(BOOL)arg1;
- (BOOL)isVerticallyMergedCellOverridden;
- (BOOL)firstInSetOfVerticallyMergedCells;
- (void)setFirstInSetOfVerticallyMergedCells:(BOOL)arg1;
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
- (BOOL)noWrap;
- (void)setNoWrap:(BOOL)arg1;
- (BOOL)isNoWrapOverridden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)addPropertiesValues:(struct { id x1; BOOL x2; id x3; BOOL x4; id x5; BOOL x6; id x7; BOOL x8; id x9; BOOL x10; id x11; BOOL x12; id x13; BOOL x14; id x15; BOOL x16; id x17; BOOL x18; NSInteger x19; BOOL x20; short x21; BOOL x22; NSInteger x23; BOOL x24; short x25; BOOL x26; NSInteger x27; BOOL x28; short x29; BOOL x30; NSInteger x31; BOOL x32; short x33; BOOL x34; NSInteger x35; BOOL x36; NSInteger x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; }*)arg1 to:(struct { id x1; BOOL x2; id x3; BOOL x4; id x5; BOOL x6; id x7; BOOL x8; id x9; BOOL x10; id x11; BOOL x12; id x13; BOOL x14; id x15; BOOL x16; id x17; BOOL x18; NSInteger x19; BOOL x20; short x21; BOOL x22; NSInteger x23; BOOL x24; short x25; BOOL x26; NSInteger x27; BOOL x28; short x29; BOOL x30; NSInteger x31; BOOL x32; short x33; BOOL x34; NSInteger x35; BOOL x36; NSInteger x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; }*)arg2;

@end