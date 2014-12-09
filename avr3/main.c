# define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include <timer_library.h>
#include <display_library.h>
#include <pwm_library.h>
#include <EEPROM_library.h>

int i=0;
int contor=0;
int nr_1=0;
int nr_2=0;

unsigned int Address = 10;

int main(void) {
    
    i=EEPROM_read(Address); // de vazut adresele cum sunt puse!
    
    //timer_1(1000); // set value in ms
    
    DDRD = 0xf8;
    DDRB = 0xff;
    
    // set external interrupt on digital PIN 2
    cli();
    
    PORTD |= (1 << PORTD2);    // turn On the Pull-up
    
    EICRA |= (1 << ISC00);    //
    EICRA |= (1 << ISC01);    // set INT0 to trigger on rising edge
    
    EIMSK |= (1 << INT0);     // Turns on INT0 - external interrupt mask register
    
    sei();
    
    clear(2);
    clear(1);
    
    while(1){
        
            if(i<100 && i>=1){
    
                nr_2=i%10;
                nr_1=i/10;
                
                if(nr_1>=1){
                    if(nr_1==0){
                        zero(1);
                    }
                    if(nr_1==1){
                        one(1);
                    }
                    if(nr_1==2){
                        two(1);
                    }
                    if(nr_1==3){
                        three(1);
                    }
                    if(nr_1==4){
                        four(1);
                    }
                    if(nr_1==5){
                        five(1);
                    }
                    if(nr_1==6){
                        six(1);
                    }
                    if(nr_1==7){
                        seven(1);
                    }
                    if(nr_1==8){
                        eight(1);
                    }
                    if(nr_1==9){
                        nine(1);
                    }
                }
                
                if(nr_2==0){
                    zero(2);
                }
                if(nr_2==1){
                    one(2);
                }
                if(nr_2==2){
                    two(2);
                }
                if(nr_2==3){
                    three(2);
                }
                if(nr_2==4){
                    four(2);
                }
                if(nr_2==5){
                    five(2);
                }
                if(nr_2==6){
                    six(2);
                }
                if(nr_2==7){
                    seven(2);
                }
                if(nr_2==8){
                    eight(2);
                }
                if(nr_2==9){
                    nine(2);
                }
                
            }
            else{
                i=0;
                clear(2);
                clear(1);
                
            }
        
            EEPROM_write(Address, i);
        
    }
    
	return 0;     
}

ISR (INT0_vect)
{
    i++;
    _delay_ms(50);
    PORTB = 1<<0;
    _delay_ms(50);
    PORTB = 0<<0;
}
