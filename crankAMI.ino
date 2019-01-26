
#include "Keyboard.h"

#include "assignments.h"

void configInputPins()
{
    for(Assignment & a : keyboard) {
        pinMode( a.pin , INPUT_PULLUP );
    }

}

void setup() {    
  
  //initialize inputs
  configInputPins();

  Keyboard.begin();

}

void loop() {

   for(Assignment & a : keyboard)
   {
        if(a.fired){

            Keyboard.write(a.key); 
                        
            //Keyboard.releaseAll();
            a.fired = false;

        } else {
            
            bool newVal = digitalRead(a.pin);

            a.fired = !newVal && a.oldVal;
            a.oldVal = newVal;
        }
        
    }

}
