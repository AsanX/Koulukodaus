#include <iostream>

#define talletus 1
#define nosto 2
#define lopeta 3

int main()
{
	// 3 tehtävä
	float saldo = 0, input = 0;
	unsigned int toiminto = 0;
	
	std::cout << "Tervetuloa pankkiin" << std::endl;
	
	while (toiminto != lopeta)
	{
		std::cout << "Tililla on rahaa " << saldo << " Euroa" << std::endl;
		std::cout << "Valitse toiminto (1.Talleta, 2.Nosta, 3.Lopeta): ";
		std::cin >> toiminto;
		
		switch (toiminto)
		{
			case talletus:
				std::cout << "\nSyota talletettava summa: ";
				std::cin >> input;
				saldo += input;
				break;
			case nosto:
				std::cout << "\nSyota nostettava summa: ";
				std::cin >> input;
				if (input > saldo)
				{
					std::cout << "Ei tarpeeksi rahaa\n";
				}
				else
					saldo -= input;
				break;
			case lopeta:
				break;
			default:
				std::cout << "Syota numero valilta 1-3\n";
				break;
		}
	}

	std::cout << "Nakemiin!" << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}


