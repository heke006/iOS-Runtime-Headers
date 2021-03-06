/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSDAudioHUDController>, CALayer, NSString, TSDMovieInfo, TSKAVPlayerController;

@interface TSDAudioRep : TSDMediaRep <TSKMediaPlayerControllerDelegate, TSDAudioHUDControllerDelegate> {
    boolmIsChangingDynamicVolume;
    <TSDAudioHUDController> *mAudioHUDController;
    CALayer *mAudioImageLayer;
    float mDynamicVolume;
    CALayer *mPlayPauseButtonLayer;
    TSKAVPlayerController *mPlayerController;
}

@property(readonly) <TSDAudioHUDController> * audioHUDController;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) TSDMovieInfo * movieInfo;
@property(readonly) TSKAVPlayerController * playerController;
@property(readonly) bool shouldBecomeSelectedWhenPlaying;
@property(readonly) Class superclass;
@property(readonly) float volume;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;

- (void)addKnobsToArray:(id)arg1;
- (id)audioHUDController;
- (void)becameNotSelected;
- (void)becameSelected;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (bool)canResetMediaSize;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)didEndZooming;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(bool)arg2 withStroke:(bool)arg3 withOpacity:(bool)arg4 forAlphaOnly:(bool)arg5 drawChildren:(bool)arg6;
- (void)dynamicVolumeChangeDidBegin;
- (void)dynamicVolumeChangeDidEnd;
- (void)dynamicVolumeUpdateToValue:(float)arg1;
- (bool)exclusivelyProvidesGuidesWhileAligning;
- (bool)hitPlayPauseButtonWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRepChrome:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isDraggable;
- (Class)layerClass;
- (id)movieInfo;
- (id)newTrackerForKnob:(id)arg1;
- (bool)p_isEditingAnimations;
- (bool)p_isPlaying;
- (void)p_setupPlayerControllerIfNecessary;
- (bool)p_shouldPlayerControllerExistThroughoutSelection;
- (bool)p_shouldShowPlayPauseLayers;
- (void)p_teardownAudioHUD;
- (void)p_teardownPlayerController;
- (void)p_updateAudioHUDWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)p_updateButtonForPlaying:(bool)arg1 pressed:(bool)arg2;
- (void)p_updateEndTime;
- (void)p_updateRepeatMode;
- (void)p_updateStartTime;
- (void)p_updateVolume;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (id)playerController;
- (void)processChangedProperty:(int)arg1;
- (bool)providesGuidesWhileAligning;
- (void)setupPlayerControllerForAudioHUDController:(id)arg1;
- (bool)shouldAllowReplacementFromDrop;
- (bool)shouldAllowReplacementFromPaste;
- (bool)shouldBecomeSelectedWhenPlaying;
- (bool)shouldCreateSelectionKnobs;
- (bool)shouldShowDragHUD;
- (bool)shouldShowKnobs;
- (bool)shouldShowMediaReplaceUI;
- (bool)shouldShowSelectionHighlight;
- (bool)shouldShowSizesInRulers;
- (id)textureWithContext:(id)arg1;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (void)updatePlayButtonForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (float)volume;
- (void)willBeRemoved;
- (void)willBeginReadMode;
- (void)willBeginZooming;
- (void)willUpdateLayer:(id)arg1;

@end
