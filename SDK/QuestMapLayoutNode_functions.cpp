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


// Function QuestMapLayoutNode.QuestMapLayoutNode_C.SetQuestTileProps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestMiniTile2_C*           K2Node_DynamicCast_AsQuest_Mini_Tile_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestMapLayoutNode_C::SetQuestTileProps(class UQuestMiniTile2_C* K2Node_DynamicCast_AsQuest_Mini_Tile_2, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("QuestMapLayoutNode_C", "SetQuestTileProps");

	Params::UQuestMapLayoutNode_C_SetQuestTileProps_Params Parms;
	Parms.K2Node_DynamicCast_AsQuest_Mini_Tile_2 = K2Node_DynamicCast_AsQuest_Mini_Tile_2;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestMapLayoutNode.QuestMapLayoutNode_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestMapLayoutNode_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("QuestMapLayoutNode_C", "PreConstruct");

	Params::UQuestMapLayoutNode_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestMapLayoutNode.QuestMapLayoutNode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestMapLayoutNode_C::Construct()
{
	static auto Func = Class->GetFunction("QuestMapLayoutNode_C", "Construct");

	Params::UQuestMapLayoutNode_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestMapLayoutNode.QuestMapLayoutNode_C.ExecuteUbergraph_QuestMapLayoutNode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestMapLayoutNode_C::ExecuteUbergraph_QuestMapLayoutNode(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("QuestMapLayoutNode_C", "ExecuteUbergraph_QuestMapLayoutNode");

	Params::UQuestMapLayoutNode_C_ExecuteUbergraph_QuestMapLayoutNode_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
