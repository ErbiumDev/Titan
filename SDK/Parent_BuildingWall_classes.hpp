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

// 0x18 (0xDA8 - 0xD90)
// BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C
class AParent_BuildingWall_C : public ABuildingWall
{
public:
	struct FVector                               BuildingBoundsMax;                                 // 0xD90(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               BuildingBoundsMin;                                 // 0xD9C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Parent_BuildingWall_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
