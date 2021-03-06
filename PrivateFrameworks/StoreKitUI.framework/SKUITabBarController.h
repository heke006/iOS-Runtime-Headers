/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIFloatingOverlayView, SKUITabBarBackgroundView, UIViewController;

@interface SKUITabBarController : UITabBarController <SKUIMoreNavigationControllerDelegate> {
    SKUIFloatingOverlayView *_floatingOverlayView;
    UIViewController *_floatingOverlayViewController;
    SKUITabBarBackgroundView *_tabBarBackgroundView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) UIViewController * floatingOverlayViewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (Class)_moreNavigationControllerClass;

- (void).cxx_destruct;
- (id)_backdropGroupName;
- (void)_layoutFloatingOverlayView;
- (void)cancelTransientViewController:(id)arg1;
- (id)floatingOverlayViewController;
- (id)init;
- (void)moreNavigationController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)moreNavigationController;
- (void)setFloatingOverlayViewController:(id)arg1 animated:(bool)arg2;
- (void)setTabBarBackdropStyle:(long long)arg1;
- (void)setTransientViewController:(id)arg1 animated:(bool)arg2;
- (id)skui_activeNavigationController;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
