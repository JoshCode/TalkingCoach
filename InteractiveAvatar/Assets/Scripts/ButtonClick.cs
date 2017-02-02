using UnityEngine;
using System.Collections;

public class ButtonClick : MonoBehaviour {

	private Animation animation;
	
	[SerializeField]
	private string idle = "female_idle_01_biped_animclip";
	
	[SerializeField]
	private string talk = "avatar_talk";
	
	// Use this for initialization
	void Start () {
		this.animation = this.GetComponent<Animation> ();

		this.animation [idle].layer = 1;
		this.animation [talk].layer = 2;
		this.animation.GetClipCount ();
	}

	public void startTalk(){
		this.animation.CrossFade (talk, 0.5f, PlayMode.StopAll);
	}

	public void stopTalk(){
		//this.animation.Stop();
		//this.animation.CrossFade (animation2Name, 0.5f, PlayMode.StopAll);
		this.animation.CrossFade (idle, 0.5f, PlayMode.StopAll);
	}
}
