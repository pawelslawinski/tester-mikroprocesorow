/*
 *
 * test.c
 *
 *  Created on: 29 maj 2017
 *      Author: Wojtek
 */

/** @file test.c
 *  @brief Funkcje testuj¹ce.
 *
 *  @bug Brak.
 */

void OdczytajTypTestu()
{
	if(test = Odczyt())
	{
		stan = wybrany;
	}

}

void Testuj()
{
	stan = rozpoczety;

	wyborProcesora();
	PrzygotowywanieTestu();

	stan = w_trakcie;
	switch(test)
	{
		case domyslny:
			TestujPortyIN();
			TestujPortyOUT();
			break;
		case podstawowy:
			TestujPortyIN();
			TestujPortyOUT();
			break;
		case rozszerzony:
			TestujPortyIN();
			TestujPortyOUT();
			TestujADC();
			TestujTimer(1);
			break;
		case szybki:
			TestujPortyIN();
			TestujPortyOUT();
			TestujTimer(1);
			break;
		case dokladny:
			TestujPortyIN();
			TestujPortyOUT();
			TestujADC();
			TestujTimer(1);
			TestujTimer(2);
			break;
	}

	stan = zakonczony;

}

int TestujADC()
{
	Zaprogramuj(testADC)
	WlaczGenerator();
	ZmienUstawieniaGeneratora(10000, 1, 0, sinus);
	GenerujSygnal();

	return SprawdzPopranoscDanych(ADC);
}

int TestujPortyIN()
{
	Zaprogramuj(PortIN);
	WlaczGenerator();
	ZmienUstawieniaGeneratora(50000, 5, 0, kwadrat);
	GenerujSygnal();

	return SprawdzPoprawnoscDanych(PortIN);
}

int TestujPortyOUT()
{
	Zaprogramuj(PortOUT);
	OdczytajPorty();

	return SprawdzPoprawnoscDanych(PortOUT);
}

int TestujTimer(int numerTimera)
{
	int Timer;

	switch(numerTimera)
	{
		case 1:
			Timer = Timer1;
			break;
		case 2:
			Timer = Timer2;
			break;
		default:
			Timer = Timer1;
	}

	Zaprogramuj(Timer);

	return SprawdzPoprawnoscDanych(Timer);
}
