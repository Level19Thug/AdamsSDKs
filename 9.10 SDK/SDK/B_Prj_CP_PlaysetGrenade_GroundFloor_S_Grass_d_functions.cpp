#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_CP_PlaysetGrenade_GroundFloor_S_Grass_d.B_Prj_CP_PlaysetGrenade_GroundFloor_S_Grass_d_C
// (Actor)

class UClass* AB_Prj_CP_PlaysetGrenade_GroundFloor_S_Grass_d_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_CP_PlaysetGrenade_GroundFloor_S_Grass_d_C");

	return Clss;
}


// B_Prj_CP_PlaysetGrenade_GroundFloor_S_Grass_d_C B_Prj_CP_PlaysetGrenade_GroundFloor_S_Grass_d.Default__B_Prj_CP_PlaysetGrenade_GroundFloor_S_Grass_d_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_CP_PlaysetGrenade_GroundFloor_S_Grass_d_C* AB_Prj_CP_PlaysetGrenade_GroundFloor_S_Grass_d_C::GetDefaultObj()
{
	static class AB_Prj_CP_PlaysetGrenade_GroundFloor_S_Grass_d_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_CP_PlaysetGrenade_GroundFloor_S_Grass_d_C*>(AB_Prj_CP_PlaysetGrenade_GroundFloor_S_Grass_d_C::StaticClass()->DefaultObject);

	return Default;
}

}


