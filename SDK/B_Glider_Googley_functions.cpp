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


// Function B_Glider_Googley.B_Glider_Googley_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Glider_Googley_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Glider_Googley_C", "UserConstructionScript");

	Params::AB_Glider_Googley_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Googley.B_Glider_Googley_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Glider_Googley_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Glider_Googley_C", "ReceiveBeginPlay");

	Params::AB_Glider_Googley_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Googley.B_Glider_Googley_C.FireDynamics
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Glider_Googley_C::FireDynamics()
{
	static auto Func = Class->GetFunction("B_Glider_Googley_C", "FireDynamics");

	Params::AB_Glider_Googley_C_FireDynamics_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Googley.B_Glider_Googley_C.ExecuteUbergraph_B_Glider_Googley
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVinderTech_GliderChute_AnimBP_C*K2Node_DynamicCast_AsVinder_Tech_Glider_Chute_Anim_BP            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Glider_Googley_C::ExecuteUbergraph_B_Glider_Googley(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UVinderTech_GliderChute_AnimBP_C* K2Node_DynamicCast_AsVinder_Tech_Glider_Chute_Anim_BP, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("B_Glider_Googley_C", "ExecuteUbergraph_B_Glider_Googley");

	Params::AB_Glider_Googley_C_ExecuteUbergraph_B_Glider_Googley_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVinder_Tech_Glider_Chute_Anim_BP = K2Node_DynamicCast_AsVinder_Tech_Glider_Chute_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
