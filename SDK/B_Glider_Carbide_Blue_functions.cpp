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


// Function B_Glider_Carbide_Blue.B_Glider_Carbide_Blue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Glider_Carbide_Blue_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Glider_Carbide_Blue_C", "UserConstructionScript");

	Params::AB_Glider_Carbide_Blue_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Carbide_Blue.B_Glider_Carbide_Blue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Glider_Carbide_Blue_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Glider_Carbide_Blue_C", "ReceiveBeginPlay");

	Params::AB_Glider_Carbide_Blue_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Carbide_Blue.B_Glider_Carbide_Blue_C.OnParachuteTrailUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              MovementLengthSquared                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ForwardDot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RightDot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RotationalMovementAcceleration                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Carbide_Blue_C::OnParachuteTrailUpdated(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration)
{
	static auto Func = Class->GetFunction("B_Glider_Carbide_Blue_C", "OnParachuteTrailUpdated");

	Params::AB_Glider_Carbide_Blue_C_OnParachuteTrailUpdated_Params Parms;
	Parms.MovementLengthSquared = MovementLengthSquared;
	Parms.ForwardDot = ForwardDot;
	Parms.RightDot = RightDot;
	Parms.RotationalMovementAcceleration = RotationalMovementAcceleration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Carbide_Blue.B_Glider_Carbide_Blue_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Glider_Carbide_Blue_C::Reset()
{
	static auto Func = Class->GetFunction("B_Glider_Carbide_Blue_C", "Reset");

	Params::AB_Glider_Carbide_Blue_C_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Carbide_Blue.B_Glider_Carbide_Blue_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Carbide_Blue_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("B_Glider_Carbide_Blue_C", "ReceiveEndPlay");

	Params::AB_Glider_Carbide_Blue_C_ReceiveEndPlay_Params Parms;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Glider_Carbide_Blue.B_Glider_Carbide_Blue_C.ExecuteUbergraph_B_Glider_Carbide_Blue
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_MovementLengthSquared                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ForwardDot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RightDot                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RotationalMovementAcceleration                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Glider_Carbide_Blue_C::ExecuteUbergraph_B_Glider_Carbide_Blue(int32 EntryPoint, float K2Node_Event_MovementLengthSquared, float K2Node_Event_ForwardDot, float K2Node_Event_RightDot, float K2Node_Event_RotationalMovementAcceleration, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool Temp_bool_Has_Been_Initd_Variable)
{
	static auto Func = Class->GetFunction("B_Glider_Carbide_Blue_C", "ExecuteUbergraph_B_Glider_Carbide_Blue");

	Params::AB_Glider_Carbide_Blue_C_ExecuteUbergraph_B_Glider_Carbide_Blue_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MovementLengthSquared = K2Node_Event_MovementLengthSquared;
	Parms.K2Node_Event_ForwardDot = K2Node_Event_ForwardDot;
	Parms.K2Node_Event_RightDot = K2Node_Event_RightDot;
	Parms.K2Node_Event_RotationalMovementAcceleration = K2Node_Event_RotationalMovementAcceleration;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
