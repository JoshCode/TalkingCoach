#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animation
struct Animation_t2068071072;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<Item>
struct List_1_t1809589323;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// AudioButton
struct AudioButton_t149128938;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3079764780;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreateScrollList
struct  CreateScrollList_t3539425589  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animation CreateScrollList::animation
	Animation_t2068071072 * ___animation_2;
	// System.String CreateScrollList::idle
	String_t* ___idle_3;
	// System.String CreateScrollList::talk
	String_t* ___talk_4;
	// UnityEngine.GameObject CreateScrollList::maleAvatar
	GameObject_t1756533147 * ___maleAvatar_5;
	// UnityEngine.GameObject CreateScrollList::femaleAvatar
	GameObject_t1756533147 * ___femaleAvatar_6;
	// UnityEngine.GameObject CreateScrollList::audioButton
	GameObject_t1756533147 * ___audioButton_7;
	// System.Collections.Generic.List`1<Item> CreateScrollList::itemList
	List_1_t1809589323 * ___itemList_8;
	// UnityEngine.Transform CreateScrollList::contentPanel
	Transform_t3275118058 * ___contentPanel_9;
	// UnityEngine.AudioSource CreateScrollList::audio
	AudioSource_t1135106623 * ___audio_10;
	// AudioButton CreateScrollList::start
	AudioButton_t149128938 * ___start_11;
	// AudioButton CreateScrollList::stop
	AudioButton_t149128938 * ___stop_12;
	// UnityEngine.Camera[] CreateScrollList::cams
	CameraU5BU5D_t3079764780* ___cams_13;
	// System.Single CreateScrollList::timeOut
	float ___timeOut_14;
	// System.Single CreateScrollList::timeOutTimer
	float ___timeOutTimer_15;

