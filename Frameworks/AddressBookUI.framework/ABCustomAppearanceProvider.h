/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABStyleProvider;

@interface ABCustomAppearanceProvider : NSObject {
    ABStyleProvider *_styleProvider;
}

- (Class)actionCellClass;
- (double)cardTableViewSectionFooterHeightWhenEditing:(bool)arg1;
- (double)cardTableViewSectionHeaderHeightWhenEditing:(bool)arg1;
- (Class)customCardActionCellClass;
- (Class)customCardCellClass;
- (void)customSetEmphasized:(bool)arg1 onCell:(id)arg2;
- (void)dealloc;
- (double)distanceBetweenSections;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)newActionButton;
- (id)newCardActionButton;
- (id)newCustomCardTableScrollingBackgroundView;
- (id)newScrollingBackgroundView;
- (Class)propertyCellClass;
- (void)setHighlighted:(bool)arg1 onPropertyCell:(id)arg2;
- (void)setIndicatesFaceTimeHistory:(bool)arg1 onActionButton:(id)arg2;
- (bool)shouldPropagateStylesThroughUnknownPersonActions;
- (bool)shouldPropagateStylesToPickers;
- (bool)shouldUseCardContentProviderWhenAvailable;
- (long long)unknownModalPresentationStyle;

@end
