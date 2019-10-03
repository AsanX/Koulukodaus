#include <iostream>

//#define Virallinen

#define tuomarit 5+1
#define ltulos 6
int main()
{
	// 4 tehtava bonuksella
	unsigned int i = 1;
	float pituus = 0, pisteet[7] = { 0 };

	std::cout << "Hypyn pituus: ";
	std::cin >> pituus;

	// i on alustettu numeroon 1 jotta loop toimisi järkevästi
	while (i < tuomarit)
	{
		std::cout << "Tuomarin " << i << " pisteet: ";
		std::cin >> pisteet[i];
		i++;
	}

	// Kommentoi virallinen jos tahdot epävirallisen
	#ifdef Virallinen
		pisteet[ltulos] = (pisteet[2] + pisteet[3] + pisteet[4]) + 0.9 * pituus;		
	#else
		pisteet[ltulos] = (pisteet[1] + pisteet[2] + pisteet[3] + pisteet[4] + pisteet[5]) + 0.9 * pituus;
	#endif

	std::cout << "Hypyn pisteet: " << pisteet[ltulos] << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}
