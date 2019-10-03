#include <iostream>


int main()
{
	// chilimukoita
	unsigned int i = 0;
	unsigned int kertaa = 0;

	std::cout << "Monesti tulostetaan Hello World ?\n";
	std::cin >> kertaa;

	while (i < kertaa)
	{
		i++;
		std::cout << i << " " << "Hello World!\n";
	}

	i = 1;
	
	std::cout << "Se oli siistia, tulostetaanpa viela lukujono 1-15.\n";
	system("pause");

	while (i < 16)
	{
		std::cout << i++ << std::endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}

