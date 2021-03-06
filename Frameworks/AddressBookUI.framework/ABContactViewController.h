/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABContactViewControllerDelegate>, <ABPresenterDelegate>, ABCardFaceTimeGroup, ABCardGroup, ABCardLinkedCardsGroup, ABContactAction, ABContactAddFavoriteAction, ABContactAddLinkedCardAction, ABContactAddNewFieldAction, ABContactAddToExistingContactAction, ABContactCreateNewContactAction, ABContactHeaderDisplayView, ABContactHeaderEditView, ABContactHeaderView, ABContactToggleBlockCallerAction, ABContactView, ABMedicalIDAction, ABPropertyAction, ABPropertyFaceTimeAction, ABPropertyIDSRequest, ABPropertyLinkedCardsAction, ABSiriContactContextProvider, CNContact, HKHealthStore, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, UIView;

@interface ABContactViewController : UITableViewController <ABPropertyActionDelegate, ABPropertyCellDelegate, ABContactGroupPickerDelegate, ABPresenterDelegate, UIPopoverControllerDelegate, ABContactAddLinkedCardActionDelegate, ABContactHeaderViewDelegate, ABContactViewControllerDelegate, UIAdaptivePresentationControllerDelegate, ABContactViewDataSource, ABContactViewDelegate, UIViewControllerRestoration> {
    ABContactAddFavoriteAction *_addFavoriteAction;
    ABContactAddLinkedCardAction *_addLinkedCardAction;
    ABContactAddNewFieldAction *_addNewFieldAction;
    ABContactAddToExistingContactAction *_addToExistingContactAction;
    NSString *_alternateName;
    int _animating;
    ABContactToggleBlockCallerAction *_blockAction;
    NSMapTable *_cachedLabelWidths;
    ABCardGroup *_cardActionsGroup;
    ABCardGroup *_cardBlockContactGroup;
    ABCardGroup *_cardBottomGroup;
    ABCardGroup *_cardEditingActionsGroup;
    ABCardGroup *_cardEditingDeleteContactGroup;
    ABCardFaceTimeGroup *_cardFaceTimeGroup;
    ABCardGroup *_cardFooterGroup;
    ABCardLinkedCardsGroup *_cardLinkedCardsGroup;
    ABCardGroup *_cardMedicalIDGroup;
    ABCardGroup *_cardPrimaryPropertyActionsGroup;
    ABCardGroup *_cardTopGroup;
    CNContact *_contact;
    <ABContactViewControllerDelegate> *_contactDelegate;
    ABContactCreateNewContactAction *_createNewContactAction;
    ABContactAction *_deleteContactAction;
    ABContactView *_displayContactView;
    NSMutableArray *_displayGroups;
    ABContactHeaderDisplayView *_displayHeaderView;
    NSArray *_displayedProperties;
    ABContactView *_editingContactView;
    NSMutableArray *_editingGroups;
    ABContactHeaderEditView *_editingHeaderView;
    ABPropertyFaceTimeAction *_faceTimeAction;
    ABPropertyFaceTimeAction *_faceTimeAudioAction;
    ABPropertyIDSRequest *_faceTimeIDSRequest;
    NSMutableDictionary *_groupsAfterGroup;
    HKHealthStore *_healthStore;
    ABPropertyIDSRequest *_iMessageIDSRequest;
    ABPropertyLinkedCardsAction *_linkedCardsAction;
    NSMutableArray *_linkedContactsEdits;
    ABMedicalIDAction *_medicalIDAction;
    NSString *_message;
    NSMutableArray *_mutableContacts;
    NSArray *_nameEditingGroups;
    UIView *_personHeaderView;
    <ABPresenterDelegate> *_presentingDelegate;
    NSString *_primaryProperty;
    NSDictionary *_propertyGroups;
    ABPropertyAction *_sendMessageAction;
    ABContactAction *_shareContactAction;
    ABSiriContactContextProvider *_siriContextProvider;
    NSDictionary *_userActivityUserInfo;
    bool_allowsActions;
    bool_allowsAddToFavorites;
    bool_allowsAddingToAddressBook;
    bool_allowsCardActions;
    bool_allowsConferencing;
    bool_allowsContactBlocking;
    bool_allowsDeletion;
    bool_allowsEditing;
    bool_allowsOnlyFaceTimeActions;
    bool_allowsOnlyPhoneActions;
    bool_allowsPropertyActions;
    bool_allowsSendMessage;
    bool_allowsSharing;
    bool_alwaysEditing;
    bool_disablingRotation;
    bool_hideCardActions;
    bool_isMailVIP;
    bool_needsReload;
    bool_shouldShowLinkedContacts;
}

