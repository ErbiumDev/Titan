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


// Function BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MedicPack_HealNozzle_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_MedicPack_HealNozzle_C", "UserConstructionScript");

	Params::ABP_MedicPack_HealNozzle_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MedicPack_HealNozzle_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_MedicPack_HealNozzle_C", "ReceiveBeginPlay");

	Params::ABP_MedicPack_HealNozzle_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C.ExecuteUbergraph_BP_MedicPack_HealNozzle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MedicPack_HealNozzle_C::ExecuteUbergraph_BP_MedicPack_HealNozzle(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_MedicPack_HealNozzle_C", "ExecuteUbergraph_BP_MedicPack_HealNozzle");

	Params::ABP_MedicPack_HealNozzle_C_ExecuteUbergraph_BP_MedicPack_HealNozzle_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
