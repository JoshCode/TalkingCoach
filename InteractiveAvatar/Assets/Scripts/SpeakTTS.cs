using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpeakTTS : MonoBehaviour {

	public InputField speakText;

	public void SpeakTTS_Click(){
		Debug.Log(speakText.text);
	}
}
