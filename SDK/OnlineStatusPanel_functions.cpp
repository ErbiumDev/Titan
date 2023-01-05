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


// Function OnlineStatusPanel.OnlineStatusPanel_C.OnFocused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOnlineStatusPanel_C::OnFocused()
{
	static auto Func = Class->GetFunction("OnlineStatusPanel_C", "OnFocused");

	Params::UOnlineStatusPanel_C_OnFocused_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineStatusPanel.OnlineStatusPanel_C.ExecuteUbergraph_OnlineStatusPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOnlineStatusPanel_C::ExecuteUbergraph_OnlineStatusPanel(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("OnlineStatusPanel_C", "ExecuteUbergraph_OnlineStatusPanel");

	Params::UOnlineStatusPanel_C_ExecuteUbergraph_OnlineStatusPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
