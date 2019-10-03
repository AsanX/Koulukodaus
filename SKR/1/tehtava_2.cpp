#include <iostream>

int main()
{
	int num;

	std::cout << "Syota luku:";
	std::cin >> num;
	std::cout << "Syotit luvun " << num;

	// prevent console from closing
	std::cin >> num;
	return EXIT_SUCCESS;
}