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


// Function ShowdownPosterViolator.ShowdownPosterViolator_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownPosterViolator_C::RefreshDataBP()
{
	static auto Func = Class->GetFunction("ShowdownPosterViolator_C", "RefreshDataBP");

	Params::UShowdownPosterViolator_C_RefreshDataBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownPosterViolator.ShowdownPosterViolator_C.ExecuteUbergraph_ShowdownPosterViolator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownEventState Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownEventState CallFunc_GetTournamentState_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownPosterViolator_C::ExecuteUbergraph_ShowdownPosterViolator(int32 EntryPoint, enum class EFortShowdownEventState Temp_byte_Variable, class UWidget* Temp_object_Variable, enum class EFortShowdownEventState CallFunc_GetTournamentState_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ShowdownPosterViolator_C", "ExecuteUbergraph_ShowdownPosterViolator");

	Params::UShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetTournamentState_ReturnValue = CallFunc_GetTournamentState_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
