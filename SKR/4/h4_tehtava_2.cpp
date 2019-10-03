#include <iostream>

int main()
{
	// verotus
	static float kunnallisvero = 19.25/100;
	float vero,tuloveroeuro,tuloveropros, tulo;
	
	std::cout << "Bruttotulosi tanavuonna: ";
	std::cin >> tulo;

	if (tulo < 17600)
	{
		vero = 0;
	}
	else if (tulo >= 17600 && tulo <= 26400)
	{
		tuloveroeuro = 8.00;	// €
		tuloveropros = 6.00;	// %
	}
	else if (tulo >= 26400 && tulo <= 43500 )
	{
		tuloveroeuro = 536.00;
		tuloveropros = 17.25;
	}
	else if (tulo >= 43500 && tulo <= 76100)
	{
		tuloveroeuro = 3485.75;
		tuloveropros = 21.25;
	}
	else
	{
		tuloveroeuro = 10413.25;
		tuloveropros = 31.25;
	}

	vero = tuloveroeuro + (tuloveropros / 100 * tulo) + (tulo * kunnallisvero);

	std::cout << "Sinulta viedaan: " << vero << "e" << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}


