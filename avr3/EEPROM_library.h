#ifndef __avr3__EEPROM_library__
#define __avr3__EEPROM_library__


void EEPROM_write(unsigned int uiAddress, unsigned char ucData);
unsigned char EEPROM_read(unsigned int uiAddress);

#endif 
