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
// Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.RefreshDataBP
struct UEventLeaderboardEventDetails_C_RefreshDataBP_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.ExecuteUbergraph_EventLeaderboardEventDetails
struct UEventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x8(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue1;                 // 0x20(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x78(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC8(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
