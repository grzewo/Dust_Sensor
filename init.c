//#include <p24FJ64GA004.h>
#include "init.h"



void init_time()
{
    OSCCON = 0x0000;  //Fast RC Oscillator (FRC) - 8MHz / 2 = 4MHz
    CLKDIV = 0x0000;  //1:1
    T1CON = 0x8030;   //Timer 1 ON; Prescaler 1:256
}

void init_ports()
{
    AD1PCFG = 0xfef;  //linia AN4 (RB2) analogowa - reszta cyfrowe
    PORTA = 0x0000;
    PORTB = 0x0000;
    PORTC = 0x0000;
}

void initADC()
{
    AD1PCFG = 0xffef; // tylko kana? AN4
    AD1CON1 = 0x00E0; // automatic conversion start after sampling
    AD1CSSL = 0; // no scanning required
    AD1CON2 = 0; // use MUXA, AVss and AVdd are used as Vref+/-
    AD1CON3 = 0x1F02; // Tsamp = 32 x Tad; Tad=125ns
    AD1CON1bits.ADON = 1; // turn on the ADC
}

