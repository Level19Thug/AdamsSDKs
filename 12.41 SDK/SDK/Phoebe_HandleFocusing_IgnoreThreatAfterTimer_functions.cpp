#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Phoebe_HandleFocusing_IgnoreThreatAfterTimer.Phoebe_HandleFocusing_IgnoreThreatAfterTimer_C
// (None)

class UClass* UPhoebe_HandleFocusing_IgnoreThreatAfterTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Phoebe_HandleFocusing_IgnoreThreatAfterTimer_C");

	return Clss;
}


// Phoebe_HandleFocusing_IgnoreThreatAfterTimer_C Phoebe_HandleFocusing_IgnoreThreatAfterTimer.Default__Phoebe_HandleFocusing_IgnoreThreatAfterTimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPhoebe_HandleFocusing_IgnoreThreatAfterTimer_C* UPhoebe_HandleFocusing_IgnoreThreatAfterTimer_C::GetDefaultObj()
{
	static class UPhoebe_HandleFocusing_IgnoreThreatAfterTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhoebe_HandleFocusing_IgnoreThreatAfterTimer_C*>(UPhoebe_HandleFocusing_IgnoreThreatAfterTimer_C::StaticClass()->DefaultObject);

	return Default;
}

}


