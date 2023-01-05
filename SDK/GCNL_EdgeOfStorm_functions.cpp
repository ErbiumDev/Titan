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


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_EdgeOfStorm_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "OnRemove");

	Params::AGCNL_EdgeOfStorm_C_OnRemove_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_EdgeOfStorm_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "OnExecute");

	Params::AGCNL_EdgeOfStorm_C_OnExecute_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_EdgeOfStorm_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "OnActive");

	Params::AGCNL_EdgeOfStorm_C_OnActive_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_EdgeOfStorm_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "UserConstructionScript");

	Params::AGCNL_EdgeOfStorm_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Activated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     EdgeOfStorm                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_EdgeOfStorm_C::Activated(const struct FVector& EdgeOfStorm)
{
	static auto Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "Activated");

	Params::AGCNL_EdgeOfStorm_C_Activated_Params Parms;
	Parms.EdgeOfStorm = EdgeOfStorm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Deactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_EdgeOfStorm_C::Deactivated()
{
	static auto Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "Deactivated");

	Params::AGCNL_EdgeOfStorm_C_Deactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.ExecuteUbergraph_GCNL_EdgeOfStorm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_EdgeOfStorm                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGCNL_EdgeOfStorm_C::ExecuteUbergraph_GCNL_EdgeOfStorm(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& K2Node_CustomEvent_EdgeOfStorm, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool Temp_bool_IsClosed_Variable)
{
	static auto Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "ExecuteUbergraph_GCNL_EdgeOfStorm");

	Params::AGCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_EdgeOfStorm = K2Node_CustomEvent_EdgeOfStorm;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
