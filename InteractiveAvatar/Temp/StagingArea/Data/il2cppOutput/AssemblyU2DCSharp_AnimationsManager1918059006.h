#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// AnimationsManager
struct AnimationsManager_t1918059006;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimationsManager
struct  AnimationsManager_t1918059006  : public MonoBehaviour_t1158329972
{
public:
	// System.String AnimationsManager::idle
	String_t* ___idle_2;
	// System.String AnimationsManager::talk
	String_t* ___talk_3;
	// System.String AnimationsManager::talkmix
	String_t* ___talkmix_4;

public:
	inline static int32_t get_offset_of_idle_2() { return static_cast<int32_t>(offsetof(AnimationsManager_t1918059006, ___idle_2)); }
	inline String_t* get_idle_2() const { return ___idle_2; }
	inline String_t** get_address_of_idle_2() { return &___idle_2; }
	inline void set_idle_2(String_t* value)
	{
		___idle_2 = value;
		Il2CppCodeGenWriteBarrier(&___idle_2, value);
	}

	inline static int32_t get_offset_of_talk_3() { return static_cast<int32_t>(offsetof(AnimationsManager_t1918059006, ___talk_3)); }
	inline String_t* get_talk_3() const { return ___talk_3; }
	inline String_t** get_address_of_talk_3() { return &___talk_3; }
	inline void set_talk_3(String_t* value)
	{
		___talk_3 = value;
		Il2CppCodeGenWriteBarrier(&___talk_3, value);
	}

	inline static int32_t get_offset_of_talkmix_4() { return static_cast<int32_t>(offsetof(AnimationsManager_t1918059006, ___talkmix_4)); }
	inline String_t* get_talkmix_4() const { return ___talkmix_4; }
	inline String_t** get_address_of_talkmix_4() { return &___talkmix_4; }
	inline void set_talkmix_4(String_t* value)
	{
		___talkmix_4 = value;
		Il2CppCodeGenWriteBarrier(&___talkmix_4, value);
	}
};

struct AnimationsManager_t1918059006_StaticFields
{
public:
	// AnimationsManager AnimationsManager::_instance
	AnimationsManager_t1918059006 * ____instance_5;

public:
	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(AnimationsManager_t1918059006_StaticFields, ____instance_5)); }
	inline AnimationsManager_t1918059006 * get__instance_5() const { return ____instance_5; }
	inline AnimationsManager_t1918059006 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(AnimationsManager_t1918059006 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier(&____instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
