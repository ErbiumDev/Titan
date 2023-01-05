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

// 0x48 (0x70 - 0x28)
// Class CommonInput.CommonInputSubsystem
class UCommonInputSubsystem : public UGameInstanceSubsystem
{
public:
	UMulticastDelegateProperty_                  OnInputMethodChanged;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F21[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECommonInputType                  CurrentInputType;                                  // 0x50(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonGamepadType                GamepadInputType;                                  // 0x51(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F22[0x17];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsGamepadSimulatedClick;                          // 0x69(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F23[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputSubsystem");
		return Clss;
	}

	bool ShouldShowInputKeys();
	void SetGamepadInputType(enum class ECommonGamepadType InGamepadInputType);
	void SetCurrentInputType(enum class ECommonInputType NewInputType);
	bool IsUsingPointerInput();
	void InputMethodChangedDelegate__DelegateSignature(enum class ECommonInputType bNewInputType);
	enum class ECommonInputType GetDefaultInputType();
	enum class ECommonInputType GetCurrentInputType();
	enum class ECommonGamepadType GetCurrentGamepadType();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
