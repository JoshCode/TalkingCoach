#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t1631627530;
// SpeakTTS/StartDelegate
struct StartDelegate_t1972460157;
// SpeakTTS/EndDelegate
struct EndDelegate_t2724836526;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpeakTTS
struct  SpeakTTS_t1780686421  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField SpeakTTS::speakText
	InputField_t1631627530 * ___speakText_2;

public:
	inline static int32_t get_offset_of_speakText_2() { return static_cast<int32_t>(offsetof(SpeakTTS_t1780686421, ___speakText_2)); }
	inline InputField_t1631627530 * get_speakText_2() const { return ___speakText_2; }
	inline InputField_t1631627530 ** get_address_of_speakText_2() { return &___speakText_2; }
	inline void set_speakText_2(InputField_t1631627530 * value)
	{
		___speakText_2 = value;
		Il2CppCodeGenWriteBarrier(&___speakText_2, value);
	}
};

struct SpeakTTS_t1780686421_StaticFields
{
public:
	// SpeakTTS/StartDelegate SpeakTTS::<>f__mg$cache0
	StartDelegate_t1972460157 * ___U3CU3Ef__mgU24cache0_3;
	// SpeakTTS/EndDelegate SpeakTTS::<>f__mg$cache1
	EndDelegate_t2724836526 * ___U3CU3Ef__mgU24cache1_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(SpeakTTS_t1780686421_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline StartDelegate_t1972460157 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline StartDelegate_t1972460157 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(StartDelegate_t1972460157 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_4() { return static_cast<int32_t>(offsetof(SpeakTTS_t1780686421_StaticFields, ___U3CU3Ef__mgU24cache1_4)); }
	inline EndDelegate_t2724836526 * get_U3CU3Ef__mgU24cache1_4() const { return ___U3CU3Ef__mgU24cache1_4; }
	inline EndDelegate_t2724836526 ** get_address_of_U3CU3Ef__mgU24cache1_4() { return &___U3CU3Ef__mgU24cache1_4; }
	inline void set_U3CU3Ef__mgU24cache1_4(EndDelegate_t2724836526 * value)
	{
		___U3CU3Ef__mgU24cache1_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
