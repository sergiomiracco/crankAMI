#include <Arduino.h>

#include <Keyboard.h>
#include "assignments.h"

void configInputPins()
{
    
    pinMode(static_cast<int>(input_pins::_ENTER       ), INPUT_PULLUP);
    pinMode(static_cast<int>(input_pins::_LEFT        ), INPUT_PULLUP);

}


void setup() {

    Keyboard.begin();

    //initialize inputs
    configInputPins();

   
}

void loop() {

    for(Assignment & a : keyboard)
    {
        if(a.fired){
            Keyboard.write(a.k);
            a.fired = false;
        } else {
            bool newVal = digitalRead(a.pin);
            a.fired = newVal && newVal != a.oldVal;
            a.oldVal = newVal;
        }
        
    }

}


