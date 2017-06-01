/*
 * generator.h
 *
 *  Created on: 29 maj 2017
 *      Author: Wojtek
 */

/** @file generator.h
 *	@author Wojtek
 *
 *	@brief Deklaracje funkcji generatora i jego ustawieñ.
 *
 *  @bug Brak.
 */

#ifndef APPLICATION_USER_GENERATOR_H_
#define APPLICATION_USER_GENERATOR_H_

/**
 * @brief Typ generowanego sygna³u.
 * Okreœla mo¿liwe do wygenerowania sygna³y.
 */
enum TypSygnalu {
	sinus,		/**< Sygna³ sinusoidalny */
	kwadrat, 	/**< Sygan³ prostok¹tny o wype³nieniu 50% */
	pila, 		/**< Sygna³ pi³okszta³tny */
	trojkat		/**< Sygna³ trójk¹tny */
};

/**
 * @brief Struktura przechowuj¹ca ustawienia generatora.
 * Przechowuje inforamcje o obecnie generowanym przebiegu.
 */
struct Generator{
	int stanGeneratora; 	/**< Stan generatora, 1 w³¹czony, 0 wy³¹czony */
	int czestotliwosc;		/**< Czêstotliwoœc generowanego sygna³u */
	int amplituda;			/**< Amplituda generowanego sygna³u */
	int offset;				/**< Offset generowanego sygna³u */
	enum TypSygnalu sygnal;	/**< Typ generowanego sygna³u */
};

struct Generator ustawieniaGeneratora; /**< Obecne ustawienia generatora */

/**
 * @brief W³¹czenie generatora.
 *
 */
void WlaczGenerator();

/**
 * @brief Wy³¹czenie generatora.
 *
 */
void WylaczGenerator();

/**
 * @brief Generowanie sygna³u.
 *
 * Funkcja symuluje dzia³anie generowanie sygna³u.
 */
void GenerujSygnal();

/**
 * @brief Zmiana obecnych ustawieñ generatora.
 *
 * Zmienia ustawienia generatora nadpisuj¹c stare ustawienia.
 * @param f czêstotliowœc sygnalu.
 * @param amp amplituda sygna³u.
 * @param offset sygna³u.
 * @param typ sygna³u.
 */
void ZmienUstawieniaGeneratora(int f, int amp, int offset, enum TypSygnalu sygnal);

#endif /* APPLICATION_USER_GENERATOR_H_ */
