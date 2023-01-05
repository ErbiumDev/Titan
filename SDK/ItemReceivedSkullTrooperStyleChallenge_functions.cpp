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


// Function ItemReceivedSkullTrooperStyleChallenge.ItemReceivedSkullTrooperStyleChallenge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedSkullTrooperStyleChallenge_C::Construct()
{
	static auto Func = Class->GetFunction("ItemReceivedSkullTrooperStyleChallenge_C", "Construct");

	Params::UItemReceivedSkullTrooperStyleChallenge_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedSkullTrooperStyleChallenge.ItemReceivedSkullTrooperStyleChallenge_C.ExecuteUbergraph_ItemReceivedSkullTrooperStyleChallenge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedSkullTrooperStyleChallenge_C::ExecuteUbergraph_ItemReceivedSkullTrooperStyleChallenge(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemReceivedSkullTrooperStyleChallenge_C", "ExecuteUbergraph_ItemReceivedSkullTrooperStyleChallenge");

	Params::UItemReceivedSkullTrooperStyleChallenge_C_ExecuteUbergraph_ItemReceivedSkullTrooperStyleChallenge_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
