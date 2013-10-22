#ifndef LCD_H
#define	LCD_H

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef	__cplusplus
}
#endif

#endif	/* LCD_H */

#define LCD_RD PORTBbits.RB5
#define LCD_WR PORTBbits.RB6
#define LCD_RS PORTBbits.RB7
#define LCD_RESET PORTBbits.RB8
#define LCD_CS PORTBbits.RB9

/* Nie robi? definicji TRISbit�w i bit�w danych bo wygodniaj
 * mi b?dzie wrzuci? to do init�w.
 * Porty danych (DB0-7) to PORTC 0 - 7*/

