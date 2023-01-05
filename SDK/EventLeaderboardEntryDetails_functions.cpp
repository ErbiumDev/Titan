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


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  TournamentDisplayInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventLeaderboardEntryDetails_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static auto Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "EventColorize");

	Params::UEventLeaderboardEntryDetails_C_EventColorize_Params Parms;
	Parms.TournamentDisplayInfo = TournamentDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardEntryDetails_C::EventIntro()
{
	static auto Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "EventIntro");

	Params::UEventLeaderboardEntryDetails_C_EventIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ExecuteUbergraph_EventLeaderboardEntryDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_TournamentDisplayInfo                         ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    ()

void UEventLeaderboardEntryDetails_C::ExecuteUbergraph_EventLeaderboardEntryDetails(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_TournamentDisplayInfo, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateColor& K2Node_MakeStruct_SlateColor1)
{
	static auto Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "ExecuteUbergraph_EventLeaderboardEntryDetails");

	Params::UEventLeaderboardEntryDetails_C_ExecuteUbergraph_EventLeaderboardEntryDetails_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CustomEvent_TournamentDisplayInfo = K2Node_CustomEvent_TournamentDisplayInfo;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
