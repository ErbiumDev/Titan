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


// Function CreativeLobbyAd.CreativeLobbyAd_C.OnCMSDataUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreativeLobbyAd_C::OnCMSDataUpdated()
{
	static auto Func = Class->GetFunction("CreativeLobbyAd_C", "OnCMSDataUpdated");

	Params::UCreativeLobbyAd_C_OnCMSDataUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeLobbyAd.CreativeLobbyAd_C.ExecuteUbergraph_CreativeLobbyAd
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class FText                        CallFunc_Conv_StringToText_ReturnValue1                          ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// class FText                        CallFunc_TextToUpper_ReturnValue1                                ()
// class FText                        CallFunc_Conv_StringToText_ReturnValue2                          ()
// class FText                        CallFunc_TextToUpper_ReturnValue2                                ()

void UCreativeLobbyAd_C::ExecuteUbergraph_CreativeLobbyAd(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue2, class FText CallFunc_TextToUpper_ReturnValue2)
{
	static auto Func = Class->GetFunction("CreativeLobbyAd_C", "ExecuteUbergraph_CreativeLobbyAd");

	Params::UCreativeLobbyAd_C_ExecuteUbergraph_CreativeLobbyAd_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue1 = CallFunc_Conv_StringToText_ReturnValue1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;
	Parms.CallFunc_Conv_StringToText_ReturnValue2 = CallFunc_Conv_StringToText_ReturnValue2;
	Parms.CallFunc_TextToUpper_ReturnValue2 = CallFunc_TextToUpper_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
