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


// Function TimelineMarker.TimelineMarker_C.Jump To Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimelineMarker_C::Jump_To_Marker(class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("TimelineMarker_C", "Jump To Marker");

	Params::UTimelineMarker_C_Jump_To_Marker_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimelineMarker.TimelineMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTimelineMarker_C::Construct()
{
	static auto Func = Class->GetFunction("TimelineMarker_C", "Construct");

	Params::UTimelineMarker_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimelineMarker.TimelineMarker_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTimelineMarker_C::OnHovered()
{
	static auto Func = Class->GetFunction("TimelineMarker_C", "OnHovered");

	Params::UTimelineMarker_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimelineMarker.TimelineMarker_C.OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTimelineMarker_C::OnUnhovered()
{
	static auto Func = Class->GetFunction("TimelineMarker_C", "OnUnhovered");

	Params::UTimelineMarker_C_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimelineMarker.TimelineMarker_C.OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTimelineMarker_C::OnClicked()
{
	static auto Func = Class->GetFunction("TimelineMarker_C", "OnClicked");

	Params::UTimelineMarker_C_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimelineMarker.TimelineMarker_C.ExecuteUbergraph_TimelineMarker
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortReplayEventType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UTimelineMarker_C::ExecuteUbergraph_TimelineMarker(int32 EntryPoint, enum class EFortReplayEventType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, class UTexture2D* Temp_object_Variable12, class UTexture2D* K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("TimelineMarker_C", "ExecuteUbergraph_TimelineMarker");

	Params::UTimelineMarker_C_ExecuteUbergraph_TimelineMarker_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
