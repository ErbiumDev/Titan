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


// Function BP_MedicPack_HealTarget.BP_MedicPack_HealTarget_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MedicPack_HealTarget_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_MedicPack_HealTarget_C", "UserConstructionScript");

	Params::ABP_MedicPack_HealTarget_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
