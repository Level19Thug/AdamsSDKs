#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Solid_MdBlue.Border_Solid_MdBlue_C
// (None)

class UClass* UBorder_Solid_MdBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Solid_MdBlue_C");

	return Clss;
}


// Border_Solid_MdBlue_C Border_Solid_MdBlue.Default__Border_Solid_MdBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Solid_MdBlue_C* UBorder_Solid_MdBlue_C::GetDefaultObj()
{
	static class UBorder_Solid_MdBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Solid_MdBlue_C*>(UBorder_Solid_MdBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


