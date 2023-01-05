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


// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFoundMIDIDevice>    OutMIDIDevices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices)
{
	static auto Func = Class->GetFunction("MIDIDeviceManager", "FindMIDIDevices");

	Params::UMIDIDeviceManager_FindMIDIDevices_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutMIDIDevices != nullptr)
		*OutMIDIDevices = Parms.OutMIDIDevices;

}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              DeviceID                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MIDIBufferSize                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMIDIDeviceController*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMIDIDeviceController* UMIDIDeviceManager::CreateMIDIDeviceController(int32 DeviceID, int32 MIDIBufferSize)
{
	static auto Func = Class->GetFunction("MIDIDeviceManager", "CreateMIDIDeviceController");

	Params::UMIDIDeviceManager_CreateMIDIDeviceController_Params Parms;
	Parms.DeviceID = DeviceID;
	Parms.MIDIBufferSize = MIDIBufferSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
