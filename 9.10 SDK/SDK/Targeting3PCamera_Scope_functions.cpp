#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Targeting3PCamera_Scope.Targeting3PCamera_Scope_C
// (None)

class UClass* UTargeting3PCamera_Scope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Targeting3PCamera_Scope_C");

	return Clss;
}


// Targeting3PCamera_Scope_C Targeting3PCamera_Scope.Default__Targeting3PCamera_Scope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTargeting3PCamera_Scope_C* UTargeting3PCamera_Scope_C::GetDefaultObj()
{
	static class UTargeting3PCamera_Scope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargeting3PCamera_Scope_C*>(UTargeting3PCamera_Scope_C::StaticClass()->DefaultObject);

	return Default;
}

}


