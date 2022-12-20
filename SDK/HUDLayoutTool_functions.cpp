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


// Function HUDLayoutTool.HUDLayoutTool_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutTool_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HUDLayoutTool_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutTool_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutTool.HUDLayoutTool_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHUDLayoutTool_C::OnActivated()
{
	static auto Func = Class->GetFunction("HUDLayoutTool_C", "OnActivated");

	Params::UHUDLayoutTool_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutTool.HUDLayoutTool_C.Close Tool
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDLayoutTool_C::Close_Tool()
{
	static auto Func = Class->GetFunction("HUDLayoutTool_C", "Close Tool");

	Params::UHUDLayoutTool_C_Close_Tool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutTool.HUDLayoutTool_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDLayoutTool_C::Construct()
{
	static auto Func = Class->GetFunction("HUDLayoutTool_C", "Construct");

	Params::UHUDLayoutTool_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutTool.HUDLayoutTool_C.On Property State Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewlyOpen                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutTool_C::On_Property_State_Change(bool bNewlyOpen)
{
	static auto Func = Class->GetFunction("HUDLayoutTool_C", "On Property State Change");

	Params::UHUDLayoutTool_C_On_Property_State_Change_Params Parms;
	Parms.bNewlyOpen = bNewlyOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutTool.HUDLayoutTool_C.ExecuteUbergraph_HUDLayoutTool
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bNewlyOpen                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutTool_C::ExecuteUbergraph_HUDLayoutTool(int32 EntryPoint, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue12, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue123, bool K2Node_CustomEvent_bNewlyOpen, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HUDLayoutTool_C", "ExecuteUbergraph_HUDLayoutTool");

	Params::UHUDLayoutTool_C_ExecuteUbergraph_HUDLayoutTool_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.K2Node_CustomEvent_bNewlyOpen = K2Node_CustomEvent_bNewlyOpen;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
