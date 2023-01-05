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


// Function PublishModal.PublishModal_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UPublishModal_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("PublishModal_C", "OnMouseButtonDown_0");

	Params::UPublishModal_C_OnMouseButtonDown_0_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PublishModal.PublishModal_C.OnTextChanged_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPublishModal_C::OnTextChanged_Event_0(class FText& Text)
{
	static auto Func = Class->GetFunction("PublishModal_C", "OnTextChanged_Event_0");

	Params::UPublishModal_C_OnTextChanged_Event_0_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PublishModal.PublishModal_C.BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPublishModal_C::BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PublishModal_C", "BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UPublishModal_C_BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PublishModal.PublishModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPublishModal_C::Construct()
{
	static auto Func = Class->GetFunction("PublishModal_C", "Construct");

	Params::UPublishModal_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PublishModal.PublishModal_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPublishModal_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PublishModal_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::UPublishModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PublishModal.PublishModal_C.CustomEvent_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPublishModal_C::CustomEvent_0(class FText& Text)
{
	static auto Func = Class->GetFunction("PublishModal_C", "CustomEvent_0");

	Params::UPublishModal_C_CustomEvent_0_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PublishModal.PublishModal_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPublishModal_C::OnActivated()
{
	static auto Func = Class->GetFunction("PublishModal_C", "OnActivated");

	Params::UPublishModal_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PublishModal.PublishModal_C.OnValidCheckComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPublishModal_C::OnValidCheckComplete(bool bSuccess)
{
	static auto Func = Class->GetFunction("PublishModal_C", "OnValidCheckComplete");

	Params::UPublishModal_C_OnValidCheckComplete_Params Parms;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PublishModal.PublishModal_C.OnPublishError
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPublishModal_C::OnPublishError()
{
	static auto Func = Class->GetFunction("PublishModal_C", "OnPublishError");

	Params::UPublishModal_C_OnPublishError_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PublishModal.PublishModal_C.BndEvt__Button_Submit_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPublishModal_C::BndEvt__Button_Submit_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PublishModal_C", "BndEvt__Button_Submit_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UPublishModal_C_BndEvt__Button_Submit_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PublishModal.PublishModal_C.BndEvt__Button_CopyCode_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPublishModal_C::BndEvt__Button_CopyCode_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PublishModal_C", "BndEvt__Button_CopyCode_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UPublishModal_C_BndEvt__Button_CopyCode_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PublishModal.PublishModal_C.OnPublishBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPublishModal_C::OnPublishBegin()
{
	static auto Func = Class->GetFunction("PublishModal_C", "OnPublishBegin");

	Params::UPublishModal_C_OnPublishBegin_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PublishModal.PublishModal_C.OnCodeConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPublishModal_C::OnCodeConfirmation()
{
	static auto Func = Class->GetFunction("PublishModal_C", "OnCodeConfirmation");

	Params::UPublishModal_C_OnCodeConfirmation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PublishModal.PublishModal_C.ExecuteUbergraph_PublishModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text1                                         (ConstParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (ConstParm)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSuccess                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPublishModal_C::ExecuteUbergraph_PublishModal(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_CustomEvent_Text1, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class FText K2Node_CustomEvent_Text, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool K2Node_Event_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1)
{
	static auto Func = Class->GetFunction("PublishModal_C", "ExecuteUbergraph_PublishModal");

	Params::UPublishModal_C_ExecuteUbergraph_PublishModal_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Text1 = K2Node_CustomEvent_Text1;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_Event_bSuccess = K2Node_Event_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
