#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA38 - 0xA30)
// BlueprintGeneratedClass GA_BlockADS.GA_BlockADS_C
class UGA_BlockADS_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_BlockADS_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_BlockADS(int32 EntryPoint);
};

}


