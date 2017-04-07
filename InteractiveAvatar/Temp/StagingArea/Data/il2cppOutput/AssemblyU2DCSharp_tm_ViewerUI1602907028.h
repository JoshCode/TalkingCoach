#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// tm.AvatarController
struct AvatarController_t2998353027;
// tm.CameraWireframe
struct CameraWireframe_t3835108171;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// tm.ViewerUI
struct  ViewerUI_t1602907028  : public MonoBehaviour_t1158329972
{
public:
	// tm.AvatarController tm.ViewerUI::ed_avatarController
	AvatarController_t2998353027 * ___ed_avatarController_2;
	// tm.CameraWireframe tm.ViewerUI::ed_camWireframe
	CameraWireframe_t3835108171 * ___ed_camWireframe_3;
	// System.Boolean tm.ViewerUI::showWireframe
	bool ___showWireframe_4;
	// System.Boolean tm.ViewerUI::playingAnimation
	bool ___playingAnimation_5;

public:
	inline static int32_t get_offset_of_ed_avatarController_2() { return static_cast<int32_t>(offsetof(ViewerUI_t1602907028, ___ed_avatarController_2)); }
	inline AvatarController_t2998353027 * get_ed_avatarController_2() const { return ___ed_avatarController_2; }
	inline AvatarController_t2998353027 ** get_address_of_ed_avatarController_2() { return &___ed_avatarController_2; }
	inline void set_ed_avatarController_2(AvatarController_t2998353027 * value)
	{
		___ed_avatarController_2 = value;
		Il2CppCodeGenWriteBarrier(&___ed_avatarController_2, value);
	}

	inline static int32_t get_offset_of_ed_camWireframe_3() { return static_cast<int32_t>(offsetof(ViewerUI_t1602907028, ___ed_camWireframe_3)); }
	inline CameraWireframe_t3835108171 * get_ed_camWireframe_3() const { return ___ed_camWireframe_3; }
	inline CameraWireframe_t3835108171 ** get_address_of_ed_camWireframe_3() { return &___ed_camWireframe_3; }
	inline void set_ed_camWireframe_3(CameraWireframe_t3835108171 * value)
	{
		___ed_camWireframe_3 = value;
		Il2CppCodeGenWriteBarrier(&___ed_camWireframe_3, value);
	}

	inline static int32_t get_offset_of_showWireframe_4() { return static_cast<int32_t>(offsetof(ViewerUI_t1602907028, ___showWireframe_4)); }
	inline bool get_showWireframe_4() const { return ___showWireframe_4; }
	inline bool* get_address_of_showWireframe_4() { return &___showWireframe_4; }
	inline void set_showWireframe_4(bool value)
	{
		___showWireframe_4 = value;
	}

	inline static int32_t get_offset_of_playingAnimation_5() { return static_cast<int32_t>(offsetof(ViewerUI_t1602907028, ___playingAnimation_5)); }
	inline bool get_playingAnimation_5() const { return ___playingAnimation_5; }
	inline bool* get_address_of_playingAnimation_5() { return &___playingAnimation_5; }
	inline void set_playingAnimation_5(bool value)
	{
		___playingAnimation_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
