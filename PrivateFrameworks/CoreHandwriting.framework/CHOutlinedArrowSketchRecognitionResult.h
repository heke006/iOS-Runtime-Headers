/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHOutlinedArrowSketchRecognitionResult : CHSketchRecognitionResult {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGPoint { 
        double x; 
        double y; 
    } _center;
    } _controlPoint;
    } _size;
}

@property(readonly) struct CGPoint { double x1; double x2; } center;
@property(readonly) struct CGPoint { double x1; double x2; } controlPoint;
@property(readonly) struct CGSize { double x1; double x2; } size;

- (id).cxx_construct;
- (struct CGPoint { double x1; double x2; })center;
- (struct CGPoint { double x1; double x2; })controlPoint;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(struct CGPoint { double x1; double x2; })arg4 size:(struct CGSize { double x1; double x2; })arg5 controlPointLocation:(struct CGPoint { double x1; double x2; })arg6;
- (struct CGSize { double x1; double x2; })size;

@end
