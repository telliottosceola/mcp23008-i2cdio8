// This #include statement was automatically added by the Particle IDE.
#include "MCP23008.h"

MCP23008 inputBoard;

int previousInputState;

void setup() {
    inputBoard.setAddress(1,0,0);
    if(!inputBoard.initialized){
        Serial.println("Expansion not initialized");
    }else{
        Serial.println("Expansion ready");
    }
}

void loop() {
    //And with 1 to only monitor input 1 state, disreguard all other inputs.
    int status = inputBoard.readAllInputs()&1;
    if(status != previousInputState){
        if(status > previousInputState){
            //input is high
        }else{
            //input is low
        }
        previousInputState = status;
    }
}
