#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Playspace_Instance_BuildTheTower.GA_Athena_Playspace_Instance_BuildTheTower_C
// (None)

class UClass* UGA_Athena_Playspace_Instance_BuildTheTower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Playspace_Instance_BuildTheTower_C");

	return Clss;
}


// GA_Athena_Playspace_Instance_BuildTheTower_C GA_Athena_Playspace_Instance_BuildTheTower.Default__GA_Athena_Playspace_Instance_BuildTheTower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Playspace_Instance_BuildTheTower_C* UGA_Athena_Playspace_Instance_BuildTheTower_C::GetDefaultObj()
{
	static class UGA_Athena_Playspace_Instance_BuildTheTower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Playspace_Instance_BuildTheTower_C*>(UGA_Athena_Playspace_Instance_BuildTheTower_C::StaticClass()->DefaultObject);

	return Default;
}

}


