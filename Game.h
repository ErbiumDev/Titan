#pragma once
#include "Includes.h"
#include "Abilities.h"
#include "Inventory.h"

namespace Player {
	void UpdatePlayerController() {
		GPlayerController = (AFortPlayerControllerAthena*)GEngine->GameInstance->LocalPlayers[0]->PlayerController;
	}

	void SetupPawn() {
		FTransform SpawnPos = BaseTransform;
		TArray<AActor*> Spawns = {};
		//SpawnPos.Translation = GEngine->GameViewport->World->AuthorityGameMode->K2_FindPlayerStart(GPlayerController, L"")->K2_GetActorLocation(); (Does not work)
		SpawnPos.Translation = { 1,1,10000 };
		GPawn = reinterpret_cast<APlayerPawn_Athena_C*>(GGameplayStatics->FinishSpawningActor(GGameplayStatics->BeginDeferredActorSpawnFromClass(GEngine->GameViewport->World, APlayerPawn_Athena_C::StaticClass(), SpawnPos, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, nullptr), SpawnPos));
		GPlayerController->Possess(GPawn);
	}

	void ShowSkin() {
		AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)GPlayerController->PlayerState;
		UFortHero* Hero = GPlayerController->StrongMyHero;
		for (int i = 0; i < Hero->CharacterParts.Num(); i++) {
			UCustomCharacterPart* Part = Hero->CharacterParts[i];
			GPawn->ServerChoosePart(Part->CharacterPartType, Part);
		}
		PlayerState->OnRep_CharacterParts();
	}

	void GrantDefaultAbilities() {
		UFortAbilitySet* GAS = UObject::FindObject<UFortAbilitySet>("FortAbilitySet GAS_DefaultPlayer.GAS_DefaultPlayer");

		for (int i = 0; i < GAS->GameplayAbilities.Num(); i++) {
			auto GAB = GAS->GameplayAbilities[i];
			if (GAB) {
				Abilities::GrantAbility(GAB);
			}
		}
	}
}

namespace Game {
	void CreateConsole() {
		GEngine->GameViewport->ViewportConsole = reinterpret_cast<UConsole*>(GGameplayStatics->SpawnObject(UConsole::StaticClass(), GEngine->GameViewport));
	}

	void CreateCheatManager() {
		GPlayerController->CheatManager = reinterpret_cast<UCheatManager*>(GGameplayStatics->SpawnObject(UCheatManager::StaticClass(), GPlayerController));
	}
}