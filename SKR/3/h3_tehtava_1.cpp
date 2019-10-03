#include <iostream>

int main()
{
	// Bensadiesel
	float bensa, diesel, bkulutus, dkulutus, bkulut,
		  kmvuosi, dieselvero , dkulut;

	
	std::cout << "km/vuosi : ";
	std::cin >> kmvuosi;

	std::cout << "bensan hinta : ";
	std::cin >> bensa;

	std::cout << "dieselin hinta : ";
	std::cin >> diesel;

	std::cout << "bensa-auton kulutus : ";
	std::cin >> bkulutus;

	std::cout << "bensa-auton kulutus : ";
	std::cin >> dkulutus;

	std::cout << "kayttovoimavero : ";
	std::cin >> dieselvero;


	bkulut = kmvuosi / 100 * bkulutus * bensa;
	std::cout << "Bensa-auton kulut: " << bkulut << "e" << std::endl;

	dkulut = kmvuosi / 100 * dkulutus * diesel + dieselvero;
	std::cout << "dieselauton kulut: " << dkulut << "e" << std::endl;

	if (bkulut > dkulut)
	{
		bkulut = bkulut - dkulut;
		std::cout << "dieselauto on: " << bkulut << "e halvempi" << std::endl;
	}
	else
	{
		dkulut = dkulut - bkulut;
		std::cout << "bensa-auto on: " << dkulut << "e halvempi" << std::endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}


