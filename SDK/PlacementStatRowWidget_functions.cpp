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


// Function PlacementStatRowWidget.PlacementStatRowWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlacementStatRowWidget_C::OnStatChanged()
{
	static auto Func = Class->GetFunction("PlacementStatRowWidget_C", "OnStatChanged");

	Params::UPlacementStatRowWidget_C_OnStatChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlacementStatRowWidget.PlacementStatRowWidget_C.ExecuteUbergraph_PlacementStatRowWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaBaseStatView*         CallFunc_GetBaseStatView_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIStatStyle            CallFunc_GetStatStyle_ReturnValue                                (ConstParm)
// float                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlacementStatRowWidget_C::ExecuteUbergraph_PlacementStatRowWidget(int32 EntryPoint, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, float CallFunc_GetStat_ReturnValue)
{
	static auto Func = Class->GetFunction("PlacementStatRowWidget_C", "ExecuteUbergraph_PlacementStatRowWidget");

	Params::UPlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBaseStatView_ReturnValue = CallFunc_GetBaseStatView_ReturnValue;
	Parms.CallFunc_GetStatStyle_ReturnValue = CallFunc_GetStatStyle_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
