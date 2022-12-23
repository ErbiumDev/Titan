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

	int GetOpenSlot() {
		for (int i = 0; i < 6; i++) {
			if (GPlayerController->QuickBars->PrimaryQuickBar.Slots[i].Items.Data == nullptr) {
				return i;
			}
		}
		return -1;
	}

	int GetItemSlot(FGuid ItemGuid) {
		for (int i = 0; i < 6; i++) {
			if (GPlayerController->QuickBars->PrimaryQuickBar.Slots[i].Items.Data != nullptr && GPlayerController->QuickBars->PrimaryQuickBar.Slots[i].Items[0] == ItemGuid) {
				return i;
			}
		}
		return -1;
	}

	void EquipItem(UFortWorldItem* Weapon) {
		UFortWeaponItemDefinition* ItemDef = (UFortWeaponItemDefinition*)Weapon->GetItemDefinitionBP();
		//AGID Stuff
		static UFortAbilitySet* OldAbilitySet = nullptr;
		if (OldAbilitySet != nullptr) {
			for (int i = 0; i < OldAbilitySet->GameplayAbilities.Num(); i++) {
				UGameplayAbility* Ability = OldAbilitySet->GameplayAbilities[i];
				Abilities::RemoveAbility(Ability);
			}

			for (int i = 0; i < OldAbilitySet->GrantedGameplayEffects.Num(); i++) {
				FGameplayEffectApplicationInfoHard Effect = OldAbilitySet->GrantedGameplayEffects[i];
				Abilities::RemoveEffect((UGameplayEffect*)Effect.GameplayEffect.Get());
			}
		}
		if (ItemDef->IsA(UFortGadgetItemDefinition::StaticClass())) {
			UFortGadgetItemDefinition* Gadget = reinterpret_cast<UFortGadgetItemDefinition*>(ItemDef);
			ItemDef = (UFortWeaponItemDefinition*)Gadget->GetDecoItemDefinition();

			//Doesn't work :(
			/*if (Gadget->AbilitySet.Get() != nullptr) {
				UFortAbilitySet* AbilitySet = Gadget->AbilitySet.Get();
				for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); i++) {
					UGameplayAbility* Ability = AbilitySet->GameplayAbilities[i];
					Abilities::GrantAbility(Ability);
				}
				for (int i = 0; i < AbilitySet->GrantedGameplayEffects.Num(); i++) {
					FGameplayEffectApplicationInfoHard Effect = AbilitySet->GrantedGameplayEffects[i];
					Abilities::GrantEffect(Effect.GameplayEffect, Effect.Level);
				}
				OldAbilitySet = AbilitySet;
			}
			else {
				OldAbilitySet = nullptr;
			}

			if (Gadget->AnimBPOverride.Get() != nullptr) {
				UClass* AnimBPOverride = GPawn->AnimBPOverride.Get();
				AnimBPOverride = Gadget->AnimBPOverride.Get();
			}*/

			if (Gadget->CharacterParts.Data != nullptr) {
				static UCustomCharacterPart* EMPTY_Hat = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart Empty_Hat.Empty_Hat");
				static UCustomCharacterPart* EMPTY_Backpack = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart NoBackpack.NoBackpack");
				for (int i = 0; i < Gadget->CharacterParts.Num(); i++) {
					UCustomCharacterPart* Part = Gadget->CharacterParts[i];
					if (Part->CharacterPartType == EFortCustomPartType::Head) {
						GPawn->ServerChoosePart(EFortCustomPartType::Hat, EMPTY_Hat);
						GPawn->ServerChoosePart(EFortCustomPartType::Backpack, EMPTY_Backpack);
					}
					GPawn->ServerChoosePart(Part->CharacterPartType, Part);
				}
			}

			if (Gadget->GetName() == "AGID_CarminePack") {
				static UFortAbilitySet* AbilitySet = UObject::FindObject<UFortAbilitySet>("FortAbilitySet AS_CarminePack.AS_CarminePack");
				for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); i++) {
					UGameplayAbility* Ability = AbilitySet->GameplayAbilities[i];
					Abilities::GrantAbility(Ability);
				}
				for (int i = 0; i < AbilitySet->GrantedGameplayEffects.Num(); i++) {
					FGameplayEffectApplicationInfoHard Effect = AbilitySet->GrantedGameplayEffects[i];
					Abilities::GrantEffect(Effect.GameplayEffect, Effect.Level);
				}
				OldAbilitySet = AbilitySet;
				
				GPawn->SetAnimBPOverride(UObject::FindObject<UClass>("AnimBlueprintGeneratedClass Gauntlet_Player_AnimBlueprint.Gauntlet_Player_AnimBlueprint_C"));
			}
		}
		//Equip the Item
		AFortWeapon* WeaponData = GPawn->EquipWeaponDefinition(ItemDef, Weapon->GetItemGuid());
		//Weapon Sounds and Stuff like that
		WeaponData->OnRep_ReplicatedWeaponData();
		WeaponData->ClientGivenTo(GPawn);
		GPawn->ClientInternalEquipWeapon(WeaponData);
	}

	void SpawnPickup(UFortWorldItem* Item) {
		FTransform SpawnTransform = BaseTransform;
		SpawnTransform.Translation = GPawn->K2_GetActorLocation();
		AFortPickupAthena* Pickup = reinterpret_cast<AFortPickupAthena*>(GGameplayStatics->FinishSpawningActor(GGameplayStatics->BeginDeferredActorSpawnFromClass(GEngine->GameViewport->World, AFortPickupAthena::StaticClass(), SpawnTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, GPlayerController), SpawnTransform));
		Pickup->PrimaryPickupItemEntry = Item->ItemEntry;
		Pickup->OnRep_PrimaryPickupItemEntry();
		Pickup->TossPickup(GPawn->K2_GetActorLocation(), GPawn, Pickup->PrimaryPickupItemEntry.Count, true);
	}

	void DropItem(FGuid ItemGuid) {
		//Get the Slot the items in
		int ItemSlot = GetItemSlot(ItemGuid);
		//Remove the Item (and Spawn the Pickup)
		for (int i = 0; i < GPlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++) {
			if (GPlayerController->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemGuid == ItemGuid) {
				SpawnPickup(GPlayerController->WorldInventory->Inventory.ItemInstances[i]);
				GPlayerController->WorldInventory->Inventory.ItemInstances.RemoveAt(i);
				break;
			}
		}
		for (int i = 0; i < GPlayerController->WorldInventory->Inventory.ReplicatedEntries.Num(); i++) {
			if (GPlayerController->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == ItemGuid) {
				GPlayerController->WorldInventory->Inventory.ReplicatedEntries.RemoveAt(i);
				break;
			}
		}
		GPlayerController->QuickBars->ServerRemoveItemInternal(ItemGuid, false, true);
		GPlayerController->QuickBars->EmptySlot(EFortQuickBars::Primary, ItemSlot);
		//Free The Slot Data
		GPlayerController->QuickBars->PrimaryQuickBar.Slots[ItemSlot].Items.Data = nullptr;
		GPlayerController->QuickBars->PrimaryQuickBar.Slots[ItemSlot].Items.ResetNum();
		Update();
	}

	UFortWorldItem* AddItemToInventory(UFortItemDefinition* ItemDef, int Slot, int Count = 1, EFortQuickBars QBs = EFortQuickBars::Primary) {
		UFortWorldItem* Weapon = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 1);
		GPlayerController->WorldInventory->Inventory.ReplicatedEntries.Add(Weapon->ItemEntry);
		GPlayerController->WorldInventory->Inventory.ItemInstances.Add(Weapon);
		GPlayerController->QuickBars->ServerAddItemInternal(Weapon->GetItemGuid(), QBs, Slot);
		Update();
		return Weapon;
	}

	void HandleNewItem(UFortItemDefinition* ItemDef, int Count = 1) {
		int Slot = GetOpenSlot();
		if (Slot != -1) {
			AddItemToInventory(ItemDef, Slot, Count);
		}
		else {
			//Swap Logic
			FGuid CurrentSlot = {};
			if (GPlayerController->QuickBars->PrimaryQuickBar.CurrentFocusedSlot != 0) {
				CurrentSlot = GPlayerController->QuickBars->PrimaryQuickBar.Slots[GPlayerController->QuickBars->PrimaryQuickBar.CurrentFocusedSlot].Items[0];
			}
			else {
				CurrentSlot = GPlayerController->QuickBars->PrimaryQuickBar.Slots[1].Items[0];
			}

			DropItem(CurrentSlot);
			AddItemToInventory(ItemDef, GPlayerController->QuickBars->PrimaryQuickBar.CurrentFocusedSlot, Count);
		}
	}

	void EquipInventoryItem(FGuid ItemGuid) {
		for (int i = 0; i < GPlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++) {
			if (GPlayerController->WorldInventory->Inventory.ItemInstances[i]->GetItemGuid() == ItemGuid) {
				EquipItem(GPlayerController->WorldInventory->Inventory.ItemInstances[i]);
				break;
			}
		}
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