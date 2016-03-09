/*
 * GccApplication2.c
 *
 * Created: 06-03-2016 22:32:17
 *  Author: Viv_1
 */ 


#define F_CPU 12000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <math.h>

void main()
{

	int i=0;
	DDRB |= (1<<PB3);
	// Insert code

	TCCR0|=(1<<WGM00)|(1<<WGM01)|(1<<CS00)|(1<<COM01); //Initializing fast pwm (non-inverting mode.)

	OCR0=0;
	while(1){
		OCR0 = 255;
		_delay_ms(1000);
		OCR0 = 155;
		_delay_ms(1000);
		OCR0 = 0;
		_delay_ms(1000);
		
	}




	
}