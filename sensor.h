#ifndef SENSOR_H
#define	SENSOR_H

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef	__cplusplus
}
#endif

#endif	/* SENSOR_H */

#define MS 15.625 //ok 1ms przy taktowaniu 8 MHz i preskalerze 1:256 - pogrzeba? z rejestrem RCDIV w CLKDIV jakby co?
                //Wszystkie definicje czasu maja byc oparte na tym - w przypadku zewn?trzenego osc
                //b?dzie tylko to do wymiany

#define DS_OUT PORTBbits.RB2

extern void DIGOUT0()
extern void DIGOUT1();
extern int ReadADC();

