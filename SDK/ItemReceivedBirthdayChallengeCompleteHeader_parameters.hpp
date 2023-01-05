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
// Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.Construct
struct UItemReceivedBirthdayChallengeCompleteHeader_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature
struct UItemReceivedBirthdayChallengeCompleteHeader_C_BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader
struct UItemReceivedBirthdayChallengeCompleteHeader_C_ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CCE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
