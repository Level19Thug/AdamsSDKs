#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x290 - 0x280)
// WidgetBlueprintGeneratedClass ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C
class UItemAlterationsListDetailWidget_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAlterationsWidget_C*                  AlterationsWidget;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemAlterationsListDetailWidget_C* GetDefaultObj();

	void SetState(enum class EFortAlterationWidgetState State);
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
	void ExecuteUbergraph_ItemAlterationsListDetailWidget(int32 EntryPoint);
};

}


