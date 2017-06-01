/*
 * generator.c
 *
 *  Created on: 29 maj 2017
 *      Author: Wojtek
 */


/** @file generator.c
 *	@author Wojtek
 *
 *	@brief Funkcje generatora.
 *
 *  @bug Brak.
 */

void WlaczGenerator()
{
	ustawieniaGeneratora.stanGeneratora = 1;
}


void WylaczGenerator()
{
	ustawieniaGeneratora.stanGeneratora = 0;
}


void GenerujSygnal()
{
	int wyjscie;

	int i = 0;
	for(; i<100; i++)
	{
		wyjscie = i*10;
	}
}


void ZmienUstawieniaGeneratora(int f, int amp, int offset, enum TypSygnalu sygnal)
{
	ustawieniaGeneratora.czestotliwosc = f;
	ustawieniaGeneratora.amplituda = amp;
	ustawieniaGeneratora.offset = offset;
	ustawieniaGeneratora.sygnal = sygnal;
}
