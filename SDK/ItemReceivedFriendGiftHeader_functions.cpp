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


// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedFriendGiftHeader_C::InitFromGiftBoxItem_BP()
{
	static auto Func = Class->GetFunction("ItemReceivedFriendGiftHeader_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedFriendGiftHeader_C_InitFromGiftBoxItem_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      SanitizedMsg                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UItemReceivedFriendGiftHeader_C::CustomEvent_0(bool bSuccess, const class FString& SanitizedMsg)
{
	static auto Func = Class->GetFunction("ItemReceivedFriendGiftHeader_C", "CustomEvent_0");

	Params::UItemReceivedFriendGiftHeader_C_CustomEvent_0_Params Parms;
	Parms.bSuccess = bSuccess;
	Parms.SanitizedMsg = SanitizedMsg;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedFriendGiftHeader_C::OnInitialized()
{
	static auto Func = Class->GetFunction("ItemReceivedFriendGiftHeader_C", "OnInitialized");

	Params::UItemReceivedFriendGiftHeader_C_OnInitialized_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.ExecuteUbergraph_ItemReceivedFriendGiftHeader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class FText                        CallFunc_Conv_StringToText_ReturnValue1                          ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerControllerID_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_SanitizedMsg                                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue2                          ()

void UItemReceivedFriendGiftHeader_C::ExecuteUbergraph_ItemReceivedFriendGiftHeader(int32 EntryPoint, class FText CallFunc_GetEmptyText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetPlayerControllerID_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_bSuccess, const class FString& K2Node_CustomEvent_SanitizedMsg, class FText CallFunc_Conv_StringToText_ReturnValue2)
{
	static auto Func = Class->GetFunction("ItemReceivedFriendGiftHeader_C", "ExecuteUbergraph_ItemReceivedFriendGiftHeader");

	Params::UItemReceivedFriendGiftHeader_C_ExecuteUbergraph_ItemReceivedFriendGiftHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue1 = CallFunc_Conv_StringToText_ReturnValue1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetPlayerControllerID_ReturnValue = CallFunc_GetPlayerControllerID_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CustomEvent_SanitizedMsg = K2Node_CustomEvent_SanitizedMsg;
	Parms.CallFunc_Conv_StringToText_ReturnValue2 = CallFunc_Conv_StringToText_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