@property(retain) ABContactAddFavoriteAction * addFavoriteAction;
@property(retain) ABContactAddLinkedCardAction * addLinkedCardAction;
@property(retain) ABContactAddNewFieldAction * addNewFieldAction;
@property(retain) ABContactAddToExistingContactAction * addToExistingContactAction;
@property bool allowsActions;
@property bool allowsAddToFavorites;
@property bool allowsAddingToAddressBook;
@property bool allowsCardActions;
@property bool allowsConferencing;
@property bool allowsContactBlocking;
@property bool allowsDeletion;
@property bool allowsEditing;
@property bool allowsOnlyFaceTimeActions;
@property bool allowsOnlyPhoneActions;
@property bool allowsPropertyActions;
@property bool allowsSendMessage;
@property bool allowsSharing;
@property(retain) NSString * alternateName;
@property bool alwaysEditing;
@property(retain) ABContactToggleBlockCallerAction * blockAction;
@property(retain) NSMapTable * cachedLabelWidths;
@property(retain) ABCardGroup * cardActionsGroup;
@property(retain) ABCardGroup * cardBlockContactGroup;
@property(retain) ABCardGroup * cardBottomGroup;
@property(retain) ABCardGroup * cardEditingActionsGroup;
@property(retain) ABCardGroup * cardEditingDeleteContactGroup;
@property(retain) ABCardFaceTimeGroup * cardFaceTimeGroup;
@property(readonly) ABCardGroup * cardFooterGroup;
@property(retain) ABCardLinkedCardsGroup * cardLinkedCardsGroup;
@property(retain) ABCardGroup * cardMedicalIDGroup;
@property(retain) ABCardGroup * cardPrimaryPropertyActionsGroup;
@property(retain) ABCardGroup * cardTopGroup;
@property(readonly) CNContact * contact;
@property <ABContactViewControllerDelegate> * contactDelegate;
@property(readonly) ABContactHeaderView * contactHeaderView;
@property(readonly) ABContactView * contactView;
@property(retain) ABContactCreateNewContactAction * createNewContactAction;
@property(copy,readonly) NSString * debugDescription;
@property(retain) ABContactAction * deleteContactAction;
@property(copy,readonly) NSString * description;
@property(retain) ABContactView * displayContactView;
@property(retain) NSMutableArray * displayGroups;
@property(retain) ABContactHeaderDisplayView * displayHeaderView;
@property(copy) NSArray * displayedProperties;
@property(retain) ABContactView * editingContactView;
@property(retain) NSMutableArray * editingGroups;
@property(retain) ABContactHeaderEditView * editingHeaderView;
@property(retain) ABPropertyFaceTimeAction * faceTimeAction;
@property(retain) ABPropertyFaceTimeAction * faceTimeAudioAction;
@property(retain) ABPropertyIDSRequest * faceTimeIDSRequest;
@property(retain) NSMutableDictionary * groupsAfterGroup;
@property(readonly) unsigned long long hash;
@property(retain) HKHealthStore * healthStore;
@property bool hideCardActions;
@property(retain) ABPropertyIDSRequest * iMessageIDSRequest;
@property bool isMailVIP;
@property(readonly) bool isPresentingModalViewController;
@property(retain) ABPropertyLinkedCardsAction * linkedCardsAction;
@property(retain) NSMutableArray * linkedContactsEdits;
@property(retain) ABMedicalIDAction * medicalIDAction;
@property(retain) NSString * message;
@property(retain) NSMutableArray * mutableContacts;
@property(retain) NSArray * nameEditingGroups;
@property(retain) UIView * personHeaderView;
@property <ABPresenterDelegate> * presentingDelegate;
@property(retain) NSString * primaryProperty;
@property(retain) NSDictionary * propertyGroups;
@property(retain) ABPropertyAction * sendMessageAction;
@property(retain) ABContactAction * shareContactAction;
@property bool shouldShowLinkedContacts;
@property(retain) ABSiriContactContextProvider * siriContextProvider;
@property(readonly) Class superclass;
@property(retain) NSDictionary * userActivityUserInfo;

