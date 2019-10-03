#include <iostream>

#define paino_raja 2		// painorajan sijainti float jonossa
#define yht_paino 0			// yhteinen paino float jonossa
#define henkilo 1			// .-.

int main()
{
	// Hissi
	float paino[3] = {0,0,0};

	std::cout << "Hissin painoraja (kg): ";
	std::cin >> paino[paino_raja];
	std::cout << std::endl;

	for (int i = 1; i < 5; i++)
	{
		std::cout << i << " henkilon paino (kg): ";
		std::cin >> paino[henkilo];
		std::cout << std::endl;

		// tarkistetaan paino jo nyt ja säästetään käyttäjien aikaa
		if ((paino[yht_paino] += paino[henkilo]) > paino[paino_raja])
		{
			std::cout << "Ylipainoa, hissia ei saa kayttaa!" << std::endl;
			i = 5;
		}
	}
	
	if (paino[yht_paino] <= paino[paino_raja])
	{
		std::cout << "Hissi kaytettavissanne!" << std::endl;
	}
	
	system("pause");
	return EXIT_SUCCESS;
}


