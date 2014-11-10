# define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include <timer.h>
#include <demuxDisplay.h>


int i=0;

int main(void) {

    timer_1(1000); // set value in ms
    
    DDRD = 0x1C;
    DDRB = 0x01;
    
	while (1) {
        
        if(i==1)
        {
            PORTB=1<<0;
        }
        if(i==2)
        {
            PORTB=0<<0;
            i=0;
        }
        
	}
    
	return 0; // never reached
    
    // Test subversionare
}

ISR(TIMER1_COMPA_vect){
    i++;
}