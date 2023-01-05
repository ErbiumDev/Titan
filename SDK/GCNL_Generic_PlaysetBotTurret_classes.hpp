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

// 0x8 (0x430 - 0x428)
// BlueprintGeneratedClass GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C
class AGCNL_Generic_PlaysetBotTurret_C : public AFortGameplayCueNotify_Looping
{
public:
	class ATrap_Floor_Turret_Parent_C*           BotTurret;                                         // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Generic_PlaysetBotTurret_C");
		return Clss;
	}

	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
