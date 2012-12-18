/*******************************************************************
  LED LIGHT UP USING INPUT COONTROL
WARNING : Put a resistor in PB0 to groung
*******************************************************************/
#include<avr/io.h>
#define F_CPU 1000000UL
#include<util/delay.h>


main()
{	
	DDRC = 0xff; // o/p
	DDRB = 0x00; // i/p
	while(1) {
 		while(PINB&0x01) {
			PORTC = 0xff;
		}
	PORTC = 0x00;
	}
}
