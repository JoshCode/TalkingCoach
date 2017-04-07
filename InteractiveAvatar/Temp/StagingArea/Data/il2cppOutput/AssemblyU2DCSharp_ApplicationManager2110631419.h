#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animation
struct Animation_t2068071072;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Item>
struct List_1_t1809589323;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// AudioButton
struct AudioButton_t149128938;
// ApplicationManager
struct ApplicationManager_t2110631419;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3079764780;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_CoachType1690784862.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ApplicationManager
struct  ApplicationManager_t2110631419  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ApplicationManager::coach_prefabs
	List_1_t1125654279 * ___coach_prefabs_2;
	// UnityEngine.GameObject ApplicationManager::coach_holder
	GameObject_t1756533147 * ___coach_holder_3;
	// UnityEngine.GameObject ApplicationManager::backround_holder
	GameObject_t1756533147 * ___backround_holder_4;
	// UnityEngine.GameObject ApplicationManager::new_coach
	GameObject_t1756533147 * ___new_coach_5;
	// UnityEngine.Animation ApplicationManager::animation
	Animation_t2068071072 * ___animation_6;
	// UnityEngine.Sprite[] ApplicationManager::backgroundTexture
	SpriteU5BU5D_t3359083662* ___backgroundTexture_7;
	// UnityEngine.SpriteRenderer ApplicationManager::backgroundSprit
	SpriteRenderer_t1209076198 * ___backgroundSprit_8;
	// System.String ApplicationManager::idle
	String_t* ___idle_9;
	// System.String ApplicationManager::talk
	String_t* ___talk_10;
	// System.String ApplicationManager::talkmix
	String_t* ___talkmix_11;
	// System.Collections.Generic.List`1<Item> ApplicationManager::itemList
	List_1_t1809589323 * ___itemList_12;
	// UnityEngine.Transform ApplicationManager::contentPanel
	Transform_t3275118058 * ___contentPanel_13;
	// UnityEngine.AudioSource ApplicationManager::audio_source
	AudioSource_t1135106623 * ___audio_source_14;
	// UnityEngine.GameObject ApplicationManager::audioButton
	GameObject_t1756533147 * ___audioButton_15;
	// UnityEngine.GameObject ApplicationManager::changeModelButton
	GameObject_t1756533147 * ___changeModelButton_16;
	// AudioButton ApplicationManager::start
	AudioButton_t149128938 * ___start_17;
	// AudioButton ApplicationManager::stop
	AudioButton_t149128938 * ___stop_18;
	// UnityEngine.Camera[] ApplicationManager::cams
	CameraU5BU5D_t3079764780* ___cams_20;
	// System.Single ApplicationManager::timeOut
	float ___timeOut_21;
	// System.Single ApplicationManager::timeOutTimer
	float ___timeOutTimer_22;
	// System.Int32 ApplicationManager::coach_number
	int32_t ___coach_number_23;
	// System.Int32 ApplicationManager::backround_number
	int32_t ___backround_number_24;
	// CoachType ApplicationManager::coach_type
	int32_t ___coach_type_25;

