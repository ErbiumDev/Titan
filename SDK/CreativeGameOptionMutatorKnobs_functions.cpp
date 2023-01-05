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


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UCreativeGameOptionMutatorKnobs_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "OnFocusReceived");

	Params::UCreativeGameOptionMutatorKnobs_C_OnFocusReceived_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreativeGameOptionMutatorKnobs_C::Construct()
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "Construct");

	Params::UCreativeGameOptionMutatorKnobs_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCreativeGameOptionMutatorKnobs_C::OnActivated()
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "OnActivated");

	Params::UCreativeGameOptionMutatorKnobs_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeGameOptionMutatorKnobs_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "OnInputModeChanged");

	Params::UCreativeGameOptionMutatorKnobs_C_OnInputModeChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeGameOptionMutatorKnobs_C::Close()
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "Close");

	Params::UCreativeGameOptionMutatorKnobs_C_Close_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeGameOptionMutatorKnobs_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UCreativeGameOptionMutatorKnobs_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.HandleCancelClicked
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreativeGameOptionMutatorKnobs_C::HandleCancelClicked()
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "HandleCancelClicked");

	Params::UCreativeGameOptionMutatorKnobs_C_HandleCancelClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.AnimateIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeGameOptionMutatorKnobs_C::AnimateIn()
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "AnimateIn");

	Params::UCreativeGameOptionMutatorKnobs_C_AnimateIn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeGameOptionMutatorKnobs_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "OnAnimationFinished");

	Params::UCreativeGameOptionMutatorKnobs_C_OnAnimationFinished_Params Parms;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.HandleNoOptionsLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeGameOptionMutatorKnobs_C::HandleNoOptionsLoaded()
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "HandleNoOptionsLoaded");

	Params::UCreativeGameOptionMutatorKnobs_C_HandleNoOptionsLoaded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.BndEvt__OptionsList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeGameOptionMutatorKnobs_C::BndEvt__OptionsList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "BndEvt__OptionsList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::UCreativeGameOptionMutatorKnobs_C_BndEvt__OptionsList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.ExecuteUbergraph_CreativeGameOptionMutatorKnobs
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ZeroConstructor, ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMatchmakingSpinnerButton_C*K2Node_DynamicCast_AsAthena_Matchmaking_Spinner_Button           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsHovered                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeGameOptionMutatorKnobs_C::ExecuteUbergraph_CreativeGameOptionMutatorKnobs(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bUsingGamepad, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UAthenaMatchmakingSpinnerButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Spinner_Button, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidgetAnimation* K2Node_Event_Animation, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsHovered, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue)
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "ExecuteUbergraph_CreativeGameOptionMutatorKnobs");

	Params::UCreativeGameOptionMutatorKnobs_C_ExecuteUbergraph_CreativeGameOptionMutatorKnobs_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Spinner_Button = K2Node_DynamicCast_AsAthena_Matchmaking_Spinner_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsHovered = K2Node_ComponentBoundEvent_bIsHovered;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeGameOptionMutatorKnobs_C::OnCancel__DelegateSignature()
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "OnCancel__DelegateSignature");

	Params::UCreativeGameOptionMutatorKnobs_C_OnCancel__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnAccept__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreativeGameOptionMutatorKnobs_C::OnAccept__DelegateSignature()
{
	static auto Func = Class->GetFunction("CreativeGameOptionMutatorKnobs_C", "OnAccept__DelegateSignature");

	Params::UCreativeGameOptionMutatorKnobs_C_OnAccept__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
