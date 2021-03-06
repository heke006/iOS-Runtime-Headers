/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class CALayer, NSMutableArray;

@interface BubbleTextLayer : CALayer {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    NSMutableArray *_annotationPoints;
    double _ascent;
    } _boundsSizeConstraint;
    } _bubbleFrame;
    } _bubbleSize;
    } _contentSize;
    struct __CTFont { } *_curCTFont;
    double _descent;
    void *_font;
    } _fontBounds;
    struct CGColor { } *_generalShadowColor;
    double _leading;
    CALayer *_leftImageLayer;
    } _leftImageLayerSize;
    id _owningView;
    CALayer *_rightAccessoryLayer;
    } _rightAccessoryLayerSize;
    } _textFrame;
    } _textSize;
    struct __CTLine { } *_theLine;
    struct CGColor { } *_whiteShadowColor;
}

@property struct CGSize { double x1; double x2; } boundsSizeConstraint;
@property(retain) struct CGColor { }* fillColor2;
@property(retain) struct CGColor { }* fillColor;
@property double fontSize;
@property(retain) struct CGColor { }* foregroundColor;
@property(retain) struct CGColor { }* frameColor;
@property double frameWidth;
@property(retain) struct CGImage { }* image;
@property id owningView;
@property(retain) CALayer * rightAccessoryLayer;
@property(retain) id string;
@property(readonly) double textBaselineOffset;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textFrame;

+ (bool)needsDisplayForKey:(id)arg1;

- (void)addAnnotationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })boundsSizeConstraint;
- (struct CGSize { double x1; double x2; })calculatePreferredSubframeSizes;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGSize { double x1; double x2; })getImagePreferredSize;
- (struct CGSize { double x1; double x2; })getRightAccessoryLayerPreferredSize;
- (struct CGImage { }*)image;
- (id)initWithOwningView:(id)arg1;
- (bool)isAnnotationBubble;
- (void)layoutSublayers;
- (id)owningView;
- (struct CGSize { double x1; double x2; })preferredFrameSize;
- (id)rightAccessoryLayer;
- (void)setBoundsSizeConstraint:(struct CGSize { double x1; double x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setOwningView:(id)arg1;
- (void)setRightAccessoryLayer:(id)arg1;
- (double)textBaselineOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textFrame;
- (struct CGSize { double x1; double x2; })textPreferredFrameSizeForLayerSize:(struct CGSize { double x1; double x2; })arg1;

@end
