/*
 * alab.c
 *
 *  Created on: May 10, 2022
 *      Author: Ahmed Magdy
 */

#include<avr/io.h>
#include<util/delay.h>

int main (){

	/*set pint direction as output*/

DDRA = 0b11111111 ;

	/*set pin value*/


while (1){

	PORTA = 0b11111110 ;

	_delay_ms(1000) ;

	PORTA = 0b00000001 ;

	_delay_ms(1000) ;
}
}

