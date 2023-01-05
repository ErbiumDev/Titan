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

// 0x8 (0x350 - 0x348)
// BlueprintGeneratedClass Frontend_Lobby_Winter_BR.Frontend_Lobby_Winter_BR_C
class AFrontend_Lobby_Winter_BR_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Frontend_Lobby_Winter_BR_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_Lobby_Winter_BR(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
