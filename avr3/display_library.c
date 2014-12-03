//
//  display_library.c
//  avr3
//
//  Created by Pop Mihai on 11/11/14.
//  Copyright (c) 2014 Mihai. All rights reserved.
//

#include "display_library.h"

#include "shift_reg_library.h"

void zero(int number){
    
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    shiftNull(number);
    serialSend();
    
}
void one(int number){
    
    shiftNull(number);
    shiftOne(number);
    shiftNull(number);
    shiftNull(number);
    shiftOne(number);
    shiftNull(number);
    shiftNull(number);
    shiftNull(number);
    serialSend();
    
}

void two(int number){
    
    shiftNull(number);
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    shiftNull(number);
    shiftOne(number);
    serialSend();
    
}
void three(int number){
    
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    shiftNull(number);
    shiftOne(number);
    serialSend();
    
}
void four(int number){
    
    shiftNull(number);
    shiftOne(number);
    shiftNull(number);
    shiftNull(number);
    shiftOne(number);
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    serialSend();
    
}
void five(int number){
    
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    shiftNull(number);
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    serialSend();
    
}
void six(int number){
    
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    serialSend();
    
}
void seven(int number){
    
    shiftNull(number);
    shiftOne(number);
    shiftNull(number);
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    shiftNull(number);
    shiftNull(number);
    serialSend();
    
}
void eight(int number){
    
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    serialSend();
    
}

void nine(int number){
    
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    shiftNull(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    shiftOne(number);
    serialSend();
    
}

void clear(int number){
    
    shiftNull(number);
    shiftNull(number);
    shiftNull(number);
    shiftNull(number);
    shiftNull(number);
    shiftNull(number);
    shiftNull(number);
    shiftNull(number);
    serialSend();
    
}