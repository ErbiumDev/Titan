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


// Function ItemReceived14DaysPresent.ItemReceived14DaysPresent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceived14DaysPresent_C::Construct()
{
	static auto Func = Class->GetFunction("ItemReceived14DaysPresent_C", "Construct");

	Params::UItemReceived14DaysPresent_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceived14DaysPresent.ItemReceived14DaysPresent_C.ExecuteUbergraph_ItemReceived14DaysPresent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived14DaysPresent_C::ExecuteUbergraph_ItemReceived14DaysPresent(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemReceived14DaysPresent_C", "ExecuteUbergraph_ItemReceived14DaysPresent");

	Params::UItemReceived14DaysPresent_C_ExecuteUbergraph_ItemReceived14DaysPresent_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
