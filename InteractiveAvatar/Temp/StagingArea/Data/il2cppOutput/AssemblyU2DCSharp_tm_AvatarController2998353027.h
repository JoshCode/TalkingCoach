#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// tm.AvatarController
struct  AvatarController_t2998353027  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject tm.AvatarController::ed_targetAvatar
	GameObject_t1756533147 * ___ed_targetAvatar_2;
	// UnityEngine.GameObject[] tm.AvatarController::hairs
	GameObjectU5BU5D_t3057952154* ___hairs_3;
	// UnityEngine.GameObject[] tm.AvatarController::glasses
	GameObjectU5BU5D_t3057952154* ___glasses_4;
	// UnityEngine.GameObject[] tm.AvatarController::outfits
	GameObjectU5BU5D_t3057952154* ___outfits_5;
	// UnityEngine.GameObject[] tm.AvatarController::hideObjects
	GameObjectU5BU5D_t3057952154* ___hideObjects_6;
	// System.String[] tm.AvatarController::animationNames
	StringU5BU5D_t1642385972* ___animationNames_7;
	// UnityEngine.GameObject tm.AvatarController::wornHair
	GameObject_t1756533147 * ___wornHair_8;
	// UnityEngine.GameObject tm.AvatarController::wornGlasses
	GameObject_t1756533147 * ___wornGlasses_9;
	// UnityEngine.GameObject tm.AvatarController::wornOutfit
	GameObject_t1756533147 * ___wornOutfit_10;
	// System.Int32 tm.AvatarController::animIndex
	int32_t ___animIndex_11;
	// System.Int32 tm.AvatarController::hairIndex
	int32_t ___hairIndex_12;
	// System.Int32 tm.AvatarController::glassesIndex
	int32_t ___glassesIndex_13;
	// System.Int32 tm.AvatarController::outfitIndex
	int32_t ___outfitIndex_14;

