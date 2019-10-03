#include <iostream>

int main()
{
	// postimaksu
	int paino;
	float hinta;

	std::cout << "Kirjeen paino (g): ";
	std::cin >> paino;

	if (paino <= 50)
	{
		hinta = 0.6;
	}
	else if (paino <= 100)
	{
		hinta = 0.9;
	}
	else if (paino <= 250)
	{
		hinta = 1.3;
	}
	else if (paino <= 500)
	{
		hinta = 2.1;
	}
	else if (paino <= 1000)
	{
		hinta = 3.5;
	}
	else if (paino <= 2000)
	{
		hinta = 5.5;
	}

	std::cout << "Kirjeen hinta: " << hinta << "e" << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}


