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


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_M_Med_Soldier_04_Skeleton_AnimBP_C_BlueprintUpdateAnimation_Params Parms;
	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static auto Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "BlueprintInitializeAnimation");

	Params::USK_M_Med_Soldier_04_Skeleton_AnimBP_C_BlueprintInitializeAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static auto Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP");

	Params::USK_M_Med_Soldier_04_Skeleton_AnimBP_C_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
