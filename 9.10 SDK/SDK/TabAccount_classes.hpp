#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0x458 - 0x290)
// WidgetBlueprintGeneratedClass TabAccount.TabAccount_C
class UTabAccount_C : public UFortAccountOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          AccountInfoHeader;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AccountLinkText;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_AccountLinking;                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_CustomerService;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_Logout;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_RefundRequest;                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonHierarchicalScrollBox*          CommonHierarchicalScrollBox_0;                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_2;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_5;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_6;                                 // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_7;                                 // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_8;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_9;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ConfigurationSwitcher;                             // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ContentHeader;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CopyCustomerIDButton;                              // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CopyEpicAccountIDButton;                           // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        DefaultConfigurationBox;                           // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          DesktopConsoleOptions;                             // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EpicId;                                            // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EpicIdLabel;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortTwitchLogin_C*                    FortTwitchLogin;                                   // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_6;                                   // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_7;                                   // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    LeaderboardPrivacy;                                // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LifetimeRefundDesc;                                // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LifetimeRefundText;                                // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MobileOptions;                                     // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PrivacySettings;                                   // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RailId;                                            // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RailIdLabel;                                       // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    ReceiveGiftToggle;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RefundRequest;                                     // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    SamsungStoreToggle;                                // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_RefundRequest;                             // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SocialHeader;                                      // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialSettings_C*                     SocialSettings;                                    // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_RefundRequest;                              // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StaticURLText;                                     // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TencentRailInfoHBox;                               // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_RemainingRefunds;                             // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TooltipTextBox;                                    // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          UninstallSTW;                                      // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     UninstallStWButton;                                // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      UninstallSTWDesc;                                  // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     URLButton;                                         // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox_TwitchSettings;                               // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          WebsiteConfigurationBox;                           // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        StWUninstallProgres;                               // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ScrollBarSizeDefault;                              // 0x424(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ScrollBarSizeMobile;                               // 0x42C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaultFontSize;                                   // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MobileFontSize;                                    // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MobileTitleSize;                                   // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonMinWidthMobile;                              // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonMinHeightMobile;                             // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftPaddingSelectorMobile;                         // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             RotatorContentBtnSize;                             // 0x44C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RefaundSpacerSizeMobile;                           // 0x454(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTabAccount_C* GetDefaultObj();

	void UpdateSize(const struct FMargin& TempPadding, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, TArray<class URotatorSelector_C*>& K2Node_MakeArray_Array, class URotatorSelector_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable_3, TArray<class UWidget*>& K2Node_MakeArray_Array_1, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue, TArray<class UTextBlock*>& K2Node_MakeArray_Array_2, class UTextBlock* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, class USizeBox* K2Node_DynamicCast_AsSize_Box, bool K2Node_DynamicCast_bSuccess_2, TArray<class UCommonTextBlock*>& K2Node_MakeArray_Array_3, int32 CallFunc_Array_Length_ReturnValue_3, class UCommonTextBlock* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3);
	void SetScrollBar(const struct FVector2D& DefaultSize, const struct FVector2D& MobileSize, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, const struct FVector2D& K2Node_Select_Default);
	void SetFontSize(class UCommonTextBlock* Text, int32 DefaultFontSize, int32 MobileFontSize, const struct FSlateFontInfo& TempFont, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, int32 K2Node_Select_Default);
	void CenterAppropriateWidget(bool CallFunc_IsMobileGame_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_ShouldShowLeaderboardPrivacySettings_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_IsDesktopPlatform_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void PrivacySettingsFromSelection(int32 A, struct FMcpPrivacySettings* McpPrivacySettings, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMcpPrivacySettings& K2Node_MakeStruct_McpPrivacySettings);
	int32 PrivacySettingsToSelection(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 K2Node_Select_Default);
	void OnStWContentUninstalled(float StWUninstallProgress);
	class FText GetTencentId(class UFortMcpContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetTencentIdString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void InitializeWebsiteConfiguration(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue, const class FString& CallFunc_GetAccountLinkingUIURL_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortAccountLinkingUIConfig CallFunc_GetAccountLinkingUIConfig_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1);
	struct FFortAnalyticsEventAttribute Build_Player_Id_Analytic_Attribute(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, const class FString& CallFunc_GetDebugStringForUniqueId_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue);
	struct FFortAnalyticsEventAttribute Build_Player_Name_Analytic_Attribute(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortRegisteredPlayerInfo* CallFunc_GetPlayerInfoFromUniqueID_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue);
	void Initialize_Data(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool Temp_bool_Variable_2, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_4, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, bool Temp_bool_Variable_4, bool CallFunc_IsDesktopPlatform_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, bool Temp_bool_Variable_6, enum class ESubGame CallFunc_GetSubGame_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_12, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_ShouldDisableReceiveGiftOption_ReturnValue, bool CallFunc_GetDisablePurchaseHistoryScreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_ShouldShowSamsungStore_ReturnValue, TArray<class FText>& CallFunc_LoadSamsungOptions_OutOptions, int32 CallFunc_LoadSamsungOptions_CurrentOptionIdx, enum class ESlateVisibility Temp_byte_Variable_13, bool CallFunc_CanLocalPlayerReceiveGifts_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, int32 CallFunc_Conv_BoolToInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_ShouldShowLeaderboardPrivacySettings_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_7, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_MakeLiteralText_ReturnValue_1, TArray<class FText>& K2Node_MakeArray_Array_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, bool CallFunc_IsConsolePlatform_ReturnValue, enum class EChunkInstallState CallFunc_GetOnDemandChunksInstallState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_4, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAthena_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsXboxPlatform_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_14, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, bool CallFunc_BooleanOR_ReturnValue_4, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility K2Node_Select_Default_4, bool Temp_bool_Variable_8, enum class ESlateVisibility K2Node_Select_Default_5, bool CallFunc_IsMobileGame_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, class FText CallFunc_GetTencentId_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_6, bool CallFunc_IsTencentBuild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_7, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, const class FString& CallFunc_GetDebugStringForUniqueId_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, bool Temp_bool_Variable_9, enum class ESlateVisibility K2Node_Select_Default_8, enum class EFortAccountLinkingUIConfig CallFunc_GetAccountLinkingUIConfig_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UWidget* K2Node_Select_Default_9);
	void Update_Data();
	void DialogResult_38AE683A4765B23E84C880991D01C356(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__ReceiveGiftToggle_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__SamsungStoreToggle_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void OnReadPrivacySettings(bool bSuccess, struct FMcpPrivacySettings& Settings);
	void BndEvt__LeaderboardPrivacy_K2Node_ComponentBoundEvent_8_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__Button_RefundRequest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetRefundRequestText(int32 RefundsRemaining);
	void BndEvt__UninstallStWButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Logout_K2Node_ComponentBoundEvent_164_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_CustomerService_K2Node_ComponentBoundEvent_108_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CopyEpicAccountIDButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CopyCustomerIDButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature(class FText NewTooltipText);
	void Construct();
	void CenterOnTab();
	void UpdateOptionsTab();
	void ExecuteUbergraph_TabAccount(int32 EntryPoint, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, int32 CallFunc_PrivacySettingsToSelection_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index_2, bool CallFunc_Conv_IntToBool_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index_1, bool K2Node_CustomEvent_bSuccess, const struct FMcpPrivacySettings& K2Node_CustomEvent_Settings, int32 K2Node_ComponentBoundEvent_Selected_Index, const struct FMcpPrivacySettings& CallFunc_PrivacySettingsFromSelection_McpPrivacySettings, bool CallFunc_IsMobileGame_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_7, class UPurchaseHistoryScreen_C* CallFunc_Create_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, int32 K2Node_Event_RefundsRemaining, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_UninstallAllOnDemandChunks_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_6, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, const class FString& CallFunc_GetAccountLinkingUIURL_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_ShowWebURL_ReturnValue, int32 CallFunc_Len_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText K2Node_ComponentBoundEvent_NewTooltipText, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
};

}


