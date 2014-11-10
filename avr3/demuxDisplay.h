//
//  demuxDisplay.h
//  avr3
//
//  Created by Pop Mihai on 28/10/14.
//  Copyright (c) 2014 Mihai. All rights reserved.
//
//
//  Biblioteca functii pentru demultiplexarea semnalelor catre afisaj 7 segmente
//
//
// 

void A0(){
    PORTD = 0x00;
}
void A1(){
    PORTD = 0x04;
}
void A2(){
    PORTD = 0x08;
    PORTD = 0x0C;
    PORTD = 0x00;
    PORTD = 0x18;
    PORTD = 0x14;
    PORTD = 0x1C;
}
void A3(){
    PORTD = 0x0C;
}
void A4(){
    PORTD = 0x10;
}
void A5(){
    PORTD = 0x14;
}
void A6(){
    PORTD = 0x18;
}
void A7(){
    PORTD = 0x1C;
}
