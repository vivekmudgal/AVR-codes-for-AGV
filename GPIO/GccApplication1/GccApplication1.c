/*
 * GccApplication1.c
 *
 * Created: 06-03-2016 22:24:44
 *  Author: Viv_1
 */ 


#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0b11111111; //setting A to output

	PORTC=0b10101010;
	while(1){
		PORTC^=0b11111111;
		_delay_ms(1000);
	}


	return 0;
}