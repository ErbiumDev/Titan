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


// Function ItemReceivedFortnitemaresChallenges.ItemReceivedFortnitemaresChallenges_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedFortnitemaresChallenges_C::Construct()
{
	static auto Func = Class->GetFunction("ItemReceivedFortnitemaresChallenges_C", "Construct");

	Params::UItemReceivedFortnitemaresChallenges_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedFortnitemaresChallenges.ItemReceivedFortnitemaresChallenges_C.ExecuteUbergraph_ItemReceivedFortnitemaresChallenges
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedFortnitemaresChallenges_C::ExecuteUbergraph_ItemReceivedFortnitemaresChallenges(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemReceivedFortnitemaresChallenges_C", "ExecuteUbergraph_ItemReceivedFortnitemaresChallenges");

	Params::UItemReceivedFortnitemaresChallenges_C_ExecuteUbergraph_ItemReceivedFortnitemaresChallenges_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
