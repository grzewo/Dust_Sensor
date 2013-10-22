#include "sensor.h"




void DIGOUT1()
{
    DS_OUT = 1;
}

void DIGOUT0()
{
    DS_OUT = 0;
}



int ReadADC()
{
AD1CHS = 4; // 1. select analog input channel
AD1CON1bits.SAMP = 1; // 2. start sampling
while (!AD1CON1bits.DONE); // 3. wait for the conversion to complete
return ADC1BUF0; // 4. read the conversion result
}