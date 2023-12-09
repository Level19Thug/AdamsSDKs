#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x279 - 0x238)
// WidgetBlueprintGeneratedClass ToastDisplayArea.ToastDisplayArea_C
class UToastDisplayArea_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPowerToastWidget_C*                   PowerToastWidget;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UToastWidget_MinorError_C*             ToastWidget_MinorError;                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UToastWidget_New_C*                    ToastWidget_New;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVoiceChannelChangePopup_C*            VoiceChannelChangePopup;                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUINotificationQueue*              ToastQueue;                                        // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINotification*                   CurrentToast;                                      // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCurrentlyDisplayingToast;                         // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UToastDisplayArea_C* GetDefaultObj();

	void AttemptDisplayNextToast(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortUINotification* CallFunc_GetNextNotification_ReturnValue);
	void RegisterToastHandler(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFortUINotificationQueue* CallFunc_GetUINotificationQueue_ReturnValue);
	void Construct();
	void HandleNewToastAvailable();
	void Destruct();
	void BndEvt__ToastWidget_New_K2Node_ComponentBoundEvent_9_OnFinishedToast__DelegateSignature();
	void BndEvt__ToastWidget_MinorError_K2Node_ComponentBoundEvent_3_OnFinishedToast__DelegateSignature();
	void BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_0_OnToastFinished__DelegateSignature();
	void BndEvt__VoiceChannelChangePopup_K2Node_ComponentBoundEvent_1_OnToastDisplayFinished__DelegateSignature();
	void ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint);
};

}


