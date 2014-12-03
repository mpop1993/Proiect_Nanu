#include <avr/io.h>

#include "EEPROM_library.h"

void EEPROM_write(unsigned int uiAddress, unsigned char ucData)

{
    
    /* Wait for completion of previous write */
    
    while(EECR & (1<<EEPE)); // EEPROM write enabled = EEPE
    
    /* Set up address and data registers */
    
    EEAR = uiAddress;
    
    EEDR = ucData;
    
    /* Write logical one to EEMWE */
    
    EECR |= (1<<EEMPE); // EEPROM master write enabled = EEMPE
    
    /* Start eeprom write by setting EEWE */
    
    EECR |= (1<<EEPE);
    
}

unsigned char EEPROM_read(unsigned int uiAddress)

{
    
    /* Wait for completion of previous write */
    
    while(EECR & (1<<EEPE));
    
    /* Set up address register */
    
    EEAR = uiAddress;
    
    /* Start eeprom read by writing EERE */
    
    EECR |= (1<<EEMPE);
    
    /* Return data from data register */
    
    return EEDR;
    
}