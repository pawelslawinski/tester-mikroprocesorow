/*
 * programator.h
 *
 *  Created on: 29 maj 2017
 *      Author: Wojtek
 */

/** @file programator.h
 *	@author Wojtek
 *
 *	@brief Deklracje funkcji programatora i niezb�dnych zmiennych.
 *
 *  @bug Brak.
 */

#ifndef APPLICATION_USER_PROGRAMATOR_H_
#define APPLICATION_USER_PROGRAMATOR_H_


int ID_programatora; 	/**< ID wykorzystywanego programatora*/
int ID_programu;		/**< ID wybranego programu */

/**
 * @brief Rodzaje testowanych uk�ad�w.
 * Okre�la mo�liwe do przetestowania uk�ady mikroprocesora.
 */
enum TestowanyUklad {
	ADC,		/**< Przetwornik A/C */
	PortIN,		/**< Porty wej�ciowe */
	PortOUT,	/**< Porty wyj�ciowe */
	Timer1,		/**< Timer 1 */
	Timer2		/**< Timer 2 */
};

/**
 * @brief Programowanie mikroprocesora.
 *
 * Programowanie mikroprocesora wybranym programem.
 * @prama uklad uklad okresla testowany uklad mikroprocesora.
 */
void Zaprogramuj(enum TestowanyUklad uklad);

/**
 * @brief Wyb�r programu testuj�cego.
 *
 * Program wybierany jest na podstawie testowanego uk�adu mikroprocesora oraz samego mikroprocesora.
 * @param uklad okre�la testowany uk�ad mikroprocesora.
 * @return zwraca id odpowiedniego programu testuj�cego.
 */
int WybierzProgram(enum TestowanyUklad uklad);

#endif /* APPLICATION_USER_PROGRAMATOR_H_ */
