/*
 * generator.h
 *
 *  Created on: 29 maj 2017
 *      Author: Wojtek
 */

/** @file generator.h
 *	@author Wojtek
 *
 *	@brief Deklaracje funkcji generatora i jego ustawie�.
 *
 *  @bug Brak.
 */

#ifndef APPLICATION_USER_GENERATOR_H_
#define APPLICATION_USER_GENERATOR_H_

/**
 * @brief Typ generowanego sygna�u.
 * Okre�la mo�liwe do wygenerowania sygna�y.
 */
enum TypSygnalu {
	sinus,		/**< Sygna� sinusoidalny */
	kwadrat, 	/**< Sygan� prostok�tny o wype�nieniu 50% */
	pila, 		/**< Sygna� pi�okszta�tny */
	trojkat		/**< Sygna� tr�jk�tny */
};

/**
 * @brief Struktura przechowuj�ca ustawienia generatora.
 * Przechowuje inforamcje o obecnie generowanym przebiegu.
 */
struct Generator{
	int stanGeneratora; 	/**< Stan generatora, 1 w��czony, 0 wy��czony */
	int czestotliwosc;		/**< Cz�stotliwo�c generowanego sygna�u */
	int amplituda;			/**< Amplituda generowanego sygna�u */
	int offset;				/**< Offset generowanego sygna�u */
	enum TypSygnalu sygnal;	/**< Typ generowanego sygna�u */
};

struct Generator ustawieniaGeneratora; /**< Obecne ustawienia generatora */

/**
 * @brief W��czenie generatora.
 *
 */
void WlaczGenerator();

/**
 * @brief Wy��czenie generatora.
 *
 */
void WylaczGenerator();

/**
 * @brief Generowanie sygna�u.
 *
 * Funkcja symuluje dzia�anie generowanie sygna�u.
 */
void GenerujSygnal();

/**
 * @brief Zmiana obecnych ustawie� generatora.
 *
 * Zmienia ustawienia generatora nadpisuj�c stare ustawienia.
 * @param f cz�stotliow�c sygnalu.
 * @param amp amplituda sygna�u.
 * @param offset sygna�u.
 * @param typ sygna�u.
 */
void ZmienUstawieniaGeneratora(int f, int amp, int offset, enum TypSygnalu sygnal);

#endif /* APPLICATION_USER_GENERATOR_H_ */
