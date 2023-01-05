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


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::Init(const class FString& EventId)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "Init");

	Params::UEventLeaderboardScreen_C_Init_Params Parms;
	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  TournamentDisplayInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventLeaderboardScreen_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "EventColorize");

	Params::UEventLeaderboardScreen_C_EventColorize_Params Parms;
	Parms.TournamentDisplayInfo = TournamentDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::EventIntro()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "EventIntro");

	Params::UEventLeaderboardScreen_C_EventIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardRequestUserInfoComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::OnLeaderboardRequestUserInfoComplete()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "OnLeaderboardRequestUserInfoComplete");

	Params::UEventLeaderboardScreen_C_OnLeaderboardRequestUserInfoComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_TournamentDisplayInfo                         ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::ExecuteUbergraph_EventLeaderboardScreen(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_TournamentDisplayInfo, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool Temp_bool_Variable, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "ExecuteUbergraph_EventLeaderboardScreen");

	Params::UEventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_TournamentDisplayInfo = K2Node_CustomEvent_TournamentDisplayInfo;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::EventCloseButton__DelegateSignature()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "EventCloseButton__DelegateSignature");

	Params::UEventLeaderboardScreen_C_EventCloseButton__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
