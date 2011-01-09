/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWindow, UIButton;



@interface UIZoomViewController : UIViewController 
{
    UIWindow *_window;
    UIButton *_zoomButton;
}

+ (void)_initializeSafeCategory;

- (id)_zoomText:(BOOL)arg1;
- (void)_changeZoom:(id)arg1;
- (void)_startZoomAnimation:(BOOL)arg1;
- (void)_setupPositioningAndRotationForInterfaceOrientation:(NSInteger)arg1 offscreen:(BOOL)arg2;
- (void)_zoomOrientationChange:(id)arg1;
- (void)_zoomOrientationAnimationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (void)_suspendAnimationStarted:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1 forWindow:(id)arg2;
- (void)loadView;
- (BOOL)isClassicControlWindow:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_accessibilitySetZoomButtonLabel;

@end