/**********************************************************
		INTERRUPTS


***********************************************************/

#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 1000000UL
#include <util/delay.h>


int main(void)
{
    DDRD &= ~(1 << DDD2);     // Clear the PD2 pin
    // PD2 (INT0 pin) is now an input

    DDRB|=(1<<DDB0); // Pin PB0 is output

   

    
    MCUCR |= (1 << ISC00);    // set INT0 to trigger on ANY logic change
    GICR |= (1 << INT0);      // Turns on INT0

    sei();                    // turn on interrupts

  
    while(1)
    {

      /*main program loop here */


	
	int i;
	for(i=0;i<100;i++)
		{
		}

    }
}



ISR (INT0_vect)
{

    /* interrupt code here */

PORTB|=(1<<PB0);
_delay_ms(500);
PORTB&=~(1<<PB0);
_delay_ms(500);
}

