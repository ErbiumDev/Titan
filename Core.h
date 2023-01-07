#pragma once
#include "Hooks.h"

namespace Core {
	void Init() {
		FILE* K;
		AllocConsole();
		freopen_s(&K, "CONOUT$", "w", stdout);
		InitGObjects();
		LOG("ImageBase: " + std::to_string(__int64(GetModuleHandle(0))));
		Hooks::Init();
		BaseTransform.Scale3D = { 1,1,1 };
		GEngine = *reinterpret_cast<UFortEngine**>(uintptr_t(GetModuleHandle(0)) + Offsets::GEngine);
		GGameplayStatics = UObject::FindObjectFast<UGameplayStatics>("Default__GameplayStatics");
		Player::UpdatePlayerController();
		LOG("Basic Setup Complete!");
		Game::CreateConsole();
		LOG("Console Created!");
		GPlayerController->SwitchLevel(L"Athena_Terrain");
		LOG("Loading Game...");
	}
}