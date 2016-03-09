/*
 * interrupt.c
 *
 * Created: 09-03-2016 14:39:35
 *  Author: Viv_1
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int main(void)
{
	DDRB= 0xff;
	DDRD &=(0<<PD3);
	MCUCR |= (1<<ISC10);
	GICR |= (1<<INT1);
	sei();
    while(1)
    {
        //TODO:: Please write your application code 
		PORTB = 0b10101010;
    }
	
	
}

ISR(INT1_vect){
	PORTB = 0b01010101;
	_delay_ms(100);
	PORTB = 0b10101010;
	_delay_ms(100);
}