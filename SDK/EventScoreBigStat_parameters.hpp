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

// 0x248 (0x248 - 0x0)
// Function EventScoreBigStat.EventScoreBigStat_C.SetData
struct UEventScoreBigStat_C_SetData_Params
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Value;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ValueContext;                                      // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  FormatterText;                                     // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortTournamentDisplayInfo            Tournament_Display_Info;                           // 0x38(0x170)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x1A8(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1C0(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x208(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x218(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue1;              // 0x230(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
