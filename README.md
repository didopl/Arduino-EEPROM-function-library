This library has some useful functions for the EEPROM use.
Use:

    - include the library: #include "EEPROM_functions.h"
    - you can overwrite the EEPROM with clear_eeprom();
    - to read a int-value from the EEPROM: int value = cat("low bytes", "high bytes"); write instead of low and high bytes the addresses of the low and high bytes.
    - to split an int-value in two byte-variables, write: split(int-value, &valuelow, &valuehigh); the 6 is required because here the real addresses are mainpulated

Examples and more help are also in the example-sketches.
