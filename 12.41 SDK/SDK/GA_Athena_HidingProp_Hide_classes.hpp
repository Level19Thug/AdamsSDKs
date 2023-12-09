#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0xBA8 - 0xA30)
// BlueprintGeneratedClass GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C
class UGA_Athena_HidingProp_Hide_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_HidingProp_C*                       HidingProp;                                        // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Enter_Anim_Montage;                                // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RustleCue;                                         // 0xA50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Wobble;                                         // 0xA58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Exit_Anim_Montage;                                 // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        ExitBlockShootDelay;                               // 0xA68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                              ControlRotation;                                   // 0xA88(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraModifier*                       CameraModifier;                                    // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_Quest;                                          // 0xAA0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_PlayerOwned;                                    // 0xAC0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        RustleMinDelay;                                    // 0xAE0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        RustleMaxDelay;                                    // 0xB00(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        RustlePerWobble;                                   // 0xB20(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerController*                 PlayerController;                                  // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            NewEventDispatcher_0;                              // 0xB48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FGameplayTag>                  BlockExitTags;                                     // 0xB58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                 HidingInPropTag;                                   // 0xB68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 GettingInPropTag;                                  // 0xB88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_HidingProp_Hide_C* GetDefaultObj();

	void Completed_75B60D4B43DAA553E4C21EA3D2E3AD03(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19();
	void OnTimedOut_859E251740F1C46B914344A9FC343B19();
	void OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32();
	void OnTimedOut_8010F4C64221E8F497C6559558420C32();
	void Added_F049BFC743FE176042ECD98641AFE2B9();
	void Added_35C56E354FE08855A837E0BDFB150F20();
	void Added_CD24BC554E955808A88A5B809807A94E();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void RustleLoop();
	void End();
	void ExecuteUbergraph_GA_Athena_HidingProp_Hide(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class AB_HidingProp_C* K2Node_DynamicCast_AsB_Hiding_Prop, bool K2Node_DynamicCast_bSuccess, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, bool K2Node_Event_bWasCancelled, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, float CallFunc_GetPlayLength_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsServer_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_4, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, bool CallFunc_RemoveCameraModifier_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput_1, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_RemoveCameraModifier_ReturnValue_1, const struct FRotator& CallFunc_RandomRotator_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_3, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_2, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class UAbilityTask_ApplyRootMotionMoveToForce* CallFunc_ApplyRootMotionMoveToForce_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, class UHidingProp_CameraModifier_C* K2Node_DynamicCast_AsHiding_Prop_Camera_Modifier, bool K2Node_DynamicCast_bSuccess_4, const struct FVector& CallFunc_GetForwardVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, class UFortHeldObjectComponent* CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue, bool CallFunc_IsPassengerInVehicle_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_4, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool Temp_bool_IsClosed_Variable, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2, bool Temp_bool_Variable, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FVector& K2Node_Select_Default, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_6, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UAbilityTask_ApplyRootMotionMoveToForce* CallFunc_ApplyRootMotionMoveToForce_ReturnValue_1, class UHidingProp_CameraModifier_C* K2Node_DynamicCast_AsHiding_Prop_Camera_Modifier_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_6, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_IsServer_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_IsServer_ReturnValue_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_2, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_SelectVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4);
	void NewEventDispatcher_0__DelegateSignature();
};

}


