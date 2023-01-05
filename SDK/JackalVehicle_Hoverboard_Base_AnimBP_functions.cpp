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


// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJackalVehicle_Hoverboard_Base_AnimBP_C::ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("JackalVehicle_Hoverboard_Base_AnimBP_C", "ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP");

	Params::UJackalVehicle_Hoverboard_Base_AnimBP_C_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
