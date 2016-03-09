/*
 * GccApplication3.c
 *
 * Created: 06-03-2016 23:18:25
 *  Author: Viv_1
 */ 


#define F_CPU 16000000UL
#include <avr/io.h>

int main(void)
{
	DDRB = 0xFF;
	int i = 0;
	ADCSRA |= (1<<ADEN);
	while(1)
    {
        
		ADCSRA |= (1<<ADSC);
		while(!(ADCSRA & (1<<ADSC)));
		i = ADCL | (ADCH<<8);
		i = i/128;
		PORTB |= (1<<i);
		
		
    }
}