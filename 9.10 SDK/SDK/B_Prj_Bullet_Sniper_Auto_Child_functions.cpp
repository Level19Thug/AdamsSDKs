#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_Bullet_Sniper_Auto_Child.B_Prj_Bullet_Sniper_Auto_Child_C
// (Actor)

class UClass* AB_Prj_Bullet_Sniper_Auto_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_Bullet_Sniper_Auto_Child_C");

	return Clss;
}


// B_Prj_Bullet_Sniper_Auto_Child_C B_Prj_Bullet_Sniper_Auto_Child.Default__B_Prj_Bullet_Sniper_Auto_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_Bullet_Sniper_Auto_Child_C* AB_Prj_Bullet_Sniper_Auto_Child_C::GetDefaultObj()
{
	static class AB_Prj_Bullet_Sniper_Auto_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_Bullet_Sniper_Auto_Child_C*>(AB_Prj_Bullet_Sniper_Auto_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


