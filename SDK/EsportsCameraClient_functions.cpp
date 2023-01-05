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


// Function EsportsCameraClient.EsportsCameraClient.SetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    MaterialInstanceDynamic                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEsportsCameraClient::SetDynamicMaterial(class UMaterialInstanceDynamic* MaterialInstanceDynamic)
{
	static auto Func = Class->GetFunction("EsportsCameraClient", "SetDynamicMaterial");

	Params::AEsportsCameraClient_SetDynamicMaterial_Params Parms;
	Parms.MaterialInstanceDynamic = MaterialInstanceDynamic;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function EsportsCameraClient.EsportsCameraClient.IsPlayingWebMovie
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AEsportsCameraClient::IsPlayingWebMovie()
{
	static auto Func = Class->GetFunction("EsportsCameraClient", "IsPlayingWebMovie");

	Params::AEsportsCameraClient_IsPlayingWebMovie_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EsportsCameraClient.EsportsCameraClient.IsPlatformEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AEsportsCameraClient::IsPlatformEnabled()
{
	static auto Func = Class->GetFunction("EsportsCameraClient", "IsPlatformEnabled");

	Params::AEsportsCameraClient_IsPlatformEnabled_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EsportsCameraClient.EsportsCameraClient.HasDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AEsportsCameraClient::HasDynamicMaterial()
{
	static auto Func = Class->GetFunction("EsportsCameraClient", "HasDynamicMaterial");

	Params::AEsportsCameraClient_HasDynamicMaterial_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EsportsCameraClient.EsportsCameraStatusBase.FollowedPlayerChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEsportsCameraClient*        InEsportsCameraClient                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEsportsCameraStatusBase::FollowedPlayerChanged(class AEsportsCameraClient* InEsportsCameraClient)
{
	static auto Func = Class->GetFunction("EsportsCameraStatusBase", "FollowedPlayerChanged");

	Params::UEsportsCameraStatusBase_FollowedPlayerChanged_Params Parms;
	Parms.InEsportsCameraClient = InEsportsCameraClient;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
