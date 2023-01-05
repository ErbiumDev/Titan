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


// Function CircleArrowButton.CircleArrowButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCircleArrowButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("CircleArrowButton_C", "PreConstruct");

	Params::UCircleArrowButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCircleArrowButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("CircleArrowButton_C", "BP_OnHovered");

	Params::UCircleArrowButton_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCircleArrowButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("CircleArrowButton_C", "BP_OnUnhovered");

	Params::UCircleArrowButton_C_BP_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCircleArrowButton_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("CircleArrowButton_C", "BP_OnClicked");

	Params::UCircleArrowButton_C_BP_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CircleArrowButton.CircleArrowButton_C.ExecuteUbergraph_CircleArrowButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCircleArrowButton_C::ExecuteUbergraph_CircleArrowButton(int32 EntryPoint, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, bool K2Node_Event_IsDesignTime, const struct FVector2D& K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2)
{
	static auto Func = Class->GetFunction("CircleArrowButton_C", "ExecuteUbergraph_CircleArrowButton");

	Params::UCircleArrowButton_C_ExecuteUbergraph_CircleArrowButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
