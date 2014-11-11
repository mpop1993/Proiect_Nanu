//
//  display_library.c
//  avr3
//
//  Created by Pop Mihai on 11/11/14.
//  Copyright (c) 2014 Mihai. All rights reserved.
//

#include "display_library.h"

#include "shift_reg_library.h"

void zero(void){
    
    shiftOne();
    shiftOne();
    shiftOne();
    shiftOne();
    shiftOne();
    shiftOne();
    shiftOne();
    shiftNull();
    serialSend();
    
}
void one(void){
    
    shiftOne();
    shiftOne();
    shiftNull();
    shiftNull();
    shiftOne();
    shiftNull();
    shiftNull();
    shiftNull();
    serialSend();
    
}
void two(void){
    
    shiftOne();
    shiftNull();
    shiftOne();
    shiftOne();
    shiftOne();
    shiftOne();
    shiftNull();
    shiftOne();
    serialSend();
    
}
void three(void){
    
    shiftOne();
    shiftOne();
    shiftOne();
    shiftNull();
    shiftOne();
    shiftOne();
    shiftNull();
    shiftOne();
    serialSend();
    
}
void four(void){
    
    shiftOne();
    shiftOne();
    shiftNull();
    shiftNull();
    shiftOne();
    shiftNull();
    shiftOne();
    shiftOne();
    serialSend();
    
}
void five(void){
    
    shiftOne();
    shiftOne();
    shiftOne();
    shiftNull();
    shiftNull();
    shiftOne();
    shiftOne();
    shiftOne();
    serialSend();
    
}
void six(void){
    
    shiftOne();
    shiftOne();
    shiftOne();
    shiftOne();
    shiftNull();
    shiftOne();
    shiftOne();
    shiftOne();
    serialSend();
    
}
void seven(void){
    
    shiftOne();
    shiftOne();
    shiftNull();
    shiftNull();
    shiftOne();
    shiftOne();
    shiftNull();
    shiftNull();
    serialSend();
    
}
void eight(void){
    
    shiftOne();
    shiftOne();
    shiftOne();
    shiftOne();
    shiftOne();
    shiftOne();
    shiftOne();
    shiftOne();
    serialSend();
    
}

void nine(void){
    
    shiftOne();
    shiftOne();
    shiftOne();
    shiftNull();
    shiftOne();
    shiftOne();
    shiftOne();
    shiftOne();
    serialSend();
    
}

void clear(void){
    
    shiftNull();
    shiftNull();
    shiftNull();
    shiftNull();
    shiftNull();
    shiftNull();
    shiftNull();
    shiftNull();
    serialSend();
    
}