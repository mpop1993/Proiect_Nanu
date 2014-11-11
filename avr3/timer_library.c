#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include "timer_library.h"

void timer_1(double tMili){ // tMili -> milisecunde
    
    double tSecunda;
    int tRegistru;
    
    tSecunda = tMili/1000;
    
    tRegistru = floor(16000000/1024*tSecunda); // aprox downwards to closest integer
    
    // Set timer 1
    
    cli();
    
    TCCR1A=0;
    TCCR1B=0;
    
    OCR1A |= tRegistru; // 16*10^6/1*1024 [15625 = 1 secunda]
    
    TCCR1B |= (1<<WGM12); // Turn on CTC mode
    
    TIMSK1 |= (1<<OCIE1A); // Enable timer compare interrupts
    
    TCCR1B |= (1<<CS10); // Set prescaler
    TCCR1B |= (1<<CS12); // Set prescaler
    
    sei();
    
}