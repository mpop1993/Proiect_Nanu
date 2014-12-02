# define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include <timer_library.h>
#include <display_library.h>
#include <pwm_library.h>

int i=0;
double ms=400;

int main(void) {

    //timer_1(1000); // set value in ms
    
    DDRD = 0xff;
    DDRB = 0xff;
    
    

    while(1){
        while(i<1020){
            i=i+5;
            pwmGenerator(6, 1024, i);
            _delay_ms(10);
        }
        _delay_ms(1000);
        while(i>0){
            i=i-5;
            pwmGenerator(6, 1024, i);
            _delay_ms(10);
        }
        _delay_ms(1000);

        
    }
	return 0;     
}

//ISR(TIMER1_COMPA_vect){
   // i++;
//}