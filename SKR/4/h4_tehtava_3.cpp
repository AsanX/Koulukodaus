#include <iostream>


float muunnos(float cels, float fahr);

int main()
{
	// lämpötilamuunnin
	float lampo;
	char tunniste;

	std::cout << "C -> F vai F -> C ?\n Valitse C -> F kirjoittamalla C: ";
	std::cin >> tunniste;

	
	if (tunniste == 'c' || tunniste == 'C')
	{
		std::cout << "Celsius: "; std::cin >> lampo; std::cout << std::endl;
		std::cout << "Fahrenheit: " << muunnos(lampo, 0) << std::endl;
	}
	else if (tunniste == 'f' || tunniste == 'F')
	{
		std::cout << "Fahrenheit: "; std::cin >> lampo; std::cout << std::endl;
		std::cout << "Celsius: " << muunnos(0, lampo) << std::endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}


float muunnos(float cels, float fahr)
{
	// onko cels jotain?
	if (cels)
	{
		fahr = cels * 1.8 + 32;
		return fahr;
	}
	// entä onko fahr jotain jos cels ei ole
	else if (fahr)
	{
		cels = (fahr - 32) / 1.8;
		return cels;
	}
}