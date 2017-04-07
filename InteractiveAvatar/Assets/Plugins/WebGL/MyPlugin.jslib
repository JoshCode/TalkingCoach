var MyPlugin = {

    Speak: function(textMessage, voiceType, callbackStart, callbackEnd)
    {
    	//responsiveVoice.setDefaultVoice("Dutch Female");
        textToSpeach.speak(Pointer_stringify(textMessage), Pointer_stringify(voiceType), {onstart: function(){Runtime.dynCall('v', callbackStart, 0)}, onend: function(){Runtime.dynCall('v', callbackEnd, 0)}});
    }
};
mergeInto(LibraryManager.library, MyPlugin);