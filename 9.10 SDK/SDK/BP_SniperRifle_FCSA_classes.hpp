#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F8 - 0x268)
// AnimBlueprintGeneratedClass BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C
class UBP_SniperRifle_FCSA_C : public UAnimInstance
{
public:
	uint8                                        Pad_60C2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_146699F448DB1AAB26EC9F814C49D1D1; // 0x278(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_F7DD3CBC4CA03D5C78826D9E409ECCA2; // 0x298(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_7C8D051E4A0B249DA61DCAA86177450B; // 0x2E0(0x18)(None)

	static class UClass* StaticClass();
	static class UBP_SniperRifle_FCSA_C* GetDefaultObj();

	void ExecuteUbergraph_BP_SniperRifle_FCSA(int32 EntryPoint);
};

}


