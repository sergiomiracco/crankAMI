#include <Arduino.h>

#include <Keyboard.h>
#include "assignments.h"

void configInputPins()
{
    
    pinMode(static_cast<int>(input_pin::_ENTER       ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_LEFT        ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_RIGHT       ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_UP          ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_DOWN        ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_BACK        ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_HOME        ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_PHONE       ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_CALL_END    ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_PLAY        ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_PAUSE       ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_PREV_TRACK  ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_NEXT_TRACK  ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_TOGGLE_PLAY ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_VOICE_CMD   ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_WHEEL_LEFT  ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pin::_WHEEL_RIGHT ), INPUT_PULLUP);

}


void setup() {

    Keyboard.begin();

    //initialize inputs
    configInputPins();

   
}

void loop() {



}


