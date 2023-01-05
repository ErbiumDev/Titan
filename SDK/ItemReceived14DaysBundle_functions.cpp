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


// Function ItemReceived14DaysBundle.ItemReceived14DaysBundle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceived14DaysBundle_C::Construct()
{
	static auto Func = Class->GetFunction("ItemReceived14DaysBundle_C", "Construct");

	Params::UItemReceived14DaysBundle_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceived14DaysBundle.ItemReceived14DaysBundle_C.ExecuteUbergraph_ItemReceived14DaysBundle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived14DaysBundle_C::ExecuteUbergraph_ItemReceived14DaysBundle(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemReceived14DaysBundle_C", "ExecuteUbergraph_ItemReceived14DaysBundle");

	Params::UItemReceived14DaysBundle_C_ExecuteUbergraph_ItemReceived14DaysBundle_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
