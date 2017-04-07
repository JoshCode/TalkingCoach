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
// UnityEngine.WWW
struct WWW_t2919945039;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TTS
struct  TTS_t1722252961  : public MonoBehaviour_t1158329972
{
public:
	// System.String TTS::url
	String_t* ___url_2;
	// UnityEngine.WWW TTS::www
	WWW_t2919945039 * ___www_3;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(TTS_t1722252961, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}

	inline static int32_t get_offset_of_www_3() { return static_cast<int32_t>(offsetof(TTS_t1722252961, ___www_3)); }
	inline WWW_t2919945039 * get_www_3() const { return ___www_3; }
	inline WWW_t2919945039 ** get_address_of_www_3() { return &___www_3; }
	inline void set_www_3(WWW_t2919945039 * value)
	{
		___www_3 = value;
		Il2CppCodeGenWriteBarrier(&___www_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
