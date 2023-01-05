#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Trap_Floor_Turret_Parent.Trap_Floor_Turret_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Floor_Turret_Parent_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Trap_Floor_Turret_Parent_C", "UserConstructionScript");

	Params::ATrap_Floor_Turret_Parent_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
