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


// Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Glider_Rusty_Raider_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Glider_Rusty_Raider_C", "UserConstructionScript");

	Params::AB_Glider_Rusty_Raider_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Glider_Rusty_Raider_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Glider_Rusty_Raider_C", "ReceiveBeginPlay");

	Params::AB_Glider_Rusty_Raider_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.OnParachuteTrailUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              MovementLengthSquared                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ForwardDot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RightDot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RotationalMovementAcceleration                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Rusty_Raider_C::OnParachuteTrailUpdated(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration)
{
	static auto Func = Class->GetFunction("B_Glider_Rusty_Raider_C", "OnParachuteTrailUpdated");

	Params::AB_Glider_Rusty_Raider_C_OnParachuteTrailUpdated_Params Parms;
	Parms.MovementLengthSquared = MovementLengthSquared;
	Parms.ForwardDot = ForwardDot;
	Parms.RightDot = RightDot;
	Parms.RotationalMovementAcceleration = RotationalMovementAcceleration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.ExecuteUbergraph_B_Glider_Rusty_Raider
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_MovementLengthSquared                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ForwardDot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RightDot                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RotationalMovementAcceleration                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Glider_Rusty_Raider_C::ExecuteUbergraph_B_Glider_Rusty_Raider(int32 EntryPoint, float K2Node_Event_MovementLengthSquared, float K2Node_Event_ForwardDot, float K2Node_Event_RightDot, float K2Node_Event_RotationalMovementAcceleration, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Glider_Rusty_Raider_C", "ExecuteUbergraph_B_Glider_Rusty_Raider");

	Params::AB_Glider_Rusty_Raider_C_ExecuteUbergraph_B_Glider_Rusty_Raider_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MovementLengthSquared = K2Node_Event_MovementLengthSquared;
	Parms.K2Node_Event_ForwardDot = K2Node_Event_ForwardDot;
	Parms.K2Node_Event_RightDot = K2Node_Event_RightDot;
	Parms.K2Node_Event_RotationalMovementAcceleration = K2Node_Event_RotationalMovementAcceleration;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
