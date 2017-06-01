/*
 * interfejs.h
 *
 *  Created on: 29.05.2017
 *      Author: Wojtek
 */

/** @file interfejs.h
 *	@author Wojtek
 *
 *	@brief Deklracje funkcji interfejsu u¿ytkownika.
 *
 *  @bug Brak.
 */
#ifndef APPLICATION_USER_INTERFEJS_H_
#define APPLICATION_USER_INTERFEJS_H_

#define ROZMIAR_EKRANU_X 248
#define ROZMIAR_EKRANU_Y 124


/**
 * Wyœwietla ekran startowy.
 *
 * Tak naprawdê rysuje kwadrat i kó³ko.
 */
void WyswietlEkranStartowy();

/**
 * @brief Wyœwietla ekran pomocy.
 *
 * Wyswietla opcje pomocy, dotycz¹ce najczêstszych problemów.
 */
void WyswietlPomoc();

/**
 * @brief Wyœwietla g³ówne menu.
 *
 * Wyswietla g³ówne menu, w którym u¿ytkownik wybiera, co chce zrobic z urz¹dzeniem.
 */
void WyswietlGlowneMenu();

/**
 * @brief Wyœwietla ekran wyboru procesora.
 *
 * Wyœtietla listê dostêpnych mikroprocesorów do testowania wraz z podstawow¹ dokumentacj¹.
 */
void WyswietlWyborProcesora();

/**
 * @brief Wyœwietla ekran wybory testu.
 *
 * Wyswietla listê dostêpnych testów. Lista jest zale¿na od wybranego wczeœniej mikroprocesora.
 */
void WyswietlWyborTestu();

/**
 * @brief Odczytywanie stanu przycisków.
 *
 * Odczytywanie stanów przycisków znajduj¹cych siê na p³ytce.
 * @return zwraca stan przycisków, ka¿dy bit reprezentuje inny przycisk
 */
int OdczytajStanPrzyciskow();

/**
 * @brief Zapala lub gasi diody LED.
 *
 * Ustawia stan diod LED znajduj¹cych siê na p³ytce.
 * @prama led stan diod LED, ka¿dy bit odpowiada innej diodzie
 */
void UstawLED(int led);


#endif /* APPLICATION_USER_INTERFEJS_H_ */
