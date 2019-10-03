#include <iostream>

int main()
{
	// isoin luku
	int luku[4];

	for (luku[0] = 1; luku[0] < 4; luku[0]++)
	{
		std::cout << "Anna " << luku[0] << ". luku: ";
		std::cin >> luku[luku[0]];
		std::cout << std::endl;
	}

	if (luku[1] > luku[2] && luku[1] > luku[3])
	{
		std::cout << "Luku 1 on isoin" << std::endl;
	}
	else if (luku[2] > luku[1] && luku[2] > luku[3])
	{
		std::cout << "Luku 2 on isoin" << std::endl;
	}
	else
		std::cout << "Luku 3 on isoin" << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}


