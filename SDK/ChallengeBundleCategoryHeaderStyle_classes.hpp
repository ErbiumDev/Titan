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

// 0xC8 (0xF8 - 0x30)
// BlueprintGeneratedClass ChallengeBundleCategoryHeaderStyle.ChallengeBundleCategoryHeaderStyle_C
class UChallengeBundleCategoryHeaderStyle_C : public UPrimaryDataAsset
{
public:
	struct FChallengeBundleCategoryHeaderStyleStruct Style;                                             // 0x30(0xC1)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5753[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChallengeBundleCategoryHeaderStyle_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
