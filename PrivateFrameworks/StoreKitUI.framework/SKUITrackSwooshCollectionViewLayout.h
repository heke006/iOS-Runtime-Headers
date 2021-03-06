/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITrackSwooshCollectionViewLayout : UICollectionViewLayout {
    double _columnSpacing;
    double _columnWidth;
    long long _numberOfRows;
    double _rowHeight;
}

@property double columnSpacing;
@property double columnWidth;
@property long long numberOfRows;
@property double rowHeight;

+ (Class)layoutAttributesClass;
+ (float)snapToBoundariesDecelerationRate;

- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (double)columnSpacing;
- (double)columnWidth;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)numberOfRows;
- (double)rowHeight;
- (void)setColumnSpacing:(double)arg1;
- (void)setColumnWidth:(double)arg1;
- (void)setNumberOfRows:(long long)arg1;
- (void)setRowHeight:(double)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
