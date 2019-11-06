#include "Keyboard.h"
int threshold = 700;
int d_time = 30;

void setup() {
  Serial.begin(9600);
}

void loop() { 
    //if there are no plessure, the value of analogRead() is more than 1000
    if (analogRead(A0) < threshold) {
        Keyboard.write('\n');
        while(analogRead(A0) < threshold);
    }
    delay(d_time); 
}
