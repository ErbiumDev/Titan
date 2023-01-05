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


// Function MRMesh.MeshReconstructorBase.StopReconstruction
// (Native, Public, BlueprintCallable)
// Parameters:

void UMeshReconstructorBase::StopReconstruction()
{
	static auto Func = Class->GetFunction("MeshReconstructorBase", "StopReconstruction");

	Params::UMeshReconstructorBase_StopReconstruction_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MRMesh.MeshReconstructorBase.StartReconstruction
// (Native, Public, BlueprintCallable)
// Parameters:

void UMeshReconstructorBase::StartReconstruction()
{
	static auto Func = Class->GetFunction("MeshReconstructorBase", "StartReconstruction");

	Params::UMeshReconstructorBase_StartReconstruction_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MRMesh.MeshReconstructorBase.PauseReconstruction
// (Native, Public, BlueprintCallable)
// Parameters:

void UMeshReconstructorBase::PauseReconstruction()
{
	static auto Func = Class->GetFunction("MeshReconstructorBase", "PauseReconstruction");

	Params::UMeshReconstructorBase_PauseReconstruction_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshReconstructorBase::IsReconstructionStarted()
{
	static auto Func = Class->GetFunction("MeshReconstructorBase", "IsReconstructionStarted");

	Params::UMeshReconstructorBase_IsReconstructionStarted_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshReconstructorBase::IsReconstructionPaused()
{
	static auto Func = Class->GetFunction("MeshReconstructorBase", "IsReconstructionPaused");

	Params::UMeshReconstructorBase_IsReconstructionPaused_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
// (Native, Public)
// Parameters:

void UMeshReconstructorBase::DisconnectMRMesh()
{
	static auto Func = Class->GetFunction("MeshReconstructorBase", "DisconnectMRMesh");

	Params::UMeshReconstructorBase_DisconnectMRMesh_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
// (Native, Public)
// Parameters:
// class UMRMeshComponent*            Mesh                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
{
	static auto Func = Class->GetFunction("MeshReconstructorBase", "ConnectMRMesh");

	Params::UMeshReconstructorBase_ConnectMRMesh_Params Parms;
	Parms.Mesh = Mesh;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MRMesh.MRMeshComponent.IsConnected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMRMeshComponent::IsConnected()
{
	static auto Func = Class->GetFunction("MRMeshComponent", "IsConnected");

	Params::UMRMeshComponent_IsConnected_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMRMeshComponent::ForceNavMeshUpdate()
{
	static auto Func = Class->GetFunction("MRMeshComponent", "ForceNavMeshUpdate");

	Params::UMRMeshComponent_ForceNavMeshUpdate_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MRMesh.MRMeshComponent.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMRMeshComponent::Clear()
{
	static auto Func = Class->GetFunction("MRMeshComponent", "Clear");

	Params::UMRMeshComponent_Clear_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
