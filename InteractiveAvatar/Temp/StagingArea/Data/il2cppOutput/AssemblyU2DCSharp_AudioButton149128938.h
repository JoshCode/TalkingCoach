#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioButton
struct  AudioButton_t149128938  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button AudioButton::button
	Button_t2872111280 * ___button_2;
	// UnityEngine.UI.Text AudioButton::nameLabel
	Text_t356221433 * ___nameLabel_3;
	// UnityEngine.AudioClip AudioButton::audioClip
	AudioClip_t1932558630 * ___audioClip_4;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(AudioButton_t149128938, ___button_2)); }
	inline Button_t2872111280 * get_button_2() const { return ___button_2; }
	inline Button_t2872111280 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t2872111280 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}

	inline static int32_t get_offset_of_nameLabel_3() { return static_cast<int32_t>(offsetof(AudioButton_t149128938, ___nameLabel_3)); }
	inline Text_t356221433 * get_nameLabel_3() const { return ___nameLabel_3; }
	inline Text_t356221433 ** get_address_of_nameLabel_3() { return &___nameLabel_3; }
	inline void set_nameLabel_3(Text_t356221433 * value)
	{
		___nameLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___nameLabel_3, value);
	}

	inline static int32_t get_offset_of_audioClip_4() { return static_cast<int32_t>(offsetof(AudioButton_t149128938, ___audioClip_4)); }
	inline AudioClip_t1932558630 * get_audioClip_4() const { return ___audioClip_4; }
	inline AudioClip_t1932558630 ** get_address_of_audioClip_4() { return &___audioClip_4; }
	inline void set_audioClip_4(AudioClip_t1932558630 * value)
	{
		___audioClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
