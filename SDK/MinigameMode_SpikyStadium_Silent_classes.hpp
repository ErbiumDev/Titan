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

// 0x8 (0x6A8 - 0x6A0)
// BlueprintGeneratedClass MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C
class AMinigameMode_SpikyStadium_Silent_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinigameMode_SpikyStadium_Silent_C");
		return Clss;
	}

	void UserConstructionScript();
	void HandleMinigameStarted();
	void HandleMinigameWarmup();
	void HandleMinigameEnded();
	void ExecuteUbergraph_MinigameMode_SpikyStadium_Silent(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
