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


// Function B_Glider_Reaper.B_Glider_Reaper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Glider_Reaper_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Glider_Reaper_C", "UserConstructionScript");

	Params::AB_Glider_Reaper_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Reaper.B_Glider_Reaper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Glider_Reaper_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Glider_Reaper_C", "ReceiveBeginPlay");

	Params::AB_Glider_Reaper_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Reaper.B_Glider_Reaper_C.FireDynamics
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Glider_Reaper_C::FireDynamics()
{
	static auto Func = Class->GetFunction("B_Glider_Reaper_C", "FireDynamics");

	Params::AB_Glider_Reaper_C_FireDynamics_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Reaper.B_Glider_Reaper_C.OnParachuteTrailUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              MovementLengthSquared                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ForwardDot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RightDot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RotationalMovementAcceleration                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Reaper_C::OnParachuteTrailUpdated(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration)
{
	static auto Func = Class->GetFunction("B_Glider_Reaper_C", "OnParachuteTrailUpdated");

	Params::AB_Glider_Reaper_C_OnParachuteTrailUpdated_Params Parms;
	Parms.MovementLengthSquared = MovementLengthSquared;
	Parms.ForwardDot = ForwardDot;
	Parms.RightDot = RightDot;
	Parms.RotationalMovementAcceleration = RotationalMovementAcceleration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Reaper.B_Glider_Reaper_C.ExecuteUbergraph_B_Glider_Reaper
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_MovementLengthSquared                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ForwardDot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RightDot                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RotationalMovementAcceleration                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Glider_Reaper_C::ExecuteUbergraph_B_Glider_Reaper(int32 EntryPoint, float K2Node_Event_MovementLengthSquared, float K2Node_Event_ForwardDot, float K2Node_Event_RightDot, float K2Node_Event_RotationalMovementAcceleration, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Glider_Reaper_C", "ExecuteUbergraph_B_Glider_Reaper");

	Params::AB_Glider_Reaper_C_ExecuteUbergraph_B_Glider_Reaper_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MovementLengthSquared = K2Node_Event_MovementLengthSquared;
	Parms.K2Node_Event_ForwardDot = K2Node_Event_ForwardDot;
	Parms.K2Node_Event_RightDot = K2Node_Event_RightDot;
	Parms.K2Node_Event_RotationalMovementAcceleration = K2Node_Event_RotationalMovementAcceleration;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
