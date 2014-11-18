#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include "pwm_library.h"
#include "timer_library.h"


void pwm_3(int prescaler, int duty){
    
    cli();
    
   // OCR0A |= 255; // Output Compare Register 0 A ( -> valoarea pana la care numara)
    
    TCCR0A |= (1<<COM0A1);
    //TCCR0A |= (1<<COM0B1);
    
    TCCR0A |= (1<<WGM00);
    TCCR0A |= (1<<WGM01);
    
    TCCR0B |= (1<<CS00); // Set prescaler
    TCCR0B |= (1<<CS02); // Set prescaler
    
    OCR0A = duty;
    
    sei();
    
}
/*
void pwm_3(int prescaler, int duty){
    
    cli();
    
    OCR1A |= 15000; // Output Compare Register 0 A ( -> valoarea pana la care numara)
    
    TCCR1A |= (1<<COM1A1);
    TCCR1A |= (1<<COM1B1);
    
    TCCR1A |= (1<<WGM10);
    TCCR1B |= (1<<WGM12);
    
    TCCR1B |= (1<<CS10); // Set prescaler
    TCCR1B |= (1<<CS12); // Set prescaler
    
    OCR0A = 10000;
    
    sei();
    
}*/

void pwmGenerator(int pinNumber, int prescaler, int duty)
{
    if(pinNumber == 3){
        // set pwm on pin 3
        pwm_3(prescaler, duty);
    }
    else if(pinNumber == 11){
        // set pwm in pin 11
        //pwm_11(prescaler, duty);
    }
}

