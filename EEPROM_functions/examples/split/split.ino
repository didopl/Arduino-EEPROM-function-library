#include "EEPROM_functions.h" // include the library
byte valuehigh; // variables for the high and low bytes
byte valuelow;


void setup() {
  
  int value = analogRead(0); // Read the pin A0
  split(value, &valuehigh, &valuelow); // the function split requires the the value to split (integer) and the addresses of the high and low-byte variable
  Serial.begin(9600);
  while(!Serial){ // wait for serial connection
    delay(1);
  }
  
  EEPROM.write(0, valuelow); // write the high and the ow bytes to the EEPROM (the cat-example will use these values)
  EEPROM.write(1, valuehigh);
  
  Serial.print("High bytes: "); // for the controll
  Serial.println(valuehigh);
  Serial.print("low bytes: ");
  Serial.println(valuelow);
}

void loop() {
  // empty loop
  
}
