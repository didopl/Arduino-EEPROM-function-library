#include <Arduino.h>
#include <EEPROM.h>

pinMode(13, OUTPUT);

void clear_eeprom(void) { // function to clear the EEPROM
  digitalWrite(13, 1); // turn the on-board LED on
  for ( int i = 0; i < EEPROM.length(); i++ ) {
    EEPROM.write(i, 0); // overwrite with 0
  }
}

int cat(int low, int high) { // function to cat two byte-variables to one int-variable
  int zusammensetzung = EEPROM.read(low) + (EEPROM.read(high) * 256);

  return zusammensetzung;
}

byte split(int wert, byte *WertLow, byte *WertHigh){ // function to split an int-variable into two byte-variables
  *WertHigh = wert / 256;
  *WertLow = wert % 256;
}

long catlong(byte superhigh, byte high, byte low, byte superlow){
    long Ergebnis = EEPROM.read(superlow) + (EEPROM.read(low)*256) + (EEPROM.read(high)*65536) + (EEPROM.read(superhigh)*16777216);
    return Ergebnis;
/*    
byte splitlong(long value, 
*/
