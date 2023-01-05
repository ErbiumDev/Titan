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


// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeroLoadoutItemPedestal_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("HeroLoadoutItemPedestal_C", "UserConstructionScript");

	Params::AHeroLoadoutItemPedestal_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.HandleSlotFocusInUIChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHeroLoadoutItemPedestal_C::HandleSlotFocusInUIChanged()
{
	static auto Func = Class->GetFunction("HeroLoadoutItemPedestal_C", "HandleSlotFocusInUIChanged");

	Params::AHeroLoadoutItemPedestal_C_HandleSlotFocusInUIChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.OnHeroPawnSetupCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHeroLoadoutItemPedestal_C::OnHeroPawnSetupCompleted()
{
	static auto Func = Class->GetFunction("HeroLoadoutItemPedestal_C", "OnHeroPawnSetupCompleted");

	Params::AHeroLoadoutItemPedestal_C_OnHeroPawnSetupCompleted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.ExecuteUbergraph_HeroLoadoutItemPedestal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeroLoadoutItemPedestal_C::ExecuteUbergraph_HeroLoadoutItemPedestal(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("HeroLoadoutItemPedestal_C", "ExecuteUbergraph_HeroLoadoutItemPedestal");

	Params::AHeroLoadoutItemPedestal_C_ExecuteUbergraph_HeroLoadoutItemPedestal_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface = K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
