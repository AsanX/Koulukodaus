#include <iostream>

int main()
{
	// Kumpi pidempi
	float pituus_1, pituus_2;

	std::cout << "\n1. henkilon pituus: ";
	std::cin >> pituus_1;
	std::cout << "\n2. henkilon pituus: ";
	std::cin >> pituus_2;

	if (pituus_1 > pituus_2)
		std::cout << "Henkilo 1 on pidempi kuin henkilo 2" << std::endl;
	else 
		std::cout << "Henkilo 2 on pidempi kuin henkilo 1" << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}


