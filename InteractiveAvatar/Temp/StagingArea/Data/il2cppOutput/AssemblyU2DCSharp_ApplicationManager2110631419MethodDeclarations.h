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

// ApplicationManager
struct ApplicationManager_t2110631419;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// AudioButton
struct AudioButton_t149128938;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_AudioButton149128938.h"

// System.Void ApplicationManager::.ctor()
extern "C"  void ApplicationManager__ctor_m953288780 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ApplicationManager ApplicationManager::get_instance()
extern "C"  ApplicationManager_t2110631419 * ApplicationManager_get_instance_m728347116 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::Start()
extern "C"  void ApplicationManager_Start_m2397676808 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::Awake()
extern "C"  void ApplicationManager_Awake_m318962343 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::on_load()
extern "C"  void ApplicationManager_on_load_m3972281458 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::load_background()
extern "C"  void ApplicationManager_load_background_m704816605 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::load_coach()
extern "C"  void ApplicationManager_load_coach_m3763349125 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::changeBackground()
extern "C"  void ApplicationManager_changeBackground_m3694574738 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::changeCoach()
extern "C"  void ApplicationManager_changeCoach_m3679025986 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::loadAnimations(UnityEngine.GameObject)
extern "C"  void ApplicationManager_loadAnimations_m3529006865 (ApplicationManager_t2110631419 * __this, GameObject_t1756533147 * ___coach0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::populateList()
extern "C"  void ApplicationManager_populateList_m3310980372 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::playClip(AudioButton)
extern "C"  void ApplicationManager_playClip_m2194354242 (ApplicationManager_t2110631419 * __this, AudioButton_t149128938 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::stopClip(AudioButton)
extern "C"  void ApplicationManager_stopClip_m4025488064 (ApplicationManager_t2110631419 * __this, AudioButton_t149128938 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::PlayAnimation()
extern "C"  void ApplicationManager_PlayAnimation_m2684473500 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::StopAnimation()
extern "C"  void ApplicationManager_StopAnimation_m830295734 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ApplicationManager::waitForAudioToFinish(System.Single)
extern "C"  Il2CppObject * ApplicationManager_waitForAudioToFinish_m4097783855 (ApplicationManager_t2110631419 * __this, float ___waitTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::Update()
extern "C"  void ApplicationManager_Update_m4014230075 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::<populateList>m__0()
extern "C"  void ApplicationManager_U3CpopulateListU3Em__0_m3310063689 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::<populateList>m__1()
extern "C"  void ApplicationManager_U3CpopulateListU3Em__1_m560977358 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::<populateList>m__2()
extern "C"  void ApplicationManager_U3CpopulateListU3Em__2_m3592388691 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ApplicationManager::<populateList>m__3()
extern "C"  void ApplicationManager_U3CpopulateListU3Em__3_m843302360 (ApplicationManager_t2110631419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
