#include <iostream>
#include <string.h>

//funktion prototyyppi
float kolmion_pinta_ala(float kanta, float korkeus);

int main()
{
	// Kolmion pinta-ala
	float kanta, korkeus;

	std::cout << "Anna kolmion kanta metreina: ";
	std::cin >> kanta;
	std::cout << "\nAnna kolmion korkeus metreina: ";
	std::cin >> korkeus;

	std::cout << "Kolmion pinta-ala on: " << kolmion_pinta_ala(kanta, korkeus) << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}


// palauttaa kolmion pinta-alan
float kolmion_pinta_ala(float kan, float kor)
{
	float vastaus;

	// laskutoimitus 
	vastaus = kan * kor / 2.0;

	return vastaus;
}