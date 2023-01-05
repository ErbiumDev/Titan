#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x1B0 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnFocusReceived
struct UCreativeGameOptionMutatorKnobs_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.Construct
struct UCreativeGameOptionMutatorKnobs_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnActivated
struct UCreativeGameOptionMutatorKnobs_C_OnActivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnInputModeChanged
struct UCreativeGameOptionMutatorKnobs_C_OnInputModeChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.Close
struct UCreativeGameOptionMutatorKnobs_C_Close_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UCreativeGameOptionMutatorKnobs_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.HandleCancelClicked
struct UCreativeGameOptionMutatorKnobs_C_HandleCancelClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.AnimateIn
struct UCreativeGameOptionMutatorKnobs_C_AnimateIn_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnAnimationFinished
struct UCreativeGameOptionMutatorKnobs_C_OnAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.HandleNoOptionsLoaded
struct UCreativeGameOptionMutatorKnobs_C_HandleNoOptionsLoaded_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.BndEvt__OptionsList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
struct UCreativeGameOptionMutatorKnobs_C_BndEvt__OptionsList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHovered;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.ExecuteUbergraph_CreativeGameOptionMutatorKnobs
struct UCreativeGameOptionMutatorKnobs_C_ExecuteUbergraph_CreativeGameOptionMutatorKnobs_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bUsingGamepad;                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_585A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   CallFunc_GetDisplayedEntryWidgets_ReturnValue;     // 0x28(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_585B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMatchmakingSpinnerButton_C*     K2Node_DynamicCast_AsAthena_Matchmaking_Spinner_Button; // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_585C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_585D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue1;               // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_585E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      K2Node_Event_Animation;                            // 0x70(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x78(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               K2Node_ComponentBoundEvent_Item;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsHovered;             // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_585F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnCancel__DelegateSignature
struct UCreativeGameOptionMutatorKnobs_C_OnCancel__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C.OnAccept__DelegateSignature
struct UCreativeGameOptionMutatorKnobs_C_OnAccept__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
