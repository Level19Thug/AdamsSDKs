#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x33C (0xE0C - 0xAD0)
// BlueprintGeneratedClass B_Athena_Wumba.B_Athena_Wumba_C
class AB_Athena_Wumba_C : public ABuildingItemWeaponUpgradeActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  CylinderDistance;                                  // 0xAD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SphereDetail;                                      // 0xAE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      UI_InteractionPoint_Sidegrade;                     // 0xAE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      UI_InteractionPoint_Upgrade;                       // 0xAF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWumba_ItemCostComponent_Horizontal_C* Wumba_ItemCostComponent_Horizontal;                // 0xAF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         TableCollision;                                    // 0xB00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         PostCollision;                                     // 0xB08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         TopCollision;                                      // 0xB10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BaseCollision;                                     // 0xB18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_UpgradeFX;                                       // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_TableLightIdle;                                  // 0xB28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Destroyed;                                       // 0xB30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Flashing_Light_Sound_Loop;                         // 0xB38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  S_LootTiered_Athena_FloorLoot_01;                  // 0xB40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Wumba;                                          // 0xB48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWumba_ItemCostComponent_C*            Wumba_ItemCostComponent;                           // 0xB50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackComponent*               ForceFeedbackFail;                                 // 0xB58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackComponent*               ForceFeedbackSuccess;                              // 0xB60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       VendingMachine_Ambient;                            // 0xB68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0xB70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_Light_F9C064A347D6CF3499CF96B51F1F7AF8; // 0xB78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_F9C064A347D6CF3499CF96B51F1F7AF8; // 0xB7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5450[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0xB80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MonitorMat;                                        // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MetalMat;                                          // 0xB90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentCaptureCount;                               // 0xB98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5452[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Vend_String;                                       // 0xBA0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            SearchSound;                                       // 0xBB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            VendFailedSound;                                   // 0xBC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CycleSound;                                        // 0xBC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CostAmount;                                        // 0xBD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5454[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              MaterialType;                                      // 0xBD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Vend_Succeeded_Sound;                              // 0xBE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VendSuccess;                                       // 0xBE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasHit;                                            // 0xBE9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5455[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CycleSoundVolume;                                  // 0xBEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                  TossOnGroundSetting;                               // 0xBF0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  Wood_String;                                       // 0xC00(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Stone_String;                                      // 0xC18(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Metal_String;                                      // 0xC30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EFortRarity                       OverrideVendingMachineRarity;                      // 0xC48(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5458[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Activate_Rare_Sound;                               // 0xC50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Free_String;                                       // 0xC58(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            DestroyedSound;                                    // 0xC70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MaxItemsToSpawn;                                   // 0xC78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ItemsAreFree;                                      // 0xC98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ItemsAreFreeCached;                                // 0xCB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_545A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpawnedItemCount;                                  // 0xCBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxItemsToSpawnCached;                             // 0xCC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_545B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Activate_Uncommon_Sound;                           // 0xCC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Activate_Epic_Sound;                               // 0xCD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Activate_Legendary_Sound;                          // 0xCD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Ambient_Sound;                                     // 0xCE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 FailedReason;                                      // 0xCE8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 UpgradeQuestTag;                                   // 0xD08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          DefaultLightEmissiveColor;                         // 0xD28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UpgradeAnim;                                       // 0xD38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_545C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Light_Flashing;                                    // 0xD40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Impact_Wobble;                                     // 0xD48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Search_Audio_Component;                            // 0xD50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  SideGradeString;                                   // 0xD58(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        HorizontalEnabled;                                 // 0xD70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        UIShowDistance;                                    // 0xD90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UIDetailDistance;                                  // 0xD94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UICheckTimer;                                      // 0xD98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        AllowDamage;                                       // 0xDA0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            Activate_Sidegrade_Sound;                          // 0xDC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 SidegradeQuestTag;                                 // 0xDC8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        InteractionTimeSide;                               // 0xDE8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        LightSize;                                         // 0xE08(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Athena_Wumba_C* GetDefaultObj();

	void UpdateAnimInstanceVisuals(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UWumba_Gadget_AnimBP_C* K2Node_DynamicCast_AsWumba_Gadget_Anim_BP, bool K2Node_DynamicCast_bSuccess);
	void SetUiVisibility(class UWidgetComponent* UITarget, bool ShowDetail, bool ShowDistance, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UHUD_InteractionPoint_C* K2Node_DynamicCast_AsHUD_Interaction_Point, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void LocalOnFailedInteract(class AFortPlayerPawn* InteractingPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	bool BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, float* OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class EFortRarity Temp_byte_Variable, float Temp_float_Variable, enum class EFortRarity CallFunc_GetWeaponDataRarity_ReturnValue, float Temp_float_Variable_1, float Temp_float_Variable_2, enum class EInteractionBeingAttempted Temp_byte_Variable_1, float Temp_float_Variable_3, enum class EFortRarity Temp_byte_Variable_2, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, float K2Node_Select_Default, float CallFunc_GetValueAtLevel_ReturnValue_6, float CallFunc_GetValueAtLevel_ReturnValue_7, float CallFunc_GetValueAtLevel_ReturnValue_8, float CallFunc_GetValueAtLevel_ReturnValue_9, float K2Node_Select_Default_1, float K2Node_Select_Default_2);
	void SetLightColor(const struct FLinearColor& NewColor);
	class FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, bool K2Node_SwitchEnum_CmpSuccess);
	bool GetOverrideRarity(enum class EFortRarity* Rarity, bool bHasOverride, enum class EFortRarity NewRarity, enum class EFortRarity CallFunc_GetOverrideRarity_Rarity, bool CallFunc_GetOverrideRarity_ReturnValue);
	void SetRarityColors(const struct FLinearColor& Color);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class EInteractionBeingAttempted Temp_byte_Variable, class FText Temp_text_Variable, class FText K2Node_Select_Default);
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void OnReady_524B43EB45254EC3646C7D81A1AA3359(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void PlayVendFailFX();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void PlayUpgradeSuccess(const struct FVector& Color, uint8 Index, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	void BlueprintOnBeginInteract();
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	void WobbleMachine();
	void ReceiveBeginPlay();
	void BlueprintOnInteractInterrupted();
	void ReceiveDestroyed();
	void CheckShouldDisplayUI(bool ShowDetail, bool ShowDistance);
	void InitializeUI();
	void BndEvt__SphereDetail_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__SphereDetail_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CylinderDistance_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__CylinderDistance_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_B_Athena_Wumba(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class AFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EInteractionBeingAttempted Temp_byte_Variable, class USoundBase* Temp_object_Variable_2, enum class EFortRarity Temp_byte_Variable_1, const struct FGameplayTagContainer& Temp_struct_Variable_1, const struct FGameplayTagContainer& Temp_struct_Variable_2, const struct FGameplayTagContainer& Temp_struct_Variable_3, const struct FGameplayTagContainer& Temp_struct_Variable_4, const struct FGameplayTagContainer& Temp_struct_Variable_5, const struct FGameplayTagContainer& Temp_struct_Variable_6, const struct FGameplayTagContainer& Temp_struct_Variable_7, const struct FGameplayTagContainer& Temp_struct_Variable_8, enum class EInteractionBeingAttempted Temp_byte_Variable_2, const struct FGameplayTagContainer& Temp_struct_Variable_9, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float K2Node_Event_Damage_1, const struct FGameplayTagContainer& K2Node_Event_DamageTags_1, const struct FVector& K2Node_Event_Momentum_1, const struct FHitResult& K2Node_Event_HitInfo_1, class AFortPawn* K2Node_Event_InstigatedBy_1, class AActor* K2Node_Event_DamageCauser_1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_1, float CallFunc_Conv_ByteToFloat_ReturnValue, const struct FVector& K2Node_CustomEvent_Color, uint8 K2Node_CustomEvent_Index, enum class EInteractionBeingAttempted K2Node_CustomEvent_InteractionBeingAttempted, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, const struct FVector& Temp_struct_Variable_10, const struct FVector& Temp_struct_Variable_11, const struct FVector& Temp_struct_Variable_12, const struct FVector& Temp_struct_Variable_13, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AFortWeaponPickaxeAthena* K2Node_DynamicCast_AsFort_Weapon_Pickaxe_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_Event_InteractingPawn, enum class EInteractionBeingAttempted K2Node_Event_InteractionBeingAttempted, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_7, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, const struct FVector& Temp_struct_Variable_14, bool K2Node_CustomEvent_ShowDetail, bool K2Node_CustomEvent_ShowDistance, float CallFunc_GetValueAtLevel_ReturnValue, const struct FVector& Temp_struct_Variable_15, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& Temp_struct_Variable_16, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UHUD_InteractionPoint_C* K2Node_DynamicCast_AsHUD_Interaction_Point, bool K2Node_DynamicCast_bSuccess_2, class UHUD_InteractionPoint_C* K2Node_DynamicCast_AsHUD_Interaction_Point_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, class USoundBase* K2Node_Select_Default, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, class AActor* K2Node_ComponentBoundEvent_OtherActor_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, enum class EFortRarity Temp_byte_Variable_3, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const struct FVector& Temp_struct_Variable_17, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, const struct FVector& K2Node_Select_Default_1, const struct FGameplayTagContainer& K2Node_Select_Default_2, const struct FGameplayTagContainer& K2Node_Select_Default_3, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted);
};

}


