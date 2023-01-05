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


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_MegaStorm_DamageRing_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GCNL_MegaStorm_DamageRing_C", "UserConstructionScript");

	Params::AGCNL_MegaStorm_DamageRing_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGCNL_MegaStorm_DamageRing_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCNL_MegaStorm_DamageRing_C", "Timeline_0__FinishedFunc");

	Params::AGCNL_MegaStorm_DamageRing_C_Timeline_0__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGCNL_MegaStorm_DamageRing_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCNL_MegaStorm_DamageRing_C", "Timeline_0__UpdateFunc");

	Params::AGCNL_MegaStorm_DamageRing_C_Timeline_0__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGCNL_MegaStorm_DamageRing_C::Timeline_1__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCNL_MegaStorm_DamageRing_C", "Timeline_1__FinishedFunc");

	Params::AGCNL_MegaStorm_DamageRing_C_Timeline_1__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGCNL_MegaStorm_DamageRing_C::Timeline_1__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCNL_MegaStorm_DamageRing_C", "Timeline_1__UpdateFunc");

	Params::AGCNL_MegaStorm_DamageRing_C_Timeline_1__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCNL_MegaStorm_DamageRing_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("GCNL_MegaStorm_DamageRing_C", "ReceiveBeginPlay");

	Params::AGCNL_MegaStorm_DamageRing_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCNL_MegaStorm_DamageRing_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static auto Func = Class->GetFunction("GCNL_MegaStorm_DamageRing_C", "OnLoopingStart");

	Params::AGCNL_MegaStorm_DamageRing_C_OnLoopingStart_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.OnRemoval
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_MegaStorm_DamageRing_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto Func = Class->GetFunction("GCNL_MegaStorm_DamageRing_C", "OnRemoval");

	Params::AGCNL_MegaStorm_DamageRing_C_OnRemoval_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_MegaStorm_DamageRing_C::Reset()
{
	static auto Func = Class->GetFunction("GCNL_MegaStorm_DamageRing_C", "Reset");

	Params::AGCNL_MegaStorm_DamageRing_C_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.ExecuteUbergraph_GCNL_MegaStorm_DamageRing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters1                                         (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents1                                 (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents1                                    (ConstParm, ZeroConstructor, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASafeZoneIndicator_C*        K2Node_DynamicCast_AsSafe_Zone_Indicator                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents                                  (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASafeZoneIndicator_C*        K2Node_DynamicCast_AsSafe_Zone_Indicator1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGCNL_MegaStorm_DamageRing_C::ExecuteUbergraph_GCNL_MegaStorm_DamageRing(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, class AActor* K2Node_Event_MyTarget1, const struct FGameplayCueParameters& K2Node_Event_Parameters1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents1, float CallFunc_Multiply_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class ASafeZoneIndicator_C* K2Node_DynamicCast_AsSafe_Zone_Indicator, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, const struct FVector& CallFunc_MakeVector_ReturnValue, class ASafeZoneIndicator_C* K2Node_DynamicCast_AsSafe_Zone_Indicator1, bool K2Node_DynamicCast_bSuccess1, bool Temp_bool_IsClosed_Variable)
{
	static auto Func = Class->GetFunction("GCNL_MegaStorm_DamageRing_C", "ExecuteUbergraph_GCNL_MegaStorm_DamageRing");

	Params::AGCNL_MegaStorm_DamageRing_C_ExecuteUbergraph_GCNL_MegaStorm_DamageRing_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_Event_MyTarget1 = K2Node_Event_MyTarget1;
	Parms.K2Node_Event_Parameters1 = K2Node_Event_Parameters1;
	Parms.K2Node_Event_ParticleComponents1 = K2Node_Event_ParticleComponents1;
	Parms.K2Node_Event_AudioComponents1 = K2Node_Event_AudioComponents1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsSafe_Zone_Indicator = K2Node_DynamicCast_AsSafe_Zone_Indicator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsSafe_Zone_Indicator1 = K2Node_DynamicCast_AsSafe_Zone_Indicator1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
