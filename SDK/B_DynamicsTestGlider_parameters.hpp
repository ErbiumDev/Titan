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

// 0x0 (0x0 - 0x0)
// Function B_DynamicsTestGlider.B_DynamicsTestGlider_C.UserConstructionScript
struct AB_DynamicsTestGlider_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_DynamicsTestGlider.B_DynamicsTestGlider_C.ReceiveBeginPlay
struct AB_DynamicsTestGlider_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_DynamicsTestGlider.B_DynamicsTestGlider_C.FireDynamics
struct AB_DynamicsTestGlider_C_FireDynamics_Params
{
public:
};

// 0x29 (0x29 - 0x0)
// Function B_DynamicsTestGlider.B_DynamicsTestGlider_C.ExecuteUbergraph_B_DynamicsTestGlider
struct AB_DynamicsTestGlider_C_ExecuteUbergraph_B_DynamicsTestGlider_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EEE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVinderTech_GliderChute_AnimBP_C*      K2Node_DynamicCast_AsVinder_Tech_Glider_Chute_Anim_BP; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
