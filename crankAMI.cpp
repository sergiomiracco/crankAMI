#include <Arduino.h>

#include <Keyboard.h>
#include "assignments.h"

void configInputPins()
{
    for(Assignment & a : keyboard) {
        pinMode( a.pin , INPUT_PULLUP);
    }

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
            Keyboard.write(a.key);
            a.fired = false;
        } else {
            bool newVal = digitalRead(a.pin);
            a.fired = newVal && newVal != a.oldVal;
            a.oldVal = newVal;
        }
        
    }

}


