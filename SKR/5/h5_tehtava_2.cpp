#include <iostream>

int main()
{
	// 2 tehtävä
	int hajottaja = true;

	while (hajottaja != false)
	{
		std::cout << "Koita arvata luku, joka lopettaa kyselyn: ";
		std::cin >> hajottaja;
	}
	std::cout << "hihih voitit pelin" << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}