public:
	inline static int32_t get_offset_of_coach_prefabs_2() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___coach_prefabs_2)); }
	inline List_1_t1125654279 * get_coach_prefabs_2() const { return ___coach_prefabs_2; }
	inline List_1_t1125654279 ** get_address_of_coach_prefabs_2() { return &___coach_prefabs_2; }
	inline void set_coach_prefabs_2(List_1_t1125654279 * value)
	{
		___coach_prefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___coach_prefabs_2, value);
	}

	inline static int32_t get_offset_of_coach_holder_3() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___coach_holder_3)); }
	inline GameObject_t1756533147 * get_coach_holder_3() const { return ___coach_holder_3; }
	inline GameObject_t1756533147 ** get_address_of_coach_holder_3() { return &___coach_holder_3; }
	inline void set_coach_holder_3(GameObject_t1756533147 * value)
	{
		___coach_holder_3 = value;
		Il2CppCodeGenWriteBarrier(&___coach_holder_3, value);
	}

	inline static int32_t get_offset_of_backround_holder_4() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___backround_holder_4)); }
	inline GameObject_t1756533147 * get_backround_holder_4() const { return ___backround_holder_4; }
	inline GameObject_t1756533147 ** get_address_of_backround_holder_4() { return &___backround_holder_4; }
	inline void set_backround_holder_4(GameObject_t1756533147 * value)
	{
		___backround_holder_4 = value;
		Il2CppCodeGenWriteBarrier(&___backround_holder_4, value);
	}

	inline static int32_t get_offset_of_new_coach_5() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___new_coach_5)); }
	inline GameObject_t1756533147 * get_new_coach_5() const { return ___new_coach_5; }
	inline GameObject_t1756533147 ** get_address_of_new_coach_5() { return &___new_coach_5; }
	inline void set_new_coach_5(GameObject_t1756533147 * value)
	{
		___new_coach_5 = value;
		Il2CppCodeGenWriteBarrier(&___new_coach_5, value);
	}

	inline static int32_t get_offset_of_animation_6() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___animation_6)); }
	inline Animation_t2068071072 * get_animation_6() const { return ___animation_6; }
	inline Animation_t2068071072 ** get_address_of_animation_6() { return &___animation_6; }
	inline void set_animation_6(Animation_t2068071072 * value)
	{
		___animation_6 = value;
		Il2CppCodeGenWriteBarrier(&___animation_6, value);
	}

	inline static int32_t get_offset_of_backgroundTexture_7() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___backgroundTexture_7)); }
	inline SpriteU5BU5D_t3359083662* get_backgroundTexture_7() const { return ___backgroundTexture_7; }
	inline SpriteU5BU5D_t3359083662** get_address_of_backgroundTexture_7() { return &___backgroundTexture_7; }
	inline void set_backgroundTexture_7(SpriteU5BU5D_t3359083662* value)
	{
		___backgroundTexture_7 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundTexture_7, value);
	}

	inline static int32_t get_offset_of_backgroundSprit_8() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___backgroundSprit_8)); }
	inline SpriteRenderer_t1209076198 * get_backgroundSprit_8() const { return ___backgroundSprit_8; }
	inline SpriteRenderer_t1209076198 ** get_address_of_backgroundSprit_8() { return &___backgroundSprit_8; }
	inline void set_backgroundSprit_8(SpriteRenderer_t1209076198 * value)
	{
		___backgroundSprit_8 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundSprit_8, value);
	}

	inline static int32_t get_offset_of_idle_9() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___idle_9)); }
	inline String_t* get_idle_9() const { return ___idle_9; }
	inline String_t** get_address_of_idle_9() { return &___idle_9; }
	inline void set_idle_9(String_t* value)
	{
		___idle_9 = value;
		Il2CppCodeGenWriteBarrier(&___idle_9, value);
	}

	inline static int32_t get_offset_of_talk_10() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___talk_10)); }
	inline String_t* get_talk_10() const { return ___talk_10; }
	inline String_t** get_address_of_talk_10() { return &___talk_10; }
	inline void set_talk_10(String_t* value)
	{
		___talk_10 = value;
		Il2CppCodeGenWriteBarrier(&___talk_10, value);
	}

	inline static int32_t get_offset_of_talkmix_11() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___talkmix_11)); }
	inline String_t* get_talkmix_11() const { return ___talkmix_11; }
	inline String_t** get_address_of_talkmix_11() { return &___talkmix_11; }
	inline void set_talkmix_11(String_t* value)
	{
		___talkmix_11 = value;
		Il2CppCodeGenWriteBarrier(&___talkmix_11, value);
	}

	inline static int32_t get_offset_of_itemList_12() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___itemList_12)); }
	inline List_1_t1809589323 * get_itemList_12() const { return ___itemList_12; }
	inline List_1_t1809589323 ** get_address_of_itemList_12() { return &___itemList_12; }
	inline void set_itemList_12(List_1_t1809589323 * value)
	{
		___itemList_12 = value;
		Il2CppCodeGenWriteBarrier(&___itemList_12, value);
	}

	inline static int32_t get_offset_of_contentPanel_13() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___contentPanel_13)); }
	inline Transform_t3275118058 * get_contentPanel_13() const { return ___contentPanel_13; }
	inline Transform_t3275118058 ** get_address_of_contentPanel_13() { return &___contentPanel_13; }
	inline void set_contentPanel_13(Transform_t3275118058 * value)
	{
		___contentPanel_13 = value;
		Il2CppCodeGenWriteBarrier(&___contentPanel_13, value);
	}

	inline static int32_t get_offset_of_audio_source_14() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___audio_source_14)); }
	inline AudioSource_t1135106623 * get_audio_source_14() const { return ___audio_source_14; }
	inline AudioSource_t1135106623 ** get_address_of_audio_source_14() { return &___audio_source_14; }
	inline void set_audio_source_14(AudioSource_t1135106623 * value)
	{
		___audio_source_14 = value;
		Il2CppCodeGenWriteBarrier(&___audio_source_14, value);
	}

	inline static int32_t get_offset_of_audioButton_15() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___audioButton_15)); }
	inline GameObject_t1756533147 * get_audioButton_15() const { return ___audioButton_15; }
	inline GameObject_t1756533147 ** get_address_of_audioButton_15() { return &___audioButton_15; }
	inline void set_audioButton_15(GameObject_t1756533147 * value)
	{
		___audioButton_15 = value;
		Il2CppCodeGenWriteBarrier(&___audioButton_15, value);
	}

	inline static int32_t get_offset_of_changeModelButton_16() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___changeModelButton_16)); }
	inline GameObject_t1756533147 * get_changeModelButton_16() const { return ___changeModelButton_16; }
	inline GameObject_t1756533147 ** get_address_of_changeModelButton_16() { return &___changeModelButton_16; }
	inline void set_changeModelButton_16(GameObject_t1756533147 * value)
	{
		___changeModelButton_16 = value;
		Il2CppCodeGenWriteBarrier(&___changeModelButton_16, value);
	}

	inline static int32_t get_offset_of_start_17() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___start_17)); }
	inline AudioButton_t149128938 * get_start_17() const { return ___start_17; }
	inline AudioButton_t149128938 ** get_address_of_start_17() { return &___start_17; }
	inline void set_start_17(AudioButton_t149128938 * value)
	{
		___start_17 = value;
		Il2CppCodeGenWriteBarrier(&___start_17, value);
	}

	inline static int32_t get_offset_of_stop_18() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___stop_18)); }
	inline AudioButton_t149128938 * get_stop_18() const { return ___stop_18; }
	inline AudioButton_t149128938 ** get_address_of_stop_18() { return &___stop_18; }
	inline void set_stop_18(AudioButton_t149128938 * value)
	{
		___stop_18 = value;
		Il2CppCodeGenWriteBarrier(&___stop_18, value);
	}

	inline static int32_t get_offset_of_cams_20() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___cams_20)); }
	inline CameraU5BU5D_t3079764780* get_cams_20() const { return ___cams_20; }
	inline CameraU5BU5D_t3079764780** get_address_of_cams_20() { return &___cams_20; }
	inline void set_cams_20(CameraU5BU5D_t3079764780* value)
	{
		___cams_20 = value;
		Il2CppCodeGenWriteBarrier(&___cams_20, value);
	}

	inline static int32_t get_offset_of_timeOut_21() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___timeOut_21)); }
	inline float get_timeOut_21() const { return ___timeOut_21; }
	inline float* get_address_of_timeOut_21() { return &___timeOut_21; }
	inline void set_timeOut_21(float value)
	{
		___timeOut_21 = value;
	}

	inline static int32_t get_offset_of_timeOutTimer_22() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___timeOutTimer_22)); }
	inline float get_timeOutTimer_22() const { return ___timeOutTimer_22; }
	inline float* get_address_of_timeOutTimer_22() { return &___timeOutTimer_22; }
	inline void set_timeOutTimer_22(float value)
	{
		___timeOutTimer_22 = value;
	}

	inline static int32_t get_offset_of_coach_number_23() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___coach_number_23)); }
	inline int32_t get_coach_number_23() const { return ___coach_number_23; }
	inline int32_t* get_address_of_coach_number_23() { return &___coach_number_23; }
	inline void set_coach_number_23(int32_t value)
	{
		___coach_number_23 = value;
	}

	inline static int32_t get_offset_of_backround_number_24() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___backround_number_24)); }
	inline int32_t get_backround_number_24() const { return ___backround_number_24; }
	inline int32_t* get_address_of_backround_number_24() { return &___backround_number_24; }
	inline void set_backround_number_24(int32_t value)
	{
		___backround_number_24 = value;
	}

	inline static int32_t get_offset_of_coach_type_25() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419, ___coach_type_25)); }
	inline int32_t get_coach_type_25() const { return ___coach_type_25; }
	inline int32_t* get_address_of_coach_type_25() { return &___coach_type_25; }
	inline void set_coach_type_25(int32_t value)
	{
		___coach_type_25 = value;
	}
};

struct ApplicationManager_t2110631419_StaticFields
{
public:
	// ApplicationManager ApplicationManager::_instance
	ApplicationManager_t2110631419 * ____instance_19;

public:
	inline static int32_t get_offset_of__instance_19() { return static_cast<int32_t>(offsetof(ApplicationManager_t2110631419_StaticFields, ____instance_19)); }
	inline ApplicationManager_t2110631419 * get__instance_19() const { return ____instance_19; }
	inline ApplicationManager_t2110631419 ** get_address_of__instance_19() { return &____instance_19; }
	inline void set__instance_19(ApplicationManager_t2110631419 * value)
	{
		____instance_19 = value;
		Il2CppCodeGenWriteBarrier(&____instance_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
