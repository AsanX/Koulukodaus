#include <iostream>

#define alipaino 20.7
#define normaali 26.4
#define lieva_ylipaino 27.8
#define ylipaino 31.1

int main()
{
	// painoindeksi
	float indeksi, paino, pituus;
	char tulkinta[20] = { '\0' };

	std::cout << "Paino: ";
	std::cin >> paino;
	std::cout << "\n";

	std::cout << "Pituus: ";
	std::cin >> pituus;
	std::cout << "\n";

	indeksi = paino / (pituus*pituus);

	if (indeksi <= alipaino)
		memcpy(&tulkinta[0], "alipaino", 8);
	else if ((indeksi > alipaino) && (indeksi < normaali))
		memcpy(&tulkinta[0], "normaali", 8);
	else if ((indeksi > normaali) && (indeksi < lieva_ylipaino))
		memcpy(&tulkinta[0], "lieva ylipaino", 14);
	else
		memcpy(&tulkinta[0], "ylipaino", 8);

	std::cout << "Painoindeksisi on: " << indeksi << ", " << tulkinta << std::endl;
	
	system("pause");
	return EXIT_SUCCESS;
}


