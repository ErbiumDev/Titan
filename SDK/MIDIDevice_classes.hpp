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

// 0x38 (0x60 - 0x28)
// Class MIDIDevice.MIDIDeviceController
class UMIDIDeviceController : public UObject
{
public:
	UMulticastDelegateProperty_                  OnMIDIEvent;                                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        DeviceID;                                          // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2A10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DeviceName;                                        // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2A11[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MIDIDeviceController");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MIDIDevice.MIDIDeviceManager
class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MIDIDeviceManager");
		return Clss;
	}

	void FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices);
	class UMIDIDeviceController* CreateMIDIDeviceController(int32 DeviceID, int32 MIDIBufferSize);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
