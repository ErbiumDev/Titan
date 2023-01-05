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

// 0x18 (0x18 - 0x0)
// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.SetTournamentToRepresent
struct UShowdownTournamentScreen_C_SetTournamentToRepresent_Params
{
public:
	class FString                                TournamentId;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.Handle_Back
struct UShowdownTournamentScreen_C_Handle_Back_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Handle_Back_PassThrough;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.Construct
struct UShowdownTournamentScreen_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.OnActivated
struct UShowdownTournamentScreen_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.BndEvt__ShowdownTournamentDetails_K2Node_ComponentBoundEvent_0_BackActionSelected__DelegateSignature
struct UShowdownTournamentScreen_C_BndEvt__ShowdownTournamentDetails_K2Node_ComponentBoundEvent_0_BackActionSelected__DelegateSignature_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.ExecuteUbergraph_ShowdownTournamentScreen
struct UShowdownTournamentScreen_C_ExecuteUbergraph_ShowdownTournamentScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Handle_Back_PassThrough;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
