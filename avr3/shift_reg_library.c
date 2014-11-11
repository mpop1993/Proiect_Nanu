#include <avr/io.h>
#include <util/delay.h>


#include "shift_reg_library.h"

void shiftOne(void){
    
    PORTB = 1<<2;
        _delay_ms(100);
    PORTB = (1<<2)|(1<<0);
        _delay_ms(100);
    PORTB = 0<<0;
        _delay_ms(100);

    
}

void shiftNull(void){
    
    PORTB = 0<<2;
        _delay_ms(100);
    PORTB = (0<<2)|(1<<0);
        _delay_ms(100);
    PORTB = 0<<0;
        _delay_ms(100);
    
}

void serialSend(void){
    
    PORTB = 1<<1;
        //_delay_ms(100);
    PORTB = 0<<1;
        //_delay_ms(100);
}