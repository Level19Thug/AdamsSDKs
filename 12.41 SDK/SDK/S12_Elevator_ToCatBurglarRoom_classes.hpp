#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass S12_Elevator_ToCatBurglarRoom.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_7();
	void SequenceEvent__ENTRYPOINTSequenceDirector_6(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement);
	void SequenceEvent__ENTRYPOINTSequenceDirector_5(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement);
	void SequenceEvent__ENTRYPOINTSequenceDirector_4(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2();
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Midas);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void BP_Elevator_Transition_Event_0(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition_Event_1(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition_Event_2(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition3_Event_0(class ABP_Elevator_Transition_C* BP_Elevator_Transition3);
	void BP_Elevator_Transition3_Event_1(class ABP_Elevator_Transition_C* BP_Elevator_Transition3);
	void BP_Elevator_Transition_Event_3(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition_Event_4(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition3_Event_2(class ABP_Elevator_Transition_C* BP_Elevator_Transition3);
	void BP_Elevator_Transition3_Event_3(class ABP_Elevator_Transition_C* BP_Elevator_Transition3);
	void BP_Elevator_Transition3_Event_4(class ABP_Elevator_Transition_C* BP_Elevator_Transition3);
	void BP_Elevator_Transition3_Event_5(class ABP_Elevator_Transition_C* BP_Elevator_Transition3);
	void BP_Battlepass_LightSwitcher_Maproom_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void BP_Battlepass_LightSwitcher_Hench_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench);
	void Audio_Camera_Move_Event(class USoundBase* Sound);
	void BP_Elevator_Transition_Event_5(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition_Event_6(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition_Event_7(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Battlepass_LightSwitcher_TNTINA_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_TNTINA);
	void BP_Battlepass_LightSwitcher_Maproom_Event_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void Camera_Root_Movement_Event_0(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn);
	void Camera_Root_Movement_Event_1(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn);
	void BP_Battlepass_LightSwitcher_Adventure_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Adventure);
	void BP_Battlepass_LightSwitcher_Maproom_Event_2(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void Camera_Root_Movement_Event_2(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn);
	void Camera_Root_Movement_Event_3(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn);
	void Camera_Root_Movement_Event_4(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn);
	void Camera_Root_Movement_Event_5(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn);
	void BP_Elevator_Transition_Event_8(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition_Event_9(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Battlepass_LightSwitcher_Midas_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Midas);
	void BP_Battlepass_LightSwitcher_Maproom_Event_3(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_9, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_8, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_7, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_5, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_4, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_6, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_5, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_3, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_2, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_1, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_3, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench, class USoundBase* K2Node_CustomEvent_Sound, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_4, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_3, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_2, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_TNTINA, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_2, bool CallFunc_IsReversed_ReturnValue, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement_5, bool K2Node_CustomEvent_bStreamIn_5, bool CallFunc_IsReversed_ReturnValue_1, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement_4, bool K2Node_CustomEvent_bStreamIn_4, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Adventure, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_1, bool CallFunc_IsReversed_ReturnValue_2, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement_3, bool K2Node_CustomEvent_bStreamIn_3, bool CallFunc_IsReversed_ReturnValue_3, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement_2, bool K2Node_CustomEvent_bStreamIn_2, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement_1, bool K2Node_CustomEvent_bStreamIn_1, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement, bool K2Node_CustomEvent_bStreamIn, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_1, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Midas);
};

}


