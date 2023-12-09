#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xBE0 - 0xB10)
// BlueprintGeneratedClass Parent_BuildingPropActor.Parent_BuildingPropActor_C
class AParent_BuildingPropActor_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB10(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DebugWind;                                         // 0xB18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_544E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            IntenseWindMaterialsForPreview;                    // 0xB20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            OriginalMaterials;                                 // 0xB30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                  Wind_Intensity_Debug_Mesh;                         // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Debug_TempMaterial;                                // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Debug_Wind_Intensity;                              // 0xB50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugWindYaw;                                      // 0xB54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDayPhaseFloats                       Light_Intensity_Over_Time_of_Day_;                 // 0xB58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDayPhaseFloats                       Emissive_Intensity_Over_Time_of_Day;               // 0xB68(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CodeControlled_NumberOfMaterials;                  // 0xB78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5452[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  CodeControlled_EmissiveColor;                      // 0xB80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                CodeControlled_LightConeOpacity;                   // 0xB90(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         Animate_Emissive_and_Lights_Over_Time;             // 0xBA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5453[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Day_Phase_Transition_Length;                       // 0xBA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Disable_TOD_Lights_and_Material_Emissive_Values;   // 0xBA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active; // 0xBA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5454[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           AlternateShadowStaticMesh;                         // 0xBB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_An_Alternate_Shadow_Mesh_When_The_Light_is_Off_; // 0xBB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5455[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Volumetric_Light_Scattering_Intensity;             // 0xBBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cast_Volumetric_Shadows;                           // 0xBC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Animate_Lights_With_A_Curve_Minus_Disables_time_of_day_light_controls; // 0xBC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5456[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           LightAnimationCurve;                               // 0xBC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CodeControlled_Animation_Curve_Animation_Length;   // 0xBD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Animate_Mesh_MID_Emissive_Value_with_a_Curve_Minus_Disables_time_of_day_light_controls; // 0xBD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5457[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Random_Time_Scale_Percent;                         // 0xBD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CodeControlled_CurrentTimeLength;                  // 0xBDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AParent_BuildingPropActor_C* GetDefaultObj();

	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables* OutVariables, const struct FTimeOfDayBlueprintDefaultVariables& K2Node_MakeStruct_TimeOfDayBlueprintDefaultVariables);
	void Call_Animation_Curve_Again(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ULightComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Add_to_TOD_Light_Array(class ULightComponent*& NewItem, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, enum class EFortDayPhase Temp_byte_Variable, float K2Node_Select_Default);
	void Set__MID_Values_For_Lights(enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, enum class EFortDayPhase Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, float Temp_float_Variable, int32 Temp_int_Variable, enum class EFortDayPhase Temp_byte_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable_1, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue_1, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue_1, enum class EFortDayPhase Temp_byte_Variable_2, float CallFunc_Array_Get_Item, enum class EFortDayPhase Temp_byte_Variable_3, float CallFunc_Multiply_FloatFloat_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, float CallFunc_Array_Get_Item_1, int32 CallFunc_GetNumMaterials_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item_2, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2, float K2Node_Select_Default_3, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1);
	void Set_Light_parameters(float Previous_to_Current_Day_Phase_Alpha, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EFortDayPhase Temp_byte_Variable, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, enum class EFortDayPhase Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, class ULightComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_Lerp_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, bool CallFunc_SetStaticMesh_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_BreakColor_R_1, float CallFunc_BreakColor_G_1, float CallFunc_BreakColor_B_1, float CallFunc_BreakColor_A_1, TArray<class UMaterialInterface*>& CallFunc_GetIntenseWindMaterialsForPreview_Materials, bool CallFunc_GetIntenseWindMaterialsForPreview_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue_1, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Array_Index_Variable, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue_2, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetTimeRange_MinTime, float CallFunc_GetTimeRange_MaxTime, class UMaterialInterface* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void ReceiveBeginPlay();
	void OnBounceAnimationUpdate(const struct FFortBounceData& Data);
	void Loop_Animation_Curve();
	void ExecuteUbergraph_Parent_BuildingPropActor(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, enum class EFortDayPhase Temp_byte_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EFortDayPhase Temp_byte_Variable_1, float Temp_float_Variable, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class EFortDayPhase Temp_byte_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, enum class EFortDayPhase Temp_byte_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_4, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue_1, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue_1, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue_2, int32 CallFunc_GetNumMaterials_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_GetNumMaterials_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_3, float Temp_float_Variable_1, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5, float Temp_float_Variable_2, float Temp_float_Variable_3, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue_2, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue_2, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue_2, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float Temp_float_Variable_4, float Temp_float_Variable_5, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue_3, enum class EFortDayPhase Temp_byte_Variable_4, enum class EFortDayPhase Temp_byte_Variable_5, float CallFunc_GetScalarParameterValue_ReturnValue, int32 Temp_int_Variable_3, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue_3, float CallFunc_K2_GetScalarParameterValue_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_6, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue_4, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Array_Index_Variable_3, float Temp_float_Variable_6, const struct FVector& CallFunc_Array_Get_Item, enum class EFortDayPhase Temp_byte_Variable_6, float CallFunc_RandomFloatInRange_ReturnValue, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue_4, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue_5, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_5, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue_6, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue_6, enum class EFortDayPhase Temp_byte_Variable_7, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_RandomFloatInRange_ReturnValue_1, int32 Temp_int_Variable_4, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_LessEqual_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_8, enum class EFortDayPhase Temp_byte_Variable_8, float Temp_float_Variable_7, bool Temp_bool_Variable, enum class EFortDayPhase Temp_byte_Variable_9, bool CallFunc_IsDedicatedServer_ReturnValue_1, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, enum class EFortDayPhase Temp_byte_Variable_10, enum class EFortDayPhase Temp_byte_Variable_11, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_Array_Get_Item_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default_2, float K2Node_Select_Default_3, float K2Node_Select_Default_4, float K2Node_Select_Default_5, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FLinearColor& CallFunc_Array_Get_Item_2, const struct FLinearColor& CallFunc_Array_Get_Item_3, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Array_Get_Item_4, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Add_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float K2Node_Select_Default_6, float K2Node_Select_Default_7, float K2Node_Select_Default_8, float K2Node_Select_Default_9, float K2Node_Select_Default_10, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float K2Node_Select_Default_11, const struct FFortBounceData& K2Node_Event_Data, const struct FLinearColor& CallFunc_Array_Get_Item_6, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R_1, float CallFunc_BreakColor_G_1, float CallFunc_BreakColor_B_1, float CallFunc_BreakColor_A_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_4, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsConsolePlatform_ReturnValue, enum class EFortDayPhase Temp_byte_Variable_12, float K2Node_Select_Default_12, class ULightComponent* CallFunc_Array_Get_Item_7, float CallFunc_Lerp_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class ULightComponent* CallFunc_Array_Get_Item_8, bool CallFunc_IsValid_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, class ULightComponent* CallFunc_Array_Get_Item_9, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, class ULightComponent* CallFunc_Array_Get_Item_10, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_Array_Get_Item_11, float K2Node_Select_Default_13);
};

}


