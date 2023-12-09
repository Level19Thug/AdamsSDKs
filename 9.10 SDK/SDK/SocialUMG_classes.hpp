#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB58 - 0xB48)
// Class SocialUMG.SocialChatChannelTab
class USocialChatChannelTab : public UCommonButton
{
public:
	class USocialChatChannel*                    ChatChannel;                                       // 0xB48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      CommonText_ChannelName;                            // 0xB50(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatChannelTab* GetDefaultObj();

};

// 0x58 (0x288 - 0x230)
// Class SocialUMG.SocialChatContainer
class USocialChatContainer : public UUserWidget
{
public:
	class USocialChatManager*                    ChatManager;                                       // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class USocialChatChannel*>            JoinedChannels;                                    // 0x238(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class USocialChatChannel*                    ActiveChannel;                                     // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroup*                    TabButtonGroup;                                    // 0x250(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1955[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialChatMessageList*                ChatList_Messages;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialChatEditableText*               ChatEditableText_MessageEntry;                     // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         Button_SendMessage;                                // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_JoinedChannels;                           // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_Channels;                                // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatContainer* GetDefaultObj();

	void SendCurrentMessage();
	void OnChatOpenChanged(bool bShouldBeOpen);
	void HandleRightTabPressed();
	void HandleLeftTabPressed();
	void FocusEditableText();
	void DynamicHandleMessageTextCommitted(class FText& MessageText, enum class ETextCommit CommitMethod);
};

// 0x4E0 (0x5E8 - 0x108)
// Class SocialUMG.SocialChatEditableText
class USocialChatEditableText : public UWidget
{
public:
	uint8                                        Pad_1956[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEditableTextStyle                    EditableTextStyle;                                 // 0x128(0x218)(Edit, NativeAccessSpecifierPrivate)
	struct FTextBlockStyle                       AutoCompleteStyle;                                 // 0x340(0x268)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1957[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatEditableText* GetDefaultObj();

};

// 0x168 (0x398 - 0x230)
// Class SocialUMG.SocialChatMessageEntry
class USocialChatMessageEntry : public UUserWidget
{
public:
	uint8                                        Pad_1959[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSocialChatMessageEntryStyle          DefaultStyle;                                      // 0x248(0x120)(Edit, Protected, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_Message;                                      // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_SenderName;                                   // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_ChannelName;                                  // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_Timestamp;                                    // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HorizontalBox_Header;                              // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UButton*                               Button_MessageButton;                              // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatMessageEntry* GetDefaultObj();

	void OnMessageSet();
	bool CanInteract();
};

// 0xF0 (0x2F8 - 0x208)
// Class SocialUMG.SocialChatMessageList
class USocialChatMessageList : public UListViewBase
{
public:
	uint8                                        Pad_195A[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsFocusable;                                      // 0x2C8(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_195B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialChatChannel*                    ActiveChannel;                                     // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_195C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatMessageList* GetDefaultObj();

};

// 0x20 (0xB68 - 0xB48)
// Class SocialUMG.SocialGroupListEntry
class USocialGroupListEntry : public UCommonButton
{
public:
	uint8                                        Pad_195D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialGroupChannel*                   SocialGroup;                                       // 0xB50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_GroupName;                                    // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           MenuAnchor_Actions;                                // 0xB60(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialGroupListEntry* GetDefaultObj();

	class UWidget* HandleGetMenuContent();
};

// 0x20 (0x3D0 - 0x3B0)
// Class SocialUMG.SocialGroupTreeView
class USocialGroupTreeView : public UTreeView
{
public:
	TSubclassOf<class USocialGroupListEntry>     GroupEntryWidgetClass;                             // 0x3B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialUserListEntry>      UserEntryWidgetClass;                              // 0x3B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialInteractionMenu>    ActionMenuClass;                                   // 0x3C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialInteractionMenu*                ActionMenu;                                        // 0x3C8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialGroupTreeView* GetDefaultObj();

};

// 0x60 (0xBA8 - 0xB48)
// Class SocialUMG.SocialInteractionButton
class USocialInteractionButton : public UCommonButton
{
public:
	struct FLinearColor                          DefaultIndicatorColor;                             // 0xB48(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          AlertingIndicatorColor;                            // 0xB58(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1961[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_InteractionName;                              // 0xB98(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBorder*                               Border_InteractionIndicator;                       // 0xBA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialInteractionButton* GetDefaultObj();

