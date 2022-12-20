#pragma once
#include <Windows.h>
#include <string>
#include <fstream>
#include "SDK.hpp"

using namespace SDK;

//Globals
UFortEngine* GEngine = nullptr;
AFortPlayerControllerAthena* GPlayerController = nullptr;
APlayerPawn_Athena_C* GPawn = nullptr;
UGameplayStatics* GGameplayStatics = nullptr;

//Consts
static auto BaseTransform = FTransform{};
static bool bInGame = false;
static bool bLSDropped = false;

#define LOG(msg) std::cout << "\n[Titan]: " << msg << std::endl

void Dump() {
	std::ofstream Log("Objects.dump");
	for (int i = 0; i < UObject::GObjects->Num(); i++) {
		auto Object = UObject::GObjects->GetByIndex(i);
		if (Object) {
			Log << Object->GetFullName() << std::endl;
		}
	}
}

UObject* (*CreateDefaultObject)(UClass*);