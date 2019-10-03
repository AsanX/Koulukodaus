#include <iostream>

int main()
{
	// 1.a

	int i = 5; // apumuuttuja
	int n = 0; // 2 apumuuttuja

	while (i != -6)
	{
		std::cout << i << " ";
		i--;
	}

	// siistitään konsolia
	std::cout << "\n";

	// 1.b
	while (n < 51)
	{
		if (n % 2 == 0)
			std::cout << n << std::endl;
		n++;
	}
	system("pause");
	return EXIT_SUCCESS;
}