public:
	inline static int32_t get_offset_of_animation_2() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___animation_2)); }
	inline Animation_t2068071072 * get_animation_2() const { return ___animation_2; }
	inline Animation_t2068071072 ** get_address_of_animation_2() { return &___animation_2; }
	inline void set_animation_2(Animation_t2068071072 * value)
	{
		___animation_2 = value;
		Il2CppCodeGenWriteBarrier(&___animation_2, value);
	}

	inline static int32_t get_offset_of_idle_3() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___idle_3)); }
	inline String_t* get_idle_3() const { return ___idle_3; }
	inline String_t** get_address_of_idle_3() { return &___idle_3; }
	inline void set_idle_3(String_t* value)
	{
		___idle_3 = value;
		Il2CppCodeGenWriteBarrier(&___idle_3, value);
	}

	inline static int32_t get_offset_of_talk_4() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___talk_4)); }
	inline String_t* get_talk_4() const { return ___talk_4; }
	inline String_t** get_address_of_talk_4() { return &___talk_4; }
	inline void set_talk_4(String_t* value)
	{
		___talk_4 = value;
		Il2CppCodeGenWriteBarrier(&___talk_4, value);
	}

	inline static int32_t get_offset_of_maleAvatar_5() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___maleAvatar_5)); }
	inline GameObject_t1756533147 * get_maleAvatar_5() const { return ___maleAvatar_5; }
	inline GameObject_t1756533147 ** get_address_of_maleAvatar_5() { return &___maleAvatar_5; }
	inline void set_maleAvatar_5(GameObject_t1756533147 * value)
	{
		___maleAvatar_5 = value;
		Il2CppCodeGenWriteBarrier(&___maleAvatar_5, value);
	}

	inline static int32_t get_offset_of_femaleAvatar_6() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___femaleAvatar_6)); }
	inline GameObject_t1756533147 * get_femaleAvatar_6() const { return ___femaleAvatar_6; }
	inline GameObject_t1756533147 ** get_address_of_femaleAvatar_6() { return &___femaleAvatar_6; }
	inline void set_femaleAvatar_6(GameObject_t1756533147 * value)
	{
		___femaleAvatar_6 = value;
		Il2CppCodeGenWriteBarrier(&___femaleAvatar_6, value);
	}

	inline static int32_t get_offset_of_audioButton_7() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___audioButton_7)); }
	inline GameObject_t1756533147 * get_audioButton_7() const { return ___audioButton_7; }
	inline GameObject_t1756533147 ** get_address_of_audioButton_7() { return &___audioButton_7; }
	inline void set_audioButton_7(GameObject_t1756533147 * value)
	{
		___audioButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___audioButton_7, value);
	}

	inline static int32_t get_offset_of_itemList_8() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___itemList_8)); }
	inline List_1_t1809589323 * get_itemList_8() const { return ___itemList_8; }
	inline List_1_t1809589323 ** get_address_of_itemList_8() { return &___itemList_8; }
	inline void set_itemList_8(List_1_t1809589323 * value)
	{
		___itemList_8 = value;
		Il2CppCodeGenWriteBarrier(&___itemList_8, value);
	}

	inline static int32_t get_offset_of_contentPanel_9() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___contentPanel_9)); }
	inline Transform_t3275118058 * get_contentPanel_9() const { return ___contentPanel_9; }
	inline Transform_t3275118058 ** get_address_of_contentPanel_9() { return &___contentPanel_9; }
	inline void set_contentPanel_9(Transform_t3275118058 * value)
	{
		___contentPanel_9 = value;
		Il2CppCodeGenWriteBarrier(&___contentPanel_9, value);
	}

	inline static int32_t get_offset_of_audio_10() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___audio_10)); }
	inline AudioSource_t1135106623 * get_audio_10() const { return ___audio_10; }
	inline AudioSource_t1135106623 ** get_address_of_audio_10() { return &___audio_10; }
	inline void set_audio_10(AudioSource_t1135106623 * value)
	{
		___audio_10 = value;
		Il2CppCodeGenWriteBarrier(&___audio_10, value);
	}

	inline static int32_t get_offset_of_start_11() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___start_11)); }
	inline AudioButton_t149128938 * get_start_11() const { return ___start_11; }
	inline AudioButton_t149128938 ** get_address_of_start_11() { return &___start_11; }
	inline void set_start_11(AudioButton_t149128938 * value)
	{
		___start_11 = value;
		Il2CppCodeGenWriteBarrier(&___start_11, value);
	}

	inline static int32_t get_offset_of_stop_12() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___stop_12)); }
	inline AudioButton_t149128938 * get_stop_12() const { return ___stop_12; }
	inline AudioButton_t149128938 ** get_address_of_stop_12() { return &___stop_12; }
	inline void set_stop_12(AudioButton_t149128938 * value)
	{
		___stop_12 = value;
		Il2CppCodeGenWriteBarrier(&___stop_12, value);
	}

	inline static int32_t get_offset_of_cams_13() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___cams_13)); }
	inline CameraU5BU5D_t3079764780* get_cams_13() const { return ___cams_13; }
	inline CameraU5BU5D_t3079764780** get_address_of_cams_13() { return &___cams_13; }
	inline void set_cams_13(CameraU5BU5D_t3079764780* value)
	{
		___cams_13 = value;
		Il2CppCodeGenWriteBarrier(&___cams_13, value);
	}

	inline static int32_t get_offset_of_timeOut_14() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___timeOut_14)); }
	inline float get_timeOut_14() const { return ___timeOut_14; }
	inline float* get_address_of_timeOut_14() { return &___timeOut_14; }
	inline void set_timeOut_14(float value)
	{
		___timeOut_14 = value;
	}

	inline static int32_t get_offset_of_timeOutTimer_15() { return static_cast<int32_t>(offsetof(CreateScrollList_t3539425589, ___timeOutTimer_15)); }
	inline float get_timeOutTimer_15() const { return ___timeOutTimer_15; }
	inline float* get_address_of_timeOutTimer_15() { return &___timeOutTimer_15; }
	inline void set_timeOutTimer_15(float value)
	{
		___timeOutTimer_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
