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

// SpeakTTS/StartDelegate
struct StartDelegate_t1972460157;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void SpeakTTS/StartDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void StartDelegate__ctor_m2425016806 (StartDelegate_t1972460157 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeakTTS/StartDelegate::Invoke()
extern "C"  void StartDelegate_Invoke_m238469020 (StartDelegate_t1972460157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SpeakTTS/StartDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StartDelegate_BeginInvoke_m1985914171 (StartDelegate_t1972460157 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeakTTS/StartDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void StartDelegate_EndInvoke_m3407778748 (StartDelegate_t1972460157 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
