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

// 0x8 (0x938 - 0x930)
// BlueprintGeneratedClass GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C
class AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C : public AGC_Outlander_Phaseshift_AppliedFX_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x930(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Outlander_Phaseshift_PhaseSiphon_Dash_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
