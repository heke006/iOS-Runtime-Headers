/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UISnapshotView, UIView, UIWindow;

@interface UIClientRotationContext : NSObject {
    struct { 
        boolanimateContentRotation; 
        boolpreserveHeight; 
        boolavoidFadingBottomOfContent; 
        boolskipSnapshotOfEndState; 
        boolpreventAdditveAnimations; 
        double contentStretchRightEdgeInset; 
        int edgeClip; 
    NSArray *_backdropViews;
    UISnapshotView *_contentSnapshotViewStart;
    double _contentTopAdjustmentStart;
    UIView *_contentView;
    double _duration;
    UIView *_footerEndSnapshotView;
    UISnapshotView *_footerSnapshotViewStart;
    UIView *_footerStartSnapshotView;
    UIView *_footerView;
    long long _fromOrientation;
    UISnapshotView *_headerSnapshotViewStart;
    UIView *_headerView;
    id _rotatingClient;
    UIView *_rotatingSnapshotView;
    } _rotationSettings;
    UIView *_snapshotTargetView;
    long long _toOrientation;
    UIWindow *_window;
    bool_contentWasHidden;
    bool_footerWasHidden;
    bool_headerWasHidden;
    bool_orderKeyboardInAfterRotating;
    bool_skipClientRotationCallbacks;
    bool_skipFooterRotation;
    bool_skipHeaderRotation;
    bool_snapshotTargetWasHidden;
    double contentBottomInset;
}

@property(readonly) UIView * contentView;
@property(readonly) double duration;
@property(readonly) long long fromOrientation;
@property(readonly) id rotatingClient;
@property bool skipClientRotationCallbacks;
@property(readonly) long long toOrientation;

- (bool)_isFooterTranslucent;
- (bool)_isHeaderTranslucent;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;
- (void)_slideFooterWithStartSnapshot:(id)arg1 endSnapshot:(id)arg2 duration:(double)arg3;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(bool)arg3 forInterfaceOrientation:(long long)arg4;
- (id)contentView;
- (void)dealloc;
- (void)disableBackdropViewUpdates:(bool)arg1;
- (double)duration;
- (void)finishFirstHalfRotation;
- (void)finishFullRotateUsingOnePartAnimation:(bool)arg1;
- (long long)fromOrientation;
- (id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4;
- (void)rotateSnapshots;
- (id)rotatingClient;
- (void)setSkipClientRotationCallbacks:(bool)arg1;
- (void)setupRotationOrderingKeyboardInAfterRotation:(bool)arg1;
- (bool)skipClientRotationCallbacks;
- (void)slideHeaderViewAndFooterViewOffScreen:(bool)arg1 forInterfaceOrientation:(long long)arg2;
- (long long)toOrientation;

@end
