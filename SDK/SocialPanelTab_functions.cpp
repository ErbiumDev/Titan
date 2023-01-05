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


// Function SocialPanelTab.SocialPanelTab_C.PlayUnselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USocialPanelTab_C::PlayUnselected()
{
	static auto Func = Class->GetFunction("SocialPanelTab_C", "PlayUnselected");

	Params::USocialPanelTab_C_PlayUnselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanelTab.SocialPanelTab_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanelTab_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("SocialPanelTab_C", "BP_OnHovered");

	Params::USocialPanelTab_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanelTab.SocialPanelTab_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanelTab_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("SocialPanelTab_C", "BP_OnUnhovered");

	Params::USocialPanelTab_C_BP_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanelTab.SocialPanelTab_C.PlaySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USocialPanelTab_C::PlaySelected()
{
	static auto Func = Class->GetFunction("SocialPanelTab_C", "PlaySelected");

	Params::USocialPanelTab_C_PlaySelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanelTab.SocialPanelTab_C.ExecuteUbergraph_SocialPanelTab
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanelTab_C::ExecuteUbergraph_SocialPanelTab(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3)
{
	static auto Func = Class->GetFunction("SocialPanelTab_C", "ExecuteUbergraph_SocialPanelTab");

	Params::USocialPanelTab_C_ExecuteUbergraph_SocialPanelTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;
	Parms.CallFunc_PlayAnimation_ReturnValue3 = CallFunc_PlayAnimation_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
