#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0xBC4 - 0xBA0)
// WidgetBlueprintGeneratedClass LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C
class ULobbyPlayerAddPlayer_C : public UFortLobbyAddPlayer
{
public:
	class UWidgetAnimation*                      OnHovered;                                         // 0xBA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_76;                                // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayInputAction;                                // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_ControlLegend;                                  // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        PlayerID;                                          // 0xBC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULobbyPlayerAddPlayer_C* GetDefaultObj();

};

}


