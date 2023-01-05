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


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Assault_Surgical_Thermal_Athena_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "UserConstructionScript");

	Params::AB_Assault_Surgical_Thermal_Athena_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ScalePlayerThermal__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Assault_Surgical_Thermal_Athena_C::ScalePlayerThermal__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ScalePlayerThermal__FinishedFunc");

	Params::AB_Assault_Surgical_Thermal_Athena_C_ScalePlayerThermal__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ScalePlayerThermal__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Assault_Surgical_Thermal_Athena_C::ScalePlayerThermal__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ScalePlayerThermal__UpdateFunc");

	Params::AB_Assault_Surgical_Thermal_Athena_C_ScalePlayerThermal__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsTargeting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Assault_Surgical_Thermal_Athena_C::OnSetTargeting(bool bNewIsTargeting)
{
	static auto Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "OnSetTargeting");

	Params::AB_Assault_Surgical_Thermal_Athena_C_OnSetTargeting_Params Parms;
	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.PlayScopePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Assault_Surgical_Thermal_Athena_C::PlayScopePP()
{
	static auto Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "PlayScopePP");

	Params::AB_Assault_Surgical_Thermal_Athena_C_PlayScopePP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ReverseScopePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Assault_Surgical_Thermal_Athena_C::ReverseScopePP()
{
	static auto Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ReverseScopePP");

	Params::AB_Assault_Surgical_Thermal_Athena_C_ReverseScopePP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ForceScopeBackImmediatly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Assault_Surgical_Thermal_Athena_C::ForceScopeBackImmediatly()
{
	static auto Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ForceScopeBackImmediatly");

	Params::AB_Assault_Surgical_Thermal_Athena_C_ForceScopeBackImmediatly_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bNewIsTargeting                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Assault_Surgical_Thermal_Athena_C::ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bNewIsTargeting, bool CallFunc_IsMobilePlatform_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool Temp_bool_IsClosed_Variable, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena");

	Params::AB_Assault_Surgical_Thermal_Athena_C_ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_bNewIsTargeting = K2Node_Event_bNewIsTargeting;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue = CallFunc_GetLocalViewingPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
