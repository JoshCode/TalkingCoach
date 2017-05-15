# TalkingCoach
TalkingCoach version 1.0 is a software framework which software developers can use to create a virtual character which can speak in natural language. Developers can embed the virtual character in their online applications. 


# API to access the TalkingCoach functionality

1. Send Text to convert into speech
    
    
  convertToSpeach - function to be used for converting text to speech
  text - text that will be converted into speech.  
  
  SendMessage('TalkingCoach', 'convertToSpeach', text);
  example- SendMessage('TalkingCoach', 'convertToSpeach', 'Dank u wel, maneer');

2. Stop the speech
  Call this function to Stop the speech
  
SendMessage('TalkingCoach', 'stopSpeach');

3. ChangeBackground

    -change the background image of the talkingCoach
	SendMessage('TalkingCoach', 'changeBackround');

4. ChangeCoach

change the coach/Avatart character.
	SendMessage('TalkingCoach', 'changeCoach');

5. Zoom in and Zoom out

-API to zoom in and zoom out, this will move the camera to zoom in and out. 
-Negative value will zoom in, positive value will zoom out while 0 value will put the camera in its original postion

	SendMessage('TalkingCoach', 'zoom', zoomValue(int));
  	example- SendMessge('TalkingCoach', 'zoom' , 5 );
  
6. Move Horizontal 


API to home the Coach/Avatar horizontally.
sending in value 0 will put the coach/avatar at its original position.

SendMessage('TalkingCoach', 'moveAvatarHorizontal', moveValue);
  example- SendMessage('TalkingCoach, 'moveAvatarHorizontal', 5);
  
 7. Move Vertical

API to home the Coach/Avatar vertically.
sending in value 0 will put the coach/avatar at its original position.

	SendMessage('TalkingCoach', 'moveAvatarVertical', moveValue);
  	example - SendMessage('TalkingCoach', 'moveAvatarVertical', 5);
