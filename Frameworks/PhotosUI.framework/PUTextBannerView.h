/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString, UIImageView, UILabel;

@interface PUTextBannerView : UIView {
    UIImageView *_backgroundView;
    NSString *_text;
    long long _textAlignment;
    UILabel *_textLabel;
    bool_destructiveText;
}

@property(getter=isDestructiveText) bool destructiveText;
@property(copy) NSString * text;
@property long long textAlignment;

- (void).cxx_destruct;
- (void)_updateSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDestructiveText;
- (void)layoutSubviews;
- (void)setDestructiveText:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (long long)textAlignment;

@end
