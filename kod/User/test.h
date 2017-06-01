/*
 * test.h
 *
 *  Created on: 29 maj 2017
 *      Author: Wojtek
 */

/** @file test.h
 *	@author Wojtek
 *
 *	@brief Deklracje funkcji testuj¹cych oraz niezbêdnych zmiennych.
 *
 *  @bug Brak.
 */

#ifndef APPLICATION_USER_TEST_H_
#define APPLICATION_USER_TEST_H_

#include "generator.h"
#include "programator.h"

/**
 * Typ testu.
 * Okreœla dostêpne typu testowania mikroprocesorów.
 */
enum TypTestu {
	domyslny,		/**< Domyœlny test. Testuje tylko porty IN/OUT */
	podstawowy, 	/**< Podstawowy test. Testuje porty IN/OUT */
	rozszerzony,	/**< Rozszerzony test. Testuje porty IN/OUT, ADC oraz Timer1. */
	szybki, 		/**< Szybki test. Testuje porty IN/OUT i Timer1 */
	dokladny		/**< Dok³adny test. Testuje porty IN/OUT, ADC, Timer1 oraz Timer2 */
};

/**
 * Stan testu.
 * Okreœla dostêpne stany przeprowadzanego testu.
 */
enum StanTestu {
	brak_danych,	/**< Jeszcze nie zosta³ wybrany ¿aden test do przeprowadzenia */
	wybrany,		/**< Test zosta³ ju¿ wybrany */
	rozpoczety,		/**< Test w³aœnie siê rozpocz¹³ */
	w_trakcie,		/**< Test jest wykonywany */
	zakonczony, 	/**< Test zosta³ zakoñczony */
	bledny			/**< Podczas testu wyst¹pi³ b³¹d */
};

/**
 * Aktualny stan testu.
 * Zmienna okreœla w jakim obecnie stanie znajduje siê test.
 */
enum StanTestu stan;

/**
 * Wybrany typ testu.
 * Zmienna okreœla jaki typ testu wybra³ u¿ytkownik.
 */
enum TypTestu test;

/**
 * Wybrany procesor.
 * Zmienna okreœla jaki procesor wybra³ u¿ytkownik do testowania.
 */
int ID_Procesora;
/**
 * Aktualny postêp testu.
 * Zmienna okreœla ile % testu zosta³o ju¿ wykonane.
 */
int postepTestu;
/**
 * Tablica ID czujników.
 * Tablica przechowuje adresy wykorzystywanych czujników, które potrzebne s¹ do komunikacji.
 */
int ID_Czujnika[5] = {234, 345, 456, 567, 666};


/**
 * @brief Odczytuje typ wybranego testu.
 *
 * Odcztywany jest typ testu wybrany przez u¿ytkownika poprzez interfejs.
 * Nastêpnie zmieniany jest stan testu na "wybrany".
 */
void OdczytajTypTestu();


void wyborProcesora();
void PrzygotowywanieTestu();

/**
 * @brief Testowanie mikroprocesora
 *
 * Mikroprocesor jest testowany wybranym wczeœniej testem.
 */
void Testuj();

/**
 * @brief Testowanie przetwornika A/C.
 *
 * Mikroprocesor programowany jest odpowiednim programem testuj¹cym przetwornik A/C.
 * Sygna³ pobudzaj¹cy generowany jest przez ustawiony generator sygna³em sinusoidalnym.
 * Na koñcu sprawdzana jest poprawnoœc otrzymanych wyników.
 * @return 1 jeœli test zakoñczy³ siê sukcesem, 0 jeœli wyst¹pi³ b³¹d.
 */
int TestujADC();

/**
 * @brief Testowanie portów wejœciowych.
 *
 * Mikroprocesor programowany jest odpowiednim programem testuj¹cym sprawnoœc portów wejœciowych.
 * Prostok¹tny sygna³ testuj¹cy generowany jest przez generator.
 * Na koñcu sprawdzana jest poprawnoœc otrzymanych wyników.
 * @return 1 jeœli test zakoñczy³ siê sukcesem, 0 jeœli wyst¹pi³ b³¹d.
 */
int TestujPortyIN();

/**
 * @brief Testowanie portów wyjœciowych.
 *
 * Mikroprocesor programowany jest odpowiednim programem testuj¹cym sprawnoœc portów wyjœciowych.
 * Sygna³y generowane przez mikroprocesor s¹ odczytywane przez odpowiednie czujniki.
 * Na koñcu sprawdzana jest poprawnoœc otrzymanych wyników.
 * @return 1 jeœli test zakoñczy³ siê sukcesem, 0 jeœli wyst¹pi³ b³¹d.
 */
int TestujPortyOUT();

/**
 * @brief Testowanie uk³adów czasowych.
 *
 * Mikroprocesor programowany jest odpowiednim programem testuj¹cym sprawnoœc uk³adów czasowych.
 * Na koñcu sprawdzana jest poprawnoœc dzia³ania mikroprocesora.
 * @param numerTimera numer testowanego Timera.
 * @return 1 jeœli test zakoñczy³ siê sukcesem, 0 jeœli wyst¹pi³ b³¹d.
 */
int TestujTimer(int numerTimera);


#endif /* APPLICATION_USER_TEST_H_ */
