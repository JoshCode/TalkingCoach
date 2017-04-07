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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// tm.CameraControls
struct  CameraControls_t2062184739  : public MonoBehaviour_t1158329972
{
public:
	// System.Single tm.CameraControls::sensitivityX
	float ___sensitivityX_2;
	// System.Single tm.CameraControls::sensitivityY
	float ___sensitivityY_3;
	// System.Single tm.CameraControls::cameraDistance
	float ___cameraDistance_4;
	// System.Single tm.CameraControls::scrollSpeed
	float ___scrollSpeed_5;
	// System.Single tm.CameraControls::upDownSensitivity
	float ___upDownSensitivity_6;
	// UnityEngine.GameObject tm.CameraControls::cameraTarget
	GameObject_t1756533147 * ___cameraTarget_7;
	// System.Boolean tm.CameraControls::autoRotate
	bool ___autoRotate_8;
	// UnityEngine.Vector3 tm.CameraControls::upVector
	Vector3_t2243707580  ___upVector_9;

public:
	inline static int32_t get_offset_of_sensitivityX_2() { return static_cast<int32_t>(offsetof(CameraControls_t2062184739, ___sensitivityX_2)); }
	inline float get_sensitivityX_2() const { return ___sensitivityX_2; }
	inline float* get_address_of_sensitivityX_2() { return &___sensitivityX_2; }
	inline void set_sensitivityX_2(float value)
	{
		___sensitivityX_2 = value;
	}

	inline static int32_t get_offset_of_sensitivityY_3() { return static_cast<int32_t>(offsetof(CameraControls_t2062184739, ___sensitivityY_3)); }
	inline float get_sensitivityY_3() const { return ___sensitivityY_3; }
	inline float* get_address_of_sensitivityY_3() { return &___sensitivityY_3; }
	inline void set_sensitivityY_3(float value)
	{
		___sensitivityY_3 = value;
	}

	inline static int32_t get_offset_of_cameraDistance_4() { return static_cast<int32_t>(offsetof(CameraControls_t2062184739, ___cameraDistance_4)); }
	inline float get_cameraDistance_4() const { return ___cameraDistance_4; }
	inline float* get_address_of_cameraDistance_4() { return &___cameraDistance_4; }
	inline void set_cameraDistance_4(float value)
	{
		___cameraDistance_4 = value;
	}

	inline static int32_t get_offset_of_scrollSpeed_5() { return static_cast<int32_t>(offsetof(CameraControls_t2062184739, ___scrollSpeed_5)); }
	inline float get_scrollSpeed_5() const { return ___scrollSpeed_5; }
	inline float* get_address_of_scrollSpeed_5() { return &___scrollSpeed_5; }
	inline void set_scrollSpeed_5(float value)
	{
		___scrollSpeed_5 = value;
	}

	inline static int32_t get_offset_of_upDownSensitivity_6() { return static_cast<int32_t>(offsetof(CameraControls_t2062184739, ___upDownSensitivity_6)); }
	inline float get_upDownSensitivity_6() const { return ___upDownSensitivity_6; }
	inline float* get_address_of_upDownSensitivity_6() { return &___upDownSensitivity_6; }
	inline void set_upDownSensitivity_6(float value)
	{
		___upDownSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_cameraTarget_7() { return static_cast<int32_t>(offsetof(CameraControls_t2062184739, ___cameraTarget_7)); }
	inline GameObject_t1756533147 * get_cameraTarget_7() const { return ___cameraTarget_7; }
	inline GameObject_t1756533147 ** get_address_of_cameraTarget_7() { return &___cameraTarget_7; }
	inline void set_cameraTarget_7(GameObject_t1756533147 * value)
	{
		___cameraTarget_7 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTarget_7, value);
	}

	inline static int32_t get_offset_of_autoRotate_8() { return static_cast<int32_t>(offsetof(CameraControls_t2062184739, ___autoRotate_8)); }
	inline bool get_autoRotate_8() const { return ___autoRotate_8; }
	inline bool* get_address_of_autoRotate_8() { return &___autoRotate_8; }
	inline void set_autoRotate_8(bool value)
	{
		___autoRotate_8 = value;
	}

	inline static int32_t get_offset_of_upVector_9() { return static_cast<int32_t>(offsetof(CameraControls_t2062184739, ___upVector_9)); }
	inline Vector3_t2243707580  get_upVector_9() const { return ___upVector_9; }
	inline Vector3_t2243707580 * get_address_of_upVector_9() { return &___upVector_9; }
	inline void set_upVector_9(Vector3_t2243707580  value)
	{
		___upVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
