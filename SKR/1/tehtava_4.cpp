#include <iostream>

int main()
{
	int num1, num2;

	std::cout << "Syota 1. luku: ";
	std::cin >> num1;
	std::cout << "Syota 2. luku: ";
	std::cin >> num2;

	std::cout << "Lukujen erotus on " <<  num1-num2 << std::endl;
	std::cout << "Lukujen tulo on " << num1 * num2 << std::endl;

	// prevent console from closing 
	std::cin >> num1;
	return EXIT_SUCCESS;
}