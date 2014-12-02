#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include "pwm_library.h"
#include "timer_library.h"


void pwm_6(int prescaler, int duty){
    
    cli();

   // OCR0A |= 255; // Output Compare Register 0 A ( -> valoarea pana la care numara)
    
    TCCR1A |= (1<<COM1A1);
    
    TCCR1A |= (1<<WGM10);
    TCCR1A |= (1<<WGM11);
    TCCR1B |= (1<<WGM12);
    // 10 bit Fast PWM - timer operation mode
    
    if(prescaler == 1024){
       // TCCR1B |= (1<<CS10); // Set prescaler
        TCCR1B |= (1<<CS12); // Set prescaler
    }
    
    OCR1A = duty;
    
    sei();
    
}


void pwmGenerator(int pinNumber, int prescaler, int duty)
{
    if(pinNumber == 6){
        // set pwm on pin 3
        pwm_6(prescaler, duty);
    }
    else if(pinNumber == 11){
        // set pwm in pin 11
        //pwm_11(prescaler, duty);
    }
}

