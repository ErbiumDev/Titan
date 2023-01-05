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


// Function ItemReceivedPCBGeneric.ItemReceivedPCBGeneric_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedPCBGeneric_C::Construct()
{
	static auto Func = Class->GetFunction("ItemReceivedPCBGeneric_C", "Construct");

	Params::UItemReceivedPCBGeneric_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedPCBGeneric.ItemReceivedPCBGeneric_C.ExecuteUbergraph_ItemReceivedPCBGeneric
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedPCBGeneric_C::ExecuteUbergraph_ItemReceivedPCBGeneric(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemReceivedPCBGeneric_C", "ExecuteUbergraph_ItemReceivedPCBGeneric");

	Params::UItemReceivedPCBGeneric_C_ExecuteUbergraph_ItemReceivedPCBGeneric_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
