# define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include <timer_library.h>
#include <display_library.h>

int i=0;
double ms=400;

int main(void) {

    //timer_1(1000); // set value in ms
    
    DDRD = 0x1C;
    DDRB = 0xff;
    
    
        
    
    
    while(1){
    
        zero();
        _delay_ms(500);

        one();
        _delay_ms(500);

        two();
        _delay_ms(500);

        three();
        _delay_ms(500);

        four();
        _delay_ms(500);

        five();
        _delay_ms(500);

        six();
        _delay_ms(500);

        seven();
        _delay_ms(500);

        eight();
        _delay_ms(500);

        nine();
        _delay_ms(500);
        
        clear();
        _delay_ms(500);
       
    }
	return 0; // never reached
    
    // Test subversionare
}

//ISR(TIMER1_COMPA_vect){
   // i++;
//}