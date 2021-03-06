/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColorMap, OADThemeOverrides;

@interface PDSlideChild : PDSlideBase {
    boolmShowMasterPlaceholderAnimations;
    boolmShowMasterShapes;
    OADColorMap *mColorMapOverride;
    OADThemeOverrides *mThemeOverrides;
}

- (id)colorMap;
- (id)colorMapOverride;
- (id)colorScheme;
- (void)dealloc;
- (void)doneWithContent;
- (id)drawingTheme;
- (id)fontScheme;
- (id)init;
- (void)setColorMapOverride:(id)arg1;
- (void)setShowMasterPlaceholderAnimations:(bool)arg1;
- (void)setShowMasterShapes:(bool)arg1;
- (bool)showMasterPlaceholderAnimations;
- (bool)showMasterShapes;
- (id)styleMatrix;
- (id)themeOverrides;

@end
