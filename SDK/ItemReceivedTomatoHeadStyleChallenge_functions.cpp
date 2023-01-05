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


// Function ItemReceivedTomatoHeadStyleChallenge.ItemReceivedTomatoHeadStyleChallenge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedTomatoHeadStyleChallenge_C::Construct()
{
	static auto Func = Class->GetFunction("ItemReceivedTomatoHeadStyleChallenge_C", "Construct");

	Params::UItemReceivedTomatoHeadStyleChallenge_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedTomatoHeadStyleChallenge.ItemReceivedTomatoHeadStyleChallenge_C.ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedTomatoHeadStyleChallenge_C::ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemReceivedTomatoHeadStyleChallenge_C", "ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge");

	Params::UItemReceivedTomatoHeadStyleChallenge_C_ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
