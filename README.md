This library has some useful functions for the EEPROM use.
Use:
    1. include the library: #include "EEPROM_functions.h"
    2. you can overwrite the EEPROM with clear_eeprom();
    3. to read a int-value from the EEPROM: int value = cat("low bytes", "high bytes"); write instead of low and high bytes the addresses of the low and high bytes.
    4. to split an int-value in two byte-variables, write: split(int-value, &valuelow, &valuehigh); the 6 is required because here the real addresses are          mainpulated

Examples and more help are also in the example-sketches.
