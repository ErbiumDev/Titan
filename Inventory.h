#pragma once
#include "Includes.h"
namespace Inventory {
	void Update() {
		GPlayerController->WorldInventory->HandleInventoryLocalUpdate();
		GPlayerController->HandleWorldInventoryLocalUpdate();
		GPlayerController->OnRep_QuickBar();
		GPlayerController->QuickBars->OnRep_PrimaryQuickBar();
		GPlayerController->QuickBars->OnRep_SecondaryQuickBar();
	}

	void EquipItem(UFortWorldItem* Weapon) {
		AFortWeapon* WeaponData = GPawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)Weapon->GetItemDefinitionBP(), Weapon->GetItemGuid());
		WeaponData->OnRep_ReplicatedWeaponData();
		WeaponData->ClientGivenTo(GPawn);
		GPawn->ClientInternalEquipWeapon(WeaponData);
	}

	UFortWorldItem* AddItemToInventory(UFortItemDefinition* ItemDef, int Slot = 0, EFortQuickBars QBs = EFortQuickBars::Primary, int Count = 1) {
		UFortWorldItem* Weapon = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 1);
		GPlayerController->WorldInventory->Inventory.ReplicatedEntries.Add(Weapon->ItemEntry);
		GPlayerController->WorldInventory->Inventory.ItemInstances.Add(Weapon);
		GPlayerController->QuickBars->ServerAddItemInternal(Weapon->GetItemGuid(), QBs, Slot);
		Update();
		return Weapon;
	}

	void EquipInventoryItem() {
		
	}

	void SetupInventory() {
		GPlayerController->QuickBars = reinterpret_cast<AFortQuickBars*>(GGameplayStatics->FinishSpawningActor(GGameplayStatics->BeginDeferredActorSpawnFromClass(GEngine->GameViewport->World, AFortQuickBars::StaticClass(), BaseTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, GPlayerController), BaseTransform));

		auto WorldInventory = GPlayerController->WorldInventory;
		auto Inventory = WorldInventory->Inventory;
		
		auto Pickaxe = GPlayerController->CustomizationLoadout.Pickaxe;
		UFortWeaponMeleeItemDefinition* PickaxeWeaponDef = nullptr;
		
		if (!Pickaxe) {
			Pickaxe = UObject::FindObject<UAthenaPickaxeItemDefinition>("AthenaPickaxeItemDefinition DefaultPickaxe.DefaultPickaxe");
			PickaxeWeaponDef = UObject::FindObject<UFortWeaponMeleeItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
		}
		else {
			if (!Pickaxe->WeaponDefinition || Pickaxe->GetName() == "Pickaxe_Random") {
				PickaxeWeaponDef = UObject::FindObject<UFortWeaponMeleeItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
			}
			else {
				PickaxeWeaponDef = Pickaxe->WeaponDefinition;
			}
		}

		LOG(("Equipping Pickaxe: " + Pickaxe->DisplayName.ToString()));

		EquipItem(AddItemToInventory(PickaxeWeaponDef, 0));
	}
}