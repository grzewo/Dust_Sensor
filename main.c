//#include <p24FJ64GA004.h>
#include "init.h"
#include "lcd.h"
#include "sensor.h"


int main(){

    int voltage;

    init_time();
    init_ports();
    init_ADC();


   

    while(TRUE)
    {
        DIGOUT1();
        TMR1=0;
        while(TMR1<(int)0.28*MS);
        
        voltage = ReadADC();
        
        TMR1=0;
        while(TMR1<(int)0.04*MS);       //Zwi?kszy? MS!!
        DIGOUT0(); 
        
        TMR1=0;
        while(TMR1<(int)0.68*MS);
        
        

        /*PORTA = 0xff;
        TMR1=0;
        while (TMR1<DELAY){}

        PORTA = 0x00;
        TMR1=0;
        while (TMR1<DELAY){}
*/
    }
    return 0;
}

