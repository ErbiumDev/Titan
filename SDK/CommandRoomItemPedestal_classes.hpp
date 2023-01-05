#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x450 - 0x3F8)
// BlueprintGeneratedClass CommandRoomItemPedestal.CommandRoomItemPedestal_C
class ACommandRoomItemPedestal_C : public AFortCommandRoomPedestal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagQuery                     Animation_Tag_Query_Idle;                          // 0x408(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommandRoomItemPedestal_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnHeroPawnSetupCompleted();
	void ExecuteUbergraph_CommandRoomItemPedestal(int32 EntryPoint, UInterfaceProperty_ CallFunc_PlayAnimationsMatchingQuery_self_CastInput);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