public:
	inline static int32_t get_offset_of_ed_targetAvatar_2() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___ed_targetAvatar_2)); }
	inline GameObject_t1756533147 * get_ed_targetAvatar_2() const { return ___ed_targetAvatar_2; }
	inline GameObject_t1756533147 ** get_address_of_ed_targetAvatar_2() { return &___ed_targetAvatar_2; }
	inline void set_ed_targetAvatar_2(GameObject_t1756533147 * value)
	{
		___ed_targetAvatar_2 = value;
		Il2CppCodeGenWriteBarrier(&___ed_targetAvatar_2, value);
	}

	inline static int32_t get_offset_of_hairs_3() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___hairs_3)); }
	inline GameObjectU5BU5D_t3057952154* get_hairs_3() const { return ___hairs_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_hairs_3() { return &___hairs_3; }
	inline void set_hairs_3(GameObjectU5BU5D_t3057952154* value)
	{
		___hairs_3 = value;
		Il2CppCodeGenWriteBarrier(&___hairs_3, value);
	}

	inline static int32_t get_offset_of_glasses_4() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___glasses_4)); }
	inline GameObjectU5BU5D_t3057952154* get_glasses_4() const { return ___glasses_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_glasses_4() { return &___glasses_4; }
	inline void set_glasses_4(GameObjectU5BU5D_t3057952154* value)
	{
		___glasses_4 = value;
		Il2CppCodeGenWriteBarrier(&___glasses_4, value);
	}

	inline static int32_t get_offset_of_outfits_5() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___outfits_5)); }
	inline GameObjectU5BU5D_t3057952154* get_outfits_5() const { return ___outfits_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_outfits_5() { return &___outfits_5; }
	inline void set_outfits_5(GameObjectU5BU5D_t3057952154* value)
	{
		___outfits_5 = value;
		Il2CppCodeGenWriteBarrier(&___outfits_5, value);
	}

	inline static int32_t get_offset_of_hideObjects_6() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___hideObjects_6)); }
	inline GameObjectU5BU5D_t3057952154* get_hideObjects_6() const { return ___hideObjects_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_hideObjects_6() { return &___hideObjects_6; }
	inline void set_hideObjects_6(GameObjectU5BU5D_t3057952154* value)
	{
		___hideObjects_6 = value;
		Il2CppCodeGenWriteBarrier(&___hideObjects_6, value);
	}

	inline static int32_t get_offset_of_animationNames_7() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___animationNames_7)); }
	inline StringU5BU5D_t1642385972* get_animationNames_7() const { return ___animationNames_7; }
	inline StringU5BU5D_t1642385972** get_address_of_animationNames_7() { return &___animationNames_7; }
	inline void set_animationNames_7(StringU5BU5D_t1642385972* value)
	{
		___animationNames_7 = value;
		Il2CppCodeGenWriteBarrier(&___animationNames_7, value);
	}

	inline static int32_t get_offset_of_wornHair_8() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___wornHair_8)); }
	inline GameObject_t1756533147 * get_wornHair_8() const { return ___wornHair_8; }
	inline GameObject_t1756533147 ** get_address_of_wornHair_8() { return &___wornHair_8; }
	inline void set_wornHair_8(GameObject_t1756533147 * value)
	{
		___wornHair_8 = value;
		Il2CppCodeGenWriteBarrier(&___wornHair_8, value);
	}

	inline static int32_t get_offset_of_wornGlasses_9() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___wornGlasses_9)); }
	inline GameObject_t1756533147 * get_wornGlasses_9() const { return ___wornGlasses_9; }
	inline GameObject_t1756533147 ** get_address_of_wornGlasses_9() { return &___wornGlasses_9; }
	inline void set_wornGlasses_9(GameObject_t1756533147 * value)
	{
		___wornGlasses_9 = value;
		Il2CppCodeGenWriteBarrier(&___wornGlasses_9, value);
	}

	inline static int32_t get_offset_of_wornOutfit_10() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___wornOutfit_10)); }
	inline GameObject_t1756533147 * get_wornOutfit_10() const { return ___wornOutfit_10; }
	inline GameObject_t1756533147 ** get_address_of_wornOutfit_10() { return &___wornOutfit_10; }
	inline void set_wornOutfit_10(GameObject_t1756533147 * value)
	{
		___wornOutfit_10 = value;
		Il2CppCodeGenWriteBarrier(&___wornOutfit_10, value);
	}

	inline static int32_t get_offset_of_animIndex_11() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___animIndex_11)); }
	inline int32_t get_animIndex_11() const { return ___animIndex_11; }
	inline int32_t* get_address_of_animIndex_11() { return &___animIndex_11; }
	inline void set_animIndex_11(int32_t value)
	{
		___animIndex_11 = value;
	}

	inline static int32_t get_offset_of_hairIndex_12() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___hairIndex_12)); }
	inline int32_t get_hairIndex_12() const { return ___hairIndex_12; }
	inline int32_t* get_address_of_hairIndex_12() { return &___hairIndex_12; }
	inline void set_hairIndex_12(int32_t value)
	{
		___hairIndex_12 = value;
	}

	inline static int32_t get_offset_of_glassesIndex_13() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___glassesIndex_13)); }
	inline int32_t get_glassesIndex_13() const { return ___glassesIndex_13; }
	inline int32_t* get_address_of_glassesIndex_13() { return &___glassesIndex_13; }
	inline void set_glassesIndex_13(int32_t value)
	{
		___glassesIndex_13 = value;
	}

	inline static int32_t get_offset_of_outfitIndex_14() { return static_cast<int32_t>(offsetof(AvatarController_t2998353027, ___outfitIndex_14)); }
	inline int32_t get_outfitIndex_14() const { return ___outfitIndex_14; }
	inline int32_t* get_address_of_outfitIndex_14() { return &___outfitIndex_14; }
	inline void set_outfitIndex_14(int32_t value)
	{
		___outfitIndex_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
