/***********************************
	LED BLINKING ....
***********************************/
#include<avr/io.h>
#define F_CPU 1000000UL
#include<util/delay.h>

main()
{	
	DDRB = 0xff;
	while(1) {
		PORTB = 0xff;
		_delay_ms(500);
		PORTB = 0x00;
		_delay_ms(500);
	}
}
