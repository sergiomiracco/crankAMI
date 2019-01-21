#include <Arduino.h>


struct Assignment {

    bool fired;
    bool oldVal;

    const uint16_t key;
    const uint8_t pin;

}   /* V1 */
    _ENTER  {.key = 'A', .pin = 1},
    _LEFT   {.key = 'B', .pin = 2};

    /* V2 */
Assignment keyboard[] = {
    { 0, 1, 'A', 1 },   //enter
    { 0, 1, 'B', 2 }    //left
};

void setup() {

    pinMode(_ENTER.pin, INPUT_PULLUP);
    pinMode(_LEFT.pin, INPUT_PULLUP);

}

void loop() {

    // V1
    if(_ENTER.fired){
        //fire key
        _ENTER.fired = false;
    } else {
        bool newVal = digitalRead(_ENTER.pin);
        _ENTER.fired = newVal && newVal != _ENTER.oldVal;
        _ENTER.oldVal = newVal;
    }
    // V1 repeat for every input

    
    // V2
    for(Assignment a : keyboard)
    {
        if(a.fired){
            //fire key
            a.fired = false;
        } else {
            bool newVal = digitalRead(a.pin);
            a.fired = newVal && newVal != a.oldVal;
            a.oldVal = newVal;
        }
        
    }
    
}

