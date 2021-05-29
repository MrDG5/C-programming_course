#include <conio.h>
#include <iostream>
//без using namespace std:
int main()
{
	int i = 42;
	double d = 3.14;
	const char *s = "C-style string";
	char c = '\0';

	std::cout << "This is an intiger " << "\n";
	std::cout << "This is a double " << d << "\n";
	std::cout << "This is a \"" << s << "\"\n";
  /*
	std::cout << "Enter an integer and a double:\n";
	std::cin >> i >> d;
	std::cout << "Your input is " << i << ", " << d << "\n";
	*/
	while (0)
	{
		std::cout << "Enter	1 things" << "\n";
		std::cin >> c;
		std::cout << "Your things:\n" << c << "\n\n";
		i = 0;
	}

	while (std::cin.get(c)) { // на каждой итерации считываем один символ в переменную c
											 /* здесь можно пользоваться значением прочитанным в переменную c */
		if (c != 'a')
			std::cout << c; // выводим символ, если он не равен 'a'
	}

	return 0;
}