+ (id)boolStateRestorationProperties;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (id)_addCreateNewContactAction;
- (void)_addFaceTimeGroupAnimated:(bool)arg1;
- (id)_addFavoriteActionWithConferencing:(bool)arg1 telephony:(bool)arg2;
- (id)_addGroupsInArray:(id)arg1 afterGroup:(id)arg2;
- (id)_addLinkedCardAction;
- (id)_addNewFieldAction;
- (id)_addToExistingContactAction;
- (void)_addedGroupWithName:(id)arg1;
- (id)_allDisplayPropertyItemsFromGroups:(id)arg1;
- (id)_cardGroupAtIndex:(long long)arg1;
- (id)_cellForIndexPath:(id)arg1;
- (id)_currentGroups;
- (id)_dateForProperty:(id)arg1;
- (id)_faceTimeAction;
- (id)_faceTimeAudioAction;
- (bool)_indexPathIsActionItem:(id)arg1;
- (id)_itemAtIndexPath:(id)arg1;
- (void)_linkEditableContactForEditedReadOnlyContact;
- (id)_linkedCardsAction;
- (id)_loadDisplayGroups;
- (id)_loadEditingGroups;
- (id)_loadMutableLinkedContactsForUnifiedContact:(id)arg1;
- (id)_loadNameEditingGroups;
- (id)_loadPropertyGroups;
- (long long)_modalPresentationStyleForViewController:(id)arg1;
- (bool)_modelHasChanges;
- (bool)_modelIsEmpty;
- (long long)_numberOfItemsInCustomGroup:(id)arg1;
- (void)_reloadFaceTimeGroup;
- (void)_reloadLinkedCardsGroup;
- (void)_reloadMedicalIDGroup;
- (void)_reloadPropertyGroupsPreservingChanges:(bool)arg1;
- (void)_saveChangesForGroups:(id)arg1;
- (void)_scrollContactView:(id)arg1 toVisibleGroupInContactView:(id)arg2;
- (id)_sendMessageActionAllowingEmailIDs:(bool)arg1;
- (void)_setupAddToAddressBookActions;
- (void)_setupCardActions;
- (void)_setupContactBlockingActionsWithUpdate:(bool)arg1;
- (void)_setupEditingCardActions;
- (void)_setupPrimaryPropertyActions;
- (id)_shareContactAction;
- (void)_updateAvailableTransports;
- (void)_updateAvailableTransportsForItems:(id)arg1;
- (void)_updateEmailTransportButtonsForItems:(id)arg1;
- (void)_updateIMessageTransportButtonsForItems:(id)arg1;
- (void)_updateItemsInGroup:(id)arg1;
- (void)_updateLabelWidthForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateLabelWidths;
- (void)_updateLabelWidthsForGroup:(id)arg1;
- (void)_updateLabelWidthsForItem:(id)arg1;
- (void)_updatePhoneTransportButtonsForItems:(id)arg1;
- (void)_updateUserActivity;
- (void)_validateGroup:(id)arg1;
- (id)action:(id)arg1 cellForPropertyItem:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
- (void)actionDidFinish:(id)arg1;
- (void)actionDidUpdate:(id)arg1;
- (void)actionWasCanceled:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4 destructive:(bool)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4;
- (void)addCardGroup:(id)arg1 afterGroup:(id)arg2;
- (void)addEditingItemAtIndexPath:(id)arg1;
- (id)addFavoriteAction;
- (id)addLinkedCardAction;
- (void)addLinkedContact:(id)arg1;
- (id)addNewFieldAction;
- (void)addToExistingContact:(id)arg1;
- (id)addToExistingContactAction;
- (bool)allowsActions;
- (bool)allowsAddToFavorites;
- (bool)allowsAddingToAddressBook;
- (bool)allowsCardActions;
- (bool)allowsConferencing;
- (bool)allowsContactBlocking;
- (bool)allowsDeletion;
- (bool)allowsEditing;
- (bool)allowsOnlyFaceTimeActions;
- (bool)allowsOnlyPhoneActions;
- (bool)allowsPropertyActions;
- (bool)allowsSendMessage;
- (bool)allowsSharing;
- (id)alreadyPickedGroups;
- (id)alternateName;
- (bool)alwaysEditing;
- (void)applyStyleProvider:(id)arg1;
- (id)blockAction;
- (void)blockListDidChange:(id)arg1;
- (id)cachedLabelWidths;
- (id)cardActions;
- (id)cardActionsGroup;
- (id)cardBlockContactGroup;
- (id)cardBottomGroup;
- (id)cardEditingActionsGroup;
- (id)cardEditingDeleteContactGroup;
- (id)cardFaceTimeGroup;
- (id)cardFooterGroup;
- (id)cardGroupForProperty:(id)arg1;
- (id)cardLinkedCardsGroup;
- (id)cardMedicalIDGroup;
- (id)cardPrimaryPropertyActionsGroup;
- (id)cardTopGroup;
- (id)contact;
- (id)contactDelegate;
- (void)contactGroupPickerDidCancel:(id)arg1;
- (void)contactGroupPickerDidFinish:(id)arg1 withGroup:(id)arg2;
- (id)contactHeaderView;
- (id)contactView:(id)arg1 cellForItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (void)contactView:(id)arg1 didSelectItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (double)contactView:(id)arg1 heightForItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (long long)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2;
- (id)contactView;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (id)contentScrollView;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)createNewContact:(id)arg1;
- (id)createNewContactAction;
- (void)dealloc;
- (id)defaultValueForPropertyCell:(id)arg1;
- (id)deleteContactAction;
- (double)desiredHeightForWidth:(double)arg1;
- (id)displayContactView;
- (id)displayGroups;
- (id)displayHeaderView;
- (id)displayedProperties;
- (void)editCancel:(id)arg1;
- (id)editingContactView;
- (id)editingGroups;
- (id)editingHeaderView;
- (struct { id x1; id x2; id x3; id x4; })editingTransition;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)faceTimeAction;
- (id)faceTimeAudioAction;
- (id)faceTimeIDSRequest;
- (id)groupsAfterGroup;
- (void)headerHeightDidChange;
- (void)headerPhotoDidUpdate;
- (id)healthStore;
- (double)heightForHeaderInTableView:(id)arg1;
- (bool)hideCardActions;
- (id)iMessageIDSRequest;
- (long long)indexOfGroup:(id)arg1;
- (id)indexPathOfDisplayedPropertyItem:(id)arg1;
- (id)initWithContact:(id)arg1;
- (bool)isMailVIP;
- (bool)isPresentingModalViewController;
- (id)linkedCardsAction;
- (id)linkedContactsEdits;
- (void)loadView;
- (void)localeDidChange:(id)arg1;
- (id)medicalIDAction;
- (id)message;
- (id)mutableContacts;
- (id)nameEditingGroups;
- (id)navigationItemController;
- (bool)needsReload;
- (long long)numberOfGroupsInContactView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)personHeaderView;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)prepareCell:(id)arg1;
- (id)presentingDelegate;
- (id)primaryProperty;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;
- (void)propertyCellDidChangeLayout:(id)arg1;
- (id)propertyGroups;
- (void)reloadCardGroup:(id)arg1;
- (void)reloadDataIfNeeded;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3;
- (void)removeEditingItem:(id)arg1 atIndexPath:(id)arg2;
- (void)removeLinkedContact:(id)arg1;
- (void)saveChanges;
- (void)saveLinkedContactChanges;
- (void)saveModelChangesToContact;
- (id)sendMessageAction;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)setAddFavoriteAction:(id)arg1;
- (void)setAddLinkedCardAction:(id)arg1;
- (void)setAddNewFieldAction:(id)arg1;
- (void)setAddToExistingContactAction:(id)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setAllowsAddToFavorites:(bool)arg1;
- (void)setAllowsAddingToAddressBook:(bool)arg1;
- (void)setAllowsCardActions:(bool)arg1;
- (void)setAllowsConferencing:(bool)arg1;
- (void)setAllowsContactBlocking:(bool)arg1;
- (void)setAllowsDeletion:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsOnlyFaceTimeActions:(bool)arg1;
- (void)setAllowsOnlyPhoneActions:(bool)arg1;
- (void)setAllowsPropertyActions:(bool)arg1;
- (void)setAllowsSendMessage:(bool)arg1;
- (void)setAllowsSharing:(bool)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAlwaysEditing:(bool)arg1;
- (void)setBlockAction:(id)arg1;
- (void)setCachedLabelWidths:(id)arg1;
- (void)setCardActionsGroup:(id)arg1;
- (void)setCardBlockContactGroup:(id)arg1;
- (void)setCardBottomGroup:(id)arg1;
- (void)setCardEditingActionsGroup:(id)arg1;
- (void)setCardEditingDeleteContactGroup:(id)arg1;
- (void)setCardFaceTimeGroup:(id)arg1;
- (void)setCardLinkedCardsGroup:(id)arg1;
- (void)setCardMedicalIDGroup:(id)arg1;
- (void)setCardPrimaryPropertyActionsGroup:(id)arg1;
- (void)setCardTopGroup:(id)arg1;
- (void)setContactDelegate:(id)arg1;
- (void)setCreateNewContactAction:(id)arg1;
- (void)setDeleteContactAction:(id)arg1;
- (void)setDisplayContactView:(id)arg1;
- (void)setDisplayGroups:(id)arg1;
- (void)setDisplayHeaderView:(id)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEditingContactView:(id)arg1;
- (void)setEditingGroups:(id)arg1;
- (void)setEditingHeaderView:(id)arg1;
- (void)setFaceTimeAction:(id)arg1;
- (void)setFaceTimeAudioAction:(id)arg1;
- (void)setFaceTimeIDSRequest:(id)arg1;
- (void)setGroupsAfterGroup:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setHideCardActions:(bool)arg1;
- (void)setIMessageIDSRequest:(id)arg1;
- (void)setIsMailVIP:(bool)arg1;
- (void)setLinkedCardsAction:(id)arg1;
- (void)setLinkedContactsEdits:(id)arg1;
- (void)setMedicalIDAction:(id)arg1;
- (void)setMergeContact:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMutableContacts:(id)arg1;
- (void)setNameEditingGroups:(id)arg1;
- (void)setNeedsReload;
- (void)setNeedsReloadLazy;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)setPrimaryProperty:(id)arg1;
- (void)setPropertyGroups:(id)arg1;
- (void)setSendMessageAction:(id)arg1;
- (void)setShareContactAction:(id)arg1;
- (void)setShouldShowLinkedContacts:(bool)arg1;
- (void)setSiriContextProvider:(id)arg1;
- (void)setUserActivityUserInfo:(id)arg1;
- (void)setupActions;
- (id)shareContactAction;
- (bool)shouldAllowSelectingContact:(id)arg1;
- (bool)shouldShowLinkedContacts;
- (id)siriContextProvider;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView;
- (void)toggleEditing:(id)arg1;
- (struct { id x1; id x2; id x3; id x4; })transitionToEditing:(bool)arg1;
- (void)updateContactsViewWithBlock:(id)arg1 completion:(id)arg2;
- (void)updateDoneButton;
- (void)updateEditNavigationItemsAnimated:(bool)arg1;
- (void)updateUserActivityState:(id)arg1;
- (void)updateWithNewContact:(id)arg1;
- (id)userActivityUserInfo;
- (id)viewForHeaderInTableView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
