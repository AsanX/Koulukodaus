#include <iostream>

int main()
{
	// 
	float tulos;
	char osa1[20], osa2[20];
	char lasku[50], operaattori;
	int num1 , num2;
	bool flag;

	std::cout << "Syötä lasku (esim 1+1):";
	std::cin >> lasku;

	for (int i = 0; i < strlen(lasku); i++)
	{
		if (lasku[i] == '/' || lasku[i] == '*' || lasku[i] == '+' || lasku[i] == '-')
		{
			// kopioidaan operaattori talteen
			operaattori = lasku[i];
			// kopioidaan laskun 1 osa talteen
			memcpy(osa1, &lasku[0], i);
			// muutetaan 1 osa integeriksi
			num1 = atoi(osa1);

			// kopioidaan laskun 2 osa talteen
			memcpy(osa2, &lasku[i+1], strlen(&lasku[i]));
			// muutetaan 2 osa integeriksi
			num2 = atoi(osa2);

		}
	}
	switch (operaattori)
	{
		case '/':
 			tulos = num1 / num2;
			break;
		case '*':
			tulos = num1 * num2;
			break;
		case '-':
			tulos = num1 - num2;
			break;
		case '+':
			tulos = num1 + num2;
			break;
	}

	// tulostetaan lasku ja tulos
	std::cout << lasku << " = " << tulos << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}


