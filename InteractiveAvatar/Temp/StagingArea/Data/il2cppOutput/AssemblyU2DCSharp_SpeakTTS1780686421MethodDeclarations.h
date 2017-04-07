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

// SpeakTTS
struct SpeakTTS_t1780686421;
// System.String
struct String_t;
// SpeakTTS/StartDelegate
struct StartDelegate_t1972460157;
// SpeakTTS/EndDelegate
struct EndDelegate_t2724836526;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_SpeakTTS_StartDelegate1972460157.h"
#include "AssemblyU2DCSharp_SpeakTTS_EndDelegate2724836526.h"

// System.Void SpeakTTS::.ctor()
extern "C"  void SpeakTTS__ctor_m3617559658 (SpeakTTS_t1780686421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpeakTTS::Speak(System.String,System.String,SpeakTTS/StartDelegate,SpeakTTS/EndDelegate)
extern "C"  String_t* SpeakTTS_Speak_m3223800482 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t* ___voice1, StartDelegate_t1972460157 * ___startCallback2, EndDelegate_t2724836526 * ___endCallback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeakTTS::SpeakTTS_Click()
extern "C"  void SpeakTTS_SpeakTTS_Click_m1879853912 (SpeakTTS_t1780686421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeakTTS::callbackStart()
extern "C"  void SpeakTTS_callbackStart_m702947537 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SpeakTTS_callbackStart_m702947537();
// System.Void SpeakTTS::callbackEnd()
extern "C"  void SpeakTTS_callbackEnd_m1669338778 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SpeakTTS_callbackEnd_m1669338778();
