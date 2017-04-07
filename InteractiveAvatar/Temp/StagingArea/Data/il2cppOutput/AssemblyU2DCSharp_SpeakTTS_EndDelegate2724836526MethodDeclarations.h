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

// SpeakTTS/EndDelegate
struct EndDelegate_t2724836526;
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

// System.Void SpeakTTS/EndDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EndDelegate__ctor_m587213331 (EndDelegate_t2724836526 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeakTTS/EndDelegate::Invoke()
extern "C"  void EndDelegate_Invoke_m2930278391 (EndDelegate_t2724836526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SpeakTTS/EndDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EndDelegate_BeginInvoke_m4142853120 (EndDelegate_t2724836526 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeakTTS/EndDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void EndDelegate_EndInvoke_m3822333633 (EndDelegate_t2724836526 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
