#include <iostream>

int main()
{
	int age;

	std::cout << "Anna ikasi? ";
	std::cin >> age;
	std::cout << "50 vuoden kuluttua olet " << age + 50 << " vuotias" << std::endl;

	// prevent console from closing 
	std::cin >> age;
	return EXIT_SUCCESS;
}