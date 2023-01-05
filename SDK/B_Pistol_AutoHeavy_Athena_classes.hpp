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

// 0x8 (0xDE0 - 0xDD8)
// BlueprintGeneratedClass B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C
class AB_Pistol_AutoHeavy_Athena_C : public AB_Pistol_Auto_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Pistol_AutoHeavy_Athena_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnWeaponAttached();
	void ExecuteUbergraph_B_Pistol_AutoHeavy_Athena(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
