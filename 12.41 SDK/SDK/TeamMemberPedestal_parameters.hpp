#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.SetSparkleParticlesEnabled
struct ATeamMemberPedestal_C_SetSparkleParticlesEnabled_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.StopLobbyAnimation
struct ATeamMemberPedestal_C_StopLobbyAnimation_Params
{
public:
	bool                                         CallFunc_IsInAthena_ReturnValue;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A2D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.SetFakeBlobShadowVisiblity
struct ATeamMemberPedestal_C_SetFakeBlobShadowVisiblity_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsErebus_ReturnValue;                     // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A2E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A2F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x200 (0x200 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnPartyDataChanged
struct ATeamMemberPedestal_C_OnPartyDataChanged_Params
{
public:
	struct FFortTeamMemberInfo                   Member_Info;                                       // 0x0(0x200)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x201 (0x201 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnTeamMemberStateChanged
struct ATeamMemberPedestal_C_OnTeamMemberStateChanged_Params
{
public:
	struct FFortTeamMemberInfo                   Team_Member_Info;                                  // 0x0(0x200)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.PlayLobbyAnimation
struct ATeamMemberPedestal_C_PlayLobbyAnimation_Params
{
public:
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue;         // 0x0(0x48)(None)
	bool                                         CallFunc_IsInAthena_ReturnValue;                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICustomCharacterPartOwnerInterface> K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface; // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICustomCharacterPartOwnerInterface> K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface_1; // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A32[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue_1;       // 0x80(0x48)(None)
};

// 0x37 (0x37 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshWidgets
struct ATeamMemberPedestal_C_RefreshWidgets_Params
{
public:
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLocalSquadGroup_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidTeamMember_ReturnValue;            // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCurrentMemberLocal_ReturnValue;         // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLocalSquadGroup_ReturnValue_1;        // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidTeamMember_ReturnValue_1;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue_1;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortStoreState                   CallFunc_GetStoreState_ReturnValue;                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_2;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFrontEndCamera                   CallFunc_GetFrontEndCamera_ReturnValue;            // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7 (0x7 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnFrontEndCameraChanged
struct ATeamMemberPedestal_C_OnFrontEndCameraChanged_Params
{
public:
	enum class EFrontEndCamera                   New_Camera;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   Old_Camera;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeContextEvents
struct ATeamMemberPedestal_C_InitializeContextEvents_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue_1;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UFortUITeamInfo*                       CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue_2;                 // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleHoverInputActions
struct ATeamMemberPedestal_C_HandleHoverInputActions_Params
{
public:
	bool                                         bIsHovered;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeInputActionRefs
struct ATeamMemberPedestal_C_InitializeInputActionRefs_Params
{
public:
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTeamMemberPedestal_Nameplate_C*       K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue_1;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerAddPlayer_C*               K2Node_DynamicCast_AsLobby_Player_Add_Player;      // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.UserConstructionScript
struct ATeamMemberPedestal_C_UserConstructionScript_Params
{
public:
	struct FLinearColor                          NewLocalVar_2;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NewLocalVar_1;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NewLocalVar_0;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A3D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_3; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9
struct ATeamMemberPedestal_C_OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabClosed
struct ATeamMemberPedestal_C_HandleClientEvent_StoreTabClosed_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabSelected
struct ATeamMemberPedestal_C_HandleClientEvent_StoreTabSelected_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnIsCurrentlyInMatchChanged
struct ATeamMemberPedestal_C_OnIsCurrentlyInMatchChanged_Params
{
public:
	bool                                         bIsInMatch;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnPedestalIsPopulatedChanged
struct ATeamMemberPedestal_C_OnPedestalIsPopulatedChanged_Params
{
public:
	bool                                         bIsPopulated;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bOwningSquadContainsLocalPlayer;                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnGameReadinessChanged
struct ATeamMemberPedestal_C_OnGameReadinessChanged_Params
{
public:
	enum class EGameReadiness                    GameReadiness;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnNewSquadEstablished
struct ATeamMemberPedestal_C_OnNewSquadEstablished_Params
{
public:
	bool                                         bMultipleSquadsPopulated;                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bOwningSquadContainsLocalPlayer;                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A43[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAthenaTeamDisplayInfo                OwningSquadStyle;                                  // 0x8(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x6 (0x6 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnOwningPedestalGroupEstablished
struct ATeamMemberPedestal_C_OnOwningPedestalGroupEstablished_Params
{
public:
	int32                                        SquadIdx;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSquadHasLocalPlayer;                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsPopulated;                                      // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnTeamMemberSet
struct ATeamMemberPedestal_C_OnTeamMemberSet_Params
{
public:
	bool                                         bHasValidTeamMember;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnAvatarChanged
struct ATeamMemberPedestal_C_OnAvatarChanged_Params
{
public:
	class UTexture2D*                            AvatarImage;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                AvatarBackground;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                HighlightColor;                                    // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.TransitionToCharacterScreen
struct ATeamMemberPedestal_C_TransitionToCharacterScreen_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.TransitionToLoadingScreen
struct ATeamMemberPedestal_C_TransitionToLoadingScreen_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.TransitionfromCharactertoLoadingscreen
struct ATeamMemberPedestal_C_TransitionfromCharactertoLoadingscreen_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x362 (0x362 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.ExecuteUbergraph_TeamMemberPedestal
struct ATeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameReadiness                    Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Temp_byte_Variable_1;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                          Temp_struct_Variable;                              // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default;                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              K2Node_DynamicCast_AsTexture;                      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A46[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x4C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_3;                             // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_4;                             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_5;                             // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_6;                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentTeamSize_ReturnValue;           // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventSource_1;            // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus_1;             // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent_1;            // 0x88(0x20)(ConstParm, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0xC0(0x20)(ConstParm, NoDestructor)
	float                                        K2Node_Select_Default_1;                           // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_1;                // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x108(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentTeamSize_ReturnValue_1;         // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x11C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A4C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x134(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         K2Node_Event_bIsInMatch;                           // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsPopulated_1;                       // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bOwningSquadContainsLocalPlayer_1;    // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena_1;         // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A4F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_5;        // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInFrontend_ReturnValue;                 // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Athena_Generic_C*          K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;   // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EGameReadiness                    K2Node_Event_GameReadiness;                        // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A51[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_2;                           // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraAnimationTransition_C*>  CallFunc_GetAllActorsOfClass_OutActors;            // 0x210(0x10)(ZeroConstructor, ReferenceParm)
	class ACameraAnimationTransition_C*          CallFunc_Array_Get_Item;                           // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bMultipleSquadsPopulated;             // 0x22C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bOwningSquadContainsLocalPlayer;      // 0x22D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A52[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAthenaTeamDisplayInfo                K2Node_Event_OwningSquadStyle;                     // 0x230(0x88)(ConstParm)
	bool                                         CallFunc_IsInLocalSquadGroup_ReturnValue;          // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A53[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default_3;                           // 0x2BC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLocalSquadGroup_ReturnValue_1;        // 0x2CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLocalSquadGroup_ReturnValue_2;        // 0x2CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A54[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_SquadIdx;                             // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSquadHasLocalPlayer;                 // 0x2D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsPopulated;                         // 0x2D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2D6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2D7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLocalSquadGroup_ReturnValue_3;        // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLocalSquadGroup_ReturnValue_4;        // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLocalSquadGroup_ReturnValue_5;        // 0x2DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bHasValidTeamMember;                  // 0x2DB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlayingFortnite_ReturnValue;            // 0x2DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2DD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2DE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A55[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x2E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLocalSquadGroup_ReturnValue_6;        // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default_4;                           // 0x2F4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_5;                           // 0x304(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInFrontend_ReturnValue_1;               // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Event_AvatarImage;                          // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                K2Node_Event_AvatarBackground;                     // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                K2Node_Event_HighlightColor;                       // 0x31C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x320(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaterialIndex_ReturnValue;             // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_2;                // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_3; // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bool_2;                         // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bool_1;                         // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A59[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x354(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bool;                           // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.Debug_OnFriendLFGRequest__DelegateSignature
struct ATeamMemberPedestal_C_Debug_OnFriendLFGRequest__DelegateSignature_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


