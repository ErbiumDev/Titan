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
// Function CreativeLobbyAd.CreativeLobbyAd_C.OnCMSDataUpdated
struct UCreativeLobbyAd_C_OnCMSDataUpdated_Params
{
public:
};

// 0x98 (0x98 - 0x0)
// Function CreativeLobbyAd.CreativeLobbyAd_C.ExecuteUbergraph_CreativeLobbyAd
struct UCreativeLobbyAd_C_ExecuteUbergraph_CreativeLobbyAd_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue1;           // 0x20(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x38(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue1;                 // 0x50(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue2;           // 0x68(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue2;                 // 0x80(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
