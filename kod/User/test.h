/*
 * test.h
 *
 *  Created on: 29 maj 2017
 *      Author: Wojtek
 */

/** @file test.h
 *	@author Wojtek
 *
 *	@brief Deklracje funkcji testuj�cych oraz niezb�dnych zmiennych.
 *
 *  @bug Brak.
 */

#ifndef APPLICATION_USER_TEST_H_
#define APPLICATION_USER_TEST_H_

#include "generator.h"
#include "programator.h"

/**
 * Typ testu.
 * Okre�la dost�pne typu testowania mikroprocesor�w.
 */
enum TypTestu {
	domyslny,		/**< Domy�lny test. Testuje tylko porty IN/OUT */
	podstawowy, 	/**< Podstawowy test. Testuje porty IN/OUT */
	rozszerzony,	/**< Rozszerzony test. Testuje porty IN/OUT, ADC oraz Timer1. */
	szybki, 		/**< Szybki test. Testuje porty IN/OUT i Timer1 */
	dokladny		/**< Dok�adny test. Testuje porty IN/OUT, ADC, Timer1 oraz Timer2 */
};

/**
 * Stan testu.
 * Okre�la dost�pne stany przeprowadzanego testu.
 */
enum StanTestu {
	brak_danych,	/**< Jeszcze nie zosta� wybrany �aden test do przeprowadzenia */
	wybrany,		/**< Test zosta� ju� wybrany */
	rozpoczety,		/**< Test w�a�nie si� rozpocz�� */
	w_trakcie,		/**< Test jest wykonywany */
	zakonczony, 	/**< Test zosta� zako�czony */
	bledny			/**< Podczas testu wyst�pi� b��d */
};

/**
 * Aktualny stan testu.
 * Zmienna okre�la w jakim obecnie stanie znajduje si� test.
 */
enum StanTestu stan;

/**
 * Wybrany typ testu.
 * Zmienna okre�la jaki typ testu wybra� u�ytkownik.
 */
enum TypTestu test;

/**
 * Wybrany procesor.
 * Zmienna okre�la jaki procesor wybra� u�ytkownik do testowania.
 */
int ID_Procesora;
/**
 * Aktualny post�p testu.
 * Zmienna okre�la ile % testu zosta�o ju� wykonane.
 */
int postepTestu;
/**
 * Tablica ID czujnik�w.
 * Tablica przechowuje adresy wykorzystywanych czujnik�w, kt�re potrzebne s� do komunikacji.
 */
int ID_Czujnika[5] = {234, 345, 456, 567, 666};


/**
 * @brief Odczytuje typ wybranego testu.
 *
 * Odcztywany jest typ testu wybrany przez u�ytkownika poprzez interfejs.
 * Nast�pnie zmieniany jest stan testu na "wybrany".
 */
void OdczytajTypTestu();


void wyborProcesora();
void PrzygotowywanieTestu();

/**
 * @brief Testowanie mikroprocesora
 *
 * Mikroprocesor jest testowany wybranym wcze�niej testem.
 */
void Testuj();

/**
 * @brief Testowanie przetwornika A/C.
 *
 * Mikroprocesor programowany jest odpowiednim programem testuj�cym przetwornik A/C.
 * Sygna� pobudzaj�cy generowany jest przez ustawiony generator sygna�em sinusoidalnym.
 * Na ko�cu sprawdzana jest poprawno�c otrzymanych wynik�w.
 * @return 1 je�li test zako�czy� si� sukcesem, 0 je�li wyst�pi� b��d.
 */
int TestujADC();

/**
 * @brief Testowanie port�w wej�ciowych.
 *
 * Mikroprocesor programowany jest odpowiednim programem testuj�cym sprawno�c port�w wej�ciowych.
 * Prostok�tny sygna� testuj�cy generowany jest przez generator.
 * Na ko�cu sprawdzana jest poprawno�c otrzymanych wynik�w.
 * @return 1 je�li test zako�czy� si� sukcesem, 0 je�li wyst�pi� b��d.
 */
int TestujPortyIN();

/**
 * @brief Testowanie port�w wyj�ciowych.
 *
 * Mikroprocesor programowany jest odpowiednim programem testuj�cym sprawno�c port�w wyj�ciowych.
 * Sygna�y generowane przez mikroprocesor s� odczytywane przez odpowiednie czujniki.
 * Na ko�cu sprawdzana jest poprawno�c otrzymanych wynik�w.
 * @return 1 je�li test zako�czy� si� sukcesem, 0 je�li wyst�pi� b��d.
 */
int TestujPortyOUT();

/**
 * @brief Testowanie uk�ad�w czasowych.
 *
 * Mikroprocesor programowany jest odpowiednim programem testuj�cym sprawno�c uk�ad�w czasowych.
 * Na ko�cu sprawdzana jest poprawno�c dzia�ania mikroprocesora.
 * @param numerTimera numer testowanego Timera.
 * @return 1 je�li test zako�czy� si� sukcesem, 0 je�li wyst�pi� b��d.
 */
int TestujTimer(int numerTimera);


#endif /* APPLICATION_USER_TEST_H_ */
