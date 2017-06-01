/*
 * programator.c
 *
 *  Created on: 29 maj 2017
 *      Author: Wojtek
 */

/** @file programator.c
 *	@author Wojtek
 *
 *	@brief Funkcje programatora.
 *
 *  @bug Brak.
 *  @edit Pawel
 */

void Zaprogramuj(enum TestowanyUklad uklad)
{
	ID_programu = WybierzProgram(uklad);
	ID_Procesora += 100;

}


int WybierzProgram(enum TestowanyUklad uklad)
{
	int x = 0;

	switch(uklad)
	{
		case ADC:
			x = 1;
			break;
		case PortIN:
			x = 5;
			break;
		case PortOUT:
			x = 666;
			break;
		case Timer1:
			x = 3;
			break;
		case Timer2:
			x = 98;
			break;
		case Timer3:
			x = 12;
			break;
		case Timer4:
			x = 23;
			break;
	}

	return x;
}
