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

// 0x9 (0x9 - 0x0)
// Function QuestMapLayoutNode.QuestMapLayoutNode_C.SetQuestTileProps
struct UQuestMapLayoutNode_C_SetQuestTileProps_Params
{
public:
	class UQuestMiniTile2_C*                     K2Node_DynamicCast_AsQuest_Mini_Tile_2;            // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function QuestMapLayoutNode.QuestMapLayoutNode_C.PreConstruct
struct UQuestMapLayoutNode_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function QuestMapLayoutNode.QuestMapLayoutNode_C.Construct
struct UQuestMapLayoutNode_C_Construct_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function QuestMapLayoutNode.QuestMapLayoutNode_C.ExecuteUbergraph_QuestMapLayoutNode
struct UQuestMapLayoutNode_C_ExecuteUbergraph_QuestMapLayoutNode_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
