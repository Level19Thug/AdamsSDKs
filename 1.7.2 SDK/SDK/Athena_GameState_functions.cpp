#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_GameState.Athena_GameState_C
// (Actor)

class UClass* AAthena_GameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_GameState_C");

	return Clss;
}


// Athena_GameState_C Athena_GameState.Default__Athena_GameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAthena_GameState_C* AAthena_GameState_C::GetDefaultObj()
{
	static class AAthena_GameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAthena_GameState_C*>(AAthena_GameState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Athena_GameState.Athena_GameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthena_GameState_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_GameState_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}

