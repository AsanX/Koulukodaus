#include <iostream>
#include <string.h>

//funktion prototyyppi
float koronlasku(float korkop, float laina_aika, float laina_maara);

int main()
{
	// Korkolaskuri
	float maara, korko, aika;

	std::cout << "\nLainan maara (euro): ";
	std::cin >> maara;
	std::cout << "\nKorkoprosentti: ";
	std::cin >> korko;
	std::cout << "\nLaina-aika (vuosia): ";
	std::cin >> aika;

	std::cout << "\nKorot laina-ajalta: " << koronlasku(korko, aika, maara) << " euroa" << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}


// palauttaa lainan korot korkoajalta
float koronlasku(float korkop, float laina_aika, float laina_maara)
{
	float vastaus;

	// laskutoimitus 
	korkop /= 100.0;
	vastaus = laina_maara * laina_aika * korkop;

	return vastaus;
}
