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


// Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedBirthdayChallengeCompleteHeader_C::Construct()
{
	static auto Func = Class->GetFunction("ItemReceivedBirthdayChallengeCompleteHeader_C", "Construct");

	Params::UItemReceivedBirthdayChallengeCompleteHeader_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedBirthdayChallengeCompleteHeader_C::BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemReceivedBirthdayChallengeCompleteHeader_C", "BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature");

	Params::UItemReceivedBirthdayChallengeCompleteHeader_C_BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedBirthdayChallengeCompleteHeader_C::ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("ItemReceivedBirthdayChallengeCompleteHeader_C", "ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader");

	Params::UItemReceivedBirthdayChallengeCompleteHeader_C_ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
