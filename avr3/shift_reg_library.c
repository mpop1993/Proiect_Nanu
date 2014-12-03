#include <avr/io.h>
#include <util/delay.h>

#include "shift_reg_library.h"

void shiftOne(int number){
    
    if(number==1){
        PORTD = 1<<4;
            _delay_ms(20);
        
        PORTD = (1<<4)|(1<<3);
            _delay_ms(20);
        
        PORTD = 0<<3;
            _delay_ms(20);
    }
    
    else if(number==2){
        PORTD = 1<<6;
            _delay_ms(20);
        
        PORTD = (1<<6)|(1<<5);
            _delay_ms(20);
        
        PORTD = 0<<5;
            _delay_ms(20);
    }
}

void shiftNull(int number){
    
    if(number==1){
        PORTD = 0<<4;
            _delay_ms(20);
        
        PORTD = (0<<4)|(1<<3);
            _delay_ms(20);
        
        PORTD = 0<<3;
            _delay_ms(20);
    }
    
    else if(number==2){
        PORTD = 0<<6;
            _delay_ms(20);
        
        PORTD = (0<<6)|(1<<5);
            _delay_ms(20);
        
        PORTD = 0<<5;
            _delay_ms(20);
    }
}

void serialSend(void){
    
    PORTD = 1<<7;
    _delay_ms(20);
    PORTD = 0<<7;
    _delay_ms(20);
}