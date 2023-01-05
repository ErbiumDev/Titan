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


// Function DA_GuidedMissilePack.DA_GuidedMissilePack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADA_GuidedMissilePack_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("DA_GuidedMissilePack_C", "UserConstructionScript");

	Params::ADA_GuidedMissilePack_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DA_GuidedMissilePack.DA_GuidedMissilePack_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_GuidedMissilePack_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static auto Func = Class->GetFunction("DA_GuidedMissilePack_C", "BPPressTrigger");

	Params::ADA_GuidedMissilePack_C_BPPressTrigger_Params Parms;
	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DA_GuidedMissilePack.DA_GuidedMissilePack_C.ExecuteUbergraph_DA_GuidedMissilePack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_GuidedMissilePack_C::ExecuteUbergraph_DA_GuidedMissilePack(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper)
{
	static auto Func = Class->GetFunction("DA_GuidedMissilePack_C", "ExecuteUbergraph_DA_GuidedMissilePack");

	Params::ADA_GuidedMissilePack_C_ExecuteUbergraph_DA_GuidedMissilePack_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_Event_FortDecoHelper = K2Node_Event_FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
