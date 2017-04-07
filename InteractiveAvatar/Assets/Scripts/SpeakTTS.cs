using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;
using AOT;

public class SpeakTTS : MonoBehaviour {

	public InputField speakText;

	public delegate void StartDelegate();
	public delegate void EndDelegate();

	#if UNITY_WEBGL
	[DllImport("__Internal")]
	private static extern string Speak(string text, string voice, StartDelegate startCallback, EndDelegate endCallback );
	#endif

	public void SpeakTTS_Click(){

		string textMessage = speakText.text;

		if(textMessage != ""){

			if( Application.platform == RuntimePlatform.WebGLPlayer){
				Speak(textMessage, "Dutch Female", callbackStart, callbackEnd);	
			}
		}

		//WindowsVoice.theVoice.speak(textMessage);
	}	

	[MonoPInvokeCallback(typeof(StartDelegate))]
	public static void callbackStart(){
		Debug.Log("callback start");
		ApplicationManager.instance.PlayAnimation();
	}


	[MonoPInvokeCallback(typeof(EndDelegate))]
	public static void callbackEnd(){
		Debug.Log("callback ended");
		ApplicationManager.instance.StopAnimation();
	}
}
