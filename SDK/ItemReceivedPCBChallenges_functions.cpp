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


// Function ItemReceivedPCBChallenges.ItemReceivedPCBChallenges_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedPCBChallenges_C::Construct()
{
	static auto Func = Class->GetFunction("ItemReceivedPCBChallenges_C", "Construct");

	Params::UItemReceivedPCBChallenges_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedPCBChallenges.ItemReceivedPCBChallenges_C.ExecuteUbergraph_ItemReceivedPCBChallenges
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedPCBChallenges_C::ExecuteUbergraph_ItemReceivedPCBChallenges(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemReceivedPCBChallenges_C", "ExecuteUbergraph_ItemReceivedPCBChallenges");

	Params::UItemReceivedPCBChallenges_C_ExecuteUbergraph_ItemReceivedPCBChallenges_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
