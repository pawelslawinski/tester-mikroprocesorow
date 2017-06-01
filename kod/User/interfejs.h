/*
 * interfejs.h
 *
 *  Created on: 29.05.2017
 *      Author: Wojtek
 */

/** @file interfejs.h
 *	@author Wojtek
 *
 *	@brief Deklracje funkcji interfejsu u�ytkownika.
 *
 *  @bug Brak.
 */
#ifndef APPLICATION_USER_INTERFEJS_H_
#define APPLICATION_USER_INTERFEJS_H_

#define ROZMIAR_EKRANU_X 248
#define ROZMIAR_EKRANU_Y 124


/**
 * Wy�wietla ekran startowy.
 *
 * Tak naprawd� rysuje kwadrat i k�ko.
 */
void WyswietlEkranStartowy();

/**
 * @brief Wy�wietla ekran pomocy.
 *
 * Wyswietla opcje pomocy, dotycz�ce najcz�stszych problem�w.
 */
void WyswietlPomoc();

/**
 * @brief Wy�wietla g��wne menu.
 *
 * Wyswietla g��wne menu, w kt�rym u�ytkownik wybiera, co chce zrobic z urz�dzeniem.
 */
void WyswietlGlowneMenu();

/**
 * @brief Wy�wietla ekran wyboru procesora.
 *
 * Wy�tietla list� dost�pnych mikroprocesor�w do testowania wraz z podstawow� dokumentacj�.
 */
void WyswietlWyborProcesora();

/**
 * @brief Wy�wietla ekran wybory testu.
 *
 * Wyswietla list� dost�pnych test�w. Lista jest zale�na od wybranego wcze�niej mikroprocesora.
 */
void WyswietlWyborTestu();

/**
 * @brief Odczytywanie stanu przycisk�w.
 *
 * Odczytywanie stan�w przycisk�w znajduj�cych si� na p�ytce.
 * @return zwraca stan przycisk�w, ka�dy bit reprezentuje inny przycisk
 */
int OdczytajStanPrzyciskow();

/**
 * @brief Zapala lub gasi diody LED.
 *
 * Ustawia stan diod LED znajduj�cych si� na p�ytce.
 * @prama led stan diod LED, ka�dy bit odpowiada innej diodzie
 */
void UstawLED(int led);


#endif /* APPLICATION_USER_INTERFEJS_H_ */
