/*
 * interfejs.c
 *
 *  Created on: 29.05.2017
 *      Author: Wojtek
 */

/** @file interfejs.c
 *	@author Wojtek
 *
 *	@brief Funkcje interfejsu u¿ytkownika.
 *
 *  @bug Brak.
 */

void WyswietlEkranStartowy()
{
	RysujKwadrat(20, 10, 100);
	RysujKolo(50, 60, 80);
}


void WyswietlPomoc()
{
	RysujKwadrat(20, 10, 100);
	RysujKolo(50, 60, 80);
}


void WyswietlGlowneMenu()
{
	RysujKwadrat(20, 10, 100);
	RysujKolo(50, 60, 80);
}


void WyswietlWyborProcesora()
{
	RysujKwadrat(20, 10, 100);
	RysujKolo(50, 60, 80);
}


void WyswietlWyborTestu()
{
	RysujKwadrat(20, 10, 100);
	RysujKolo(50, 60, 80);
}


int OdczytajStanPrzyciskow()
{
	static int poprzedniStan = 0;
	int obecnyStan = 40;

	if(poprzedniStan != obecnyStan)
	{
		poprzedniStan = obecnyStan;
		return obecnyStan;
	}

	return 0;
}


void UstawLED(int led)
{
	int portWyjsciowy = led;
}
