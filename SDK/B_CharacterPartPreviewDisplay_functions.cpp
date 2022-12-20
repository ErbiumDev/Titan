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


// Function B_CharacterPartPreviewDisplay.B_CharacterPartPreviewDisplay_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CharacterPartPreviewDisplay_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_CharacterPartPreviewDisplay_C", "UserConstructionScript");

	Params::AB_CharacterPartPreviewDisplay_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CharacterPartPreviewDisplay.B_CharacterPartPreviewDisplay_C.OnPreviewCosmeticItem
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CharacterPartPreviewDisplay_C::OnPreviewCosmeticItem()
{
	static auto Func = Class->GetFunction("B_CharacterPartPreviewDisplay_C", "OnPreviewCosmeticItem");

	Params::AB_CharacterPartPreviewDisplay_C_OnPreviewCosmeticItem_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CharacterPartPreviewDisplay.B_CharacterPartPreviewDisplay_C.ExecuteUbergraph_B_CharacterPartPreviewDisplay
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CharacterPartPreviewDisplay_C::ExecuteUbergraph_B_CharacterPartPreviewDisplay(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("B_CharacterPartPreviewDisplay_C", "ExecuteUbergraph_B_CharacterPartPreviewDisplay");

	Params::AB_CharacterPartPreviewDisplay_C_ExecuteUbergraph_B_CharacterPartPreviewDisplay_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue = CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