	void OnInteractionSet();
	bool IsPlatformOnlyFriend();
	class FName GetInteractionName();
};

// 0x80 (0x2B0 - 0x230)
// Class SocialUMG.SocialInteractionMenu
class USocialInteractionMenu : public UUserWidget
{
public:
	class UObject*                               SocialContext;                                     // 0x230(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1964[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicEntryBox*                      EntryBox_PositiveInteractions;                     // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_NegativeInteractions;                     // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpacer*                               Spacer_InteractionSeparator;                       // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                 Switcher_Confirmation;                             // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_ConfirmationLabel;                            // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Confirm;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Decline;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialInteractionMenu* GetDefaultObj();

	void OnToggleConfirmation(bool bIsVisible);
	void OnSocialContextSet();
	class UWidget* GetFirstEntryToCenter();
};

// 0x68 (0x150 - 0xE8)
// Class SocialUMG.DesignerPreviewChatChannel
class UDesignerPreviewChatChannel : public USocialChatChannel
{
public:
	uint8                                        Pad_1966[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDesignerPreviewChatChannel* GetDefaultObj();

};

// 0x20 (0xB68 - 0xB48)
// Class SocialUMG.SocialListEntry
class USocialListEntry : public UCommonButton
{
public:
	uint8                                        Pad_1967[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonRichTextBlock*                  Text_DisplayName;                                  // 0xB50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  Text_RichPresence;                                 // 0xB58(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           MenuAnchor_Actions;                                // 0xB60(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialListEntry* GetDefaultObj();

	class UWidget* HandleGetMenuContent();
};

// 0x8 (0xB70 - 0xB68)
// Class SocialUMG.SocialUserListEntry
class USocialUserListEntry : public USocialListEntry
{
public:
	class USocialUser*                           SocialUser;                                        // 0xB68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialUserListEntry* GetDefaultObj();

	void OnUserPresenceChanged(enum class EOnlineStatus OnlineStatus);
};

// 0x8 (0xB70 - 0xB68)
// Class SocialUMG.SocialInviteListEntry
class USocialInviteListEntry : public USocialListEntry
{
public:
	class USocialFriendInvite*                   SocialInvite;                                      // 0xB68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialInviteListEntry* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class SocialUMG.SocialActionItem
class USocialActionItem : public UObject
{
public:
	class USocialUser*                           CurrentUser;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialActionItem* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class SocialUMG.SocialFriendInvite
class USocialFriendInvite : public USocialActionItem
{
public:

	static class UClass* StaticClass();
	static class USocialFriendInvite* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class SocialUMG.SocialPartyInvite
class USocialPartyInvite : public USocialActionItem
{
public:

	static class UClass* StaticClass();
	static class USocialPartyInvite* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class SocialUMG.SocialUserListHeader
class USocialUserListHeader : public UObject
{
public:
	uint8                                        Pad_196A[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialUserListHeader* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class SocialUMG.SocialFriendInviteListHeader
class USocialFriendInviteListHeader : public USocialUserListHeader
{
public:
	TArray<class USocialFriendInvite*>           FriendInvites;                                     // 0x68(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialFriendInviteListHeader* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class SocialUMG.SocialPartyInviteListHeader
class USocialPartyInviteListHeader : public USocialUserListHeader
{
public:
	TArray<class USocialPartyInvite*>            PartyInvites;                                      // 0x68(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialPartyInviteListHeader* GetDefaultObj();

};

// 0x20 (0xB68 - 0xB48)
// Class SocialUMG.SocialUserListHeaderEntry
class USocialUserListHeaderEntry : public UCommonButton
{
public:
	uint8                                        Pad_196C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialUserListHeader*                 ListHeader;                                        // 0xB50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_ListName;                                     // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_NumEntries;                                   // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialUserListHeaderEntry* GetDefaultObj();

};

// 0x30 (0x3E0 - 0x3B0)
// Class SocialUMG.SocialUserTreeView
class USocialUserTreeView : public UTreeView
{
public:
	TSubclassOf<class USocialUserListEntry>      UserEntryWidgetClass;                              // 0x3B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialInviteListEntry>    InviteEntryWidgetClass;                            // 0x3B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialInteractionMenu>    ActionMenuClass;                                   // 0x3C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialInteractionMenu*                ActionMenu;                                        // 0x3C8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_196D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialUserTreeView* GetDefaultObj();

};

}


