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


// Function GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Balloons_Consumable_Triggered_Release_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Athena_Balloons_Consumable_Triggered_Release_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Athena_Balloons_Consumable_Triggered_Release_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C.ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGA_Athena_Balloons_Consumable_Triggered_Release_C::ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static auto Func = Class->GetFunction("GA_Athena_Balloons_Consumable_Triggered_Release_C", "ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release");

	Params::UGA_Athena_Balloons_Consumable_Triggered_Release_C_ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
