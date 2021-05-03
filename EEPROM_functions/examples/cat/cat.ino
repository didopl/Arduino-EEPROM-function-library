#include "EEPROM_functions.h" // include the library
int value;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial){ // wait for serial connection
    delay(1);
  }
  value = cat(0, 1); // read the first to bytes from the EEPEOM and concat them
  Serial.println(value); // print the value out
}

void loop() {
  // empty loop

}
