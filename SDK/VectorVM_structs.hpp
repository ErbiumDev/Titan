#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVectorVMOp : uint8
{
	done                           = 0,
	add                            = 1,
	sub                            = 2,
	mul                            = 3,
	div                            = 4,
	mad                            = 5,
	lerp                           = 6,
	rcp                            = 7,
	rsq                            = 8,
	sqrt                           = 9,
	neg                            = 10,
	abs                            = 11,
	exp                            = 12,
	exp2                           = 13,
	log                            = 14,
	log2                           = 15,
	sin                            = 16,
	cos                            = 17,
	tan                            = 18,
	asin                           = 19,
	acos                           = 20,
	atan                           = 21,
	atan2                          = 22,
	ceil                           = 23,
	floor                          = 24,
	fmod                           = 25,
	frac                           = 26,
	trunc                          = 27,
	clamp                          = 28,
	min                            = 29,
	max                            = 30,
	pow                            = 31,
	round                          = 32,
	sign                           = 33,
	step                           = 34,
	random                         = 35,
	noise                          = 36,
	cmplt                          = 37,
	cmple                          = 38,
	cmpgt                          = 39,
	cmpge                          = 40,
	cmpeq                          = 41,
	cmpneq                         = 42,
	select                         = 43,
	addi                           = 44,
	subi                           = 45,
	muli                           = 46,
	clampi                         = 47,
	mini                           = 48,
	maxi                           = 49,
	absi                           = 50,
	negi                           = 51,
	signi                          = 52,
	randomi                        = 53,
	cmplti                         = 54,
	cmplei                         = 55,
	cmpgti                         = 56,
	cmpgei                         = 57,
	cmpeqi                         = 58,
	cmpneqi                        = 59,
	bit_and                        = 60,
	bit_or                         = 61,
	bit_xor                        = 62,
	bit_not                        = 63,
	logic_and                      = 64,
	logic_or                       = 65,
	logic_xor                      = 66,
	logic_not                      = 67,
	f2i                            = 68,
	i2f                            = 69,
	f2b                            = 70,
	b2f                            = 71,
	i2b                            = 72,
	b2i                            = 73,
	inputdata_32bit                = 74,
	inputdata_noadvance_32bit      = 75,
	outputdata_32bit               = 76,
	acquireindex                   = 77,
	external_func_call             = 78,
	exec_index                     = 79,
	noise2D                        = 80,
	noise3D                        = 81,
	enter_stat_scope               = 82,
	exit_stat_scope                = 83,
	update_id                      = 84,
	acquire_id                     = 85,
	NumOpcodes                     = 86,
};

enum class EVectorVMOperandLocation : uint8
{
	Register                       = 0,
	Constant                       = 1,
	Num                            = 2,
	EVectorVMOperandLocation_MAX   = 3,
};

enum class EVectorVMBaseTypes : uint8
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	Num                            = 3,
	EVectorVMBaseTypes_MAX         = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
