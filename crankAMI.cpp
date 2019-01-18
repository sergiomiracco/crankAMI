#include <Arduino.h>

#include <Keyboard.h>
#include "assignments.h"

void setup() {

    Keyboard.begin();

    //initialize inputs
    pinMode(static_cast<int>(input_pin::_ENTER), INPUT_PULLUP);


  

}

void loop() {



}


