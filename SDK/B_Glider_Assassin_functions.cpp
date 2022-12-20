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


// Function B_Glider_Assassin.B_Glider_Assassin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Assassin_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Glider_Assassin_C", "UserConstructionScript");

	Params::AB_Glider_Assassin_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Assassin.B_Glider_Assassin_C.TailLightSequence__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Glider_Assassin_C::TailLightSequence__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Glider_Assassin_C", "TailLightSequence__FinishedFunc");

	Params::AB_Glider_Assassin_C_TailLightSequence__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Assassin.B_Glider_Assassin_C.TailLightSequence__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Glider_Assassin_C::TailLightSequence__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Glider_Assassin_C", "TailLightSequence__UpdateFunc");

	Params::AB_Glider_Assassin_C_TailLightSequence__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Assassin.B_Glider_Assassin_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Assassin_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0(float AxisValue)
{
	static auto Func = Class->GetFunction("B_Glider_Assassin_C", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0");

	Params::AB_Glider_Assassin_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0_Params Parms;
	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Assassin.B_Glider_Assassin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Glider_Assassin_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Glider_Assassin_C", "ReceiveBeginPlay");

	Params::AB_Glider_Assassin_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Assassin.B_Glider_Assassin_C.OnParachuteTrailUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              MovementLengthSquared                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ForwardDot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RightDot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RotationalMovementAcceleration                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Assassin_C::OnParachuteTrailUpdated(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration)
{
	static auto Func = Class->GetFunction("B_Glider_Assassin_C", "OnParachuteTrailUpdated");

	Params::AB_Glider_Assassin_C_OnParachuteTrailUpdated_Params Parms;
	Parms.MovementLengthSquared = MovementLengthSquared;
	Parms.ForwardDot = ForwardDot;
	Parms.RightDot = RightDot;
	Parms.RotationalMovementAcceleration = RotationalMovementAcceleration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Assassin.B_Glider_Assassin_C.ExecuteUbergraph_B_Glider_Assassin
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_MovementLengthSquared                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ForwardDot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RightDot                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RotationalMovementAcceleration                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue12                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Glider_Assassin_C::ExecuteUbergraph_B_Glider_Assassin(int32 EntryPoint, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float K2Node_InputAxisEvent_AxisValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, float K2Node_Event_MovementLengthSquared, float K2Node_Event_ForwardDot, float K2Node_Event_RightDot, float K2Node_Event_RotationalMovementAcceleration, bool CallFunc_Less_FloatFloat_ReturnValue12, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue12)
{
	static auto Func = Class->GetFunction("B_Glider_Assassin_C", "ExecuteUbergraph_B_Glider_Assassin");

	Params::AB_Glider_Assassin_C_ExecuteUbergraph_B_Glider_Assassin_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue1 = CallFunc_Less_FloatFloat_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.K2Node_Event_MovementLengthSquared = K2Node_Event_MovementLengthSquared;
	Parms.K2Node_Event_ForwardDot = K2Node_Event_ForwardDot;
	Parms.K2Node_Event_RightDot = K2Node_Event_RightDot;
	Parms.K2Node_Event_RotationalMovementAcceleration = K2Node_Event_RotationalMovementAcceleration;
	Parms.CallFunc_Less_FloatFloat_ReturnValue12 = CallFunc_Less_FloatFloat_ReturnValue12;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue12 = CallFunc_Greater_FloatFloat_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
