#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Animation
struct Animation_t2068071072;
// UnityEngine.AnimationState
struct AnimationState_t1303741697;
// System.String
struct String_t;
// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WrapMode255797857.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_PlayMode1184682879.h"
#include "UnityEngine_UnityEngine_QueueMode3724653560.h"
#include "UnityEngine_UnityEngine_AnimationClip3510324950.h"

// System.Void UnityEngine.Animation::set_wrapMode(UnityEngine.WrapMode)
extern "C"  void Animation_set_wrapMode_m1409235825 (Animation_t2068071072 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C"  AnimationState_t1303741697 * Animation_get_Item_m4198128320 (Animation_t2068071072 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C"  bool Animation_Play_m315011537 (Animation_t2068071072 * __this, String_t* ___animation0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C"  bool Animation_Play_m976361057 (Animation_t2068071072 * __this, String_t* ___animation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C"  void Animation_CrossFade_m3167311838 (Animation_t2068071072 * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Blend(System.String,System.Single,System.Single)
extern "C"  void Animation_Blend_m2530155026 (Animation_t2068071072 * __this, String_t* ___animation0, float ___targetWeight1, float ___fadeLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Blend(System.String)
extern "C"  void Animation_Blend_m4029095666 (Animation_t2068071072 * __this, String_t* ___animation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::CrossFadeQueued(System.String,System.Single,UnityEngine.QueueMode,UnityEngine.PlayMode)
extern "C"  AnimationState_t1303741697 * Animation_CrossFadeQueued_m4282013665 (Animation_t2068071072 * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___queue2, int32_t ___mode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::CrossFadeQueued(System.String)
extern "C"  AnimationState_t1303741697 * Animation_CrossFadeQueued_m1575260741 (Animation_t2068071072 * __this, String_t* ___animation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
extern "C"  void Animation_AddClip_m2495773389 (Animation_t2068071072 * __this, AnimationClip_t3510324950 * ___clip0, String_t* ___newName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
extern "C"  void Animation_AddClip_m900889592 (Animation_t2068071072 * __this, AnimationClip_t3510324950 * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, bool ___addLoopFrame4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
extern "C"  void Animation_AddClip_m686158425 (Animation_t2068071072 * __this, AnimationClip_t3510324950 * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetClipCount()
extern "C"  int32_t Animation_GetClipCount_m3941438350 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C"  Il2CppObject * Animation_GetEnumerator_m3067441975 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C"  AnimationState_t1303741697 * Animation_GetState_m1608765041 (Animation_t2068071072 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C"  AnimationState_t1303741697 * Animation_GetStateAtIndex_m2774853377 (Animation_t2068071072 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C"  int32_t Animation_GetStateCount_m1145090795 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
