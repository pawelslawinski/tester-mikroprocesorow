/*
 * programator.h
 *
 *  Created on: 29 maj 2017
 *      Author: Wojtek
 */

/** @file programator.h
 *	@author Wojtek
 *
 *	@brief Deklracje funkcji programatora i niezbêdnych zmiennych.
 *
 *  @bug Brak.
 */

#ifndef APPLICATION_USER_PROGRAMATOR_H_
#define APPLICATION_USER_PROGRAMATOR_H_


int ID_programatora; 	/**< ID wykorzystywanego programatora*/
int ID_programu;		/**< ID wybranego programu */

/**
 * @brief Rodzaje testowanych uk³adów.
 * Okreœla mo¿liwe do przetestowania uk³ady mikroprocesora.
 */
enum TestowanyUklad {
	ADC,		/**< Przetwornik A/C */
	PortIN,		/**< Porty wejœciowe */
	PortOUT,	/**< Porty wyjœciowe */
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
 * @brief Wybór programu testuj¹cego.
 *
 * Program wybierany jest na podstawie testowanego uk³adu mikroprocesora oraz samego mikroprocesora.
 * @param uklad okreœla testowany uk³ad mikroprocesora.
 * @return zwraca id odpowiedniego programu testuj¹cego.
 */
int WybierzProgram(enum TestowanyUklad uklad);

#endif /* APPLICATION_USER_PROGRAMATOR_H_ */
