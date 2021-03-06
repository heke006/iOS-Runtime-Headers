/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIBorderView, UIColor;

@interface SKUITableViewCell : UITableViewCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    double _borderPaddingLeft;
    SKUIBorderView *_bottomBorderView;
    } _textLabelInsets;
    double _titlePaddingLeft;
    SKUIBorderView *_topBorderView;
}

@property double borderPaddingLeft;
@property(copy) UIColor * bottomBorderColor;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textLabelInsets;
@property(copy) UIColor * topBorderColor;

- (void).cxx_destruct;
- (void)_reloadBorderVisibility;
- (double)borderPaddingLeft;
- (id)bottomBorderColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBorderPaddingLeft:(double)arg1;
- (void)setBottomBorderColor:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setTextLabelInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTopBorderColor:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textLabelInsets;
- (id)topBorderColor;

@end
