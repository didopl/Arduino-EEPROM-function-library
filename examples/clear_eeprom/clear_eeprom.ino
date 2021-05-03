#include "EEPROM_functions.h" // include the library

void setup(){
  pinMode(LED_BUILTIN, OUTPUT); // setup the on-board LED
  clear_eeprom(); // overwrite the EEPROM with some 0
  digitalWrite(LED_BUILTIN, HIGH); // turn the on-board LED on when we're finished
}

void loop(){
  // empty loop
  }
 
