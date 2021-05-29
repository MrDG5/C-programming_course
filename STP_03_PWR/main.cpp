#include <iostream>

int power(int x, int p)
{
	
	int answer = 1;
	for (;p > 0;p--)
	{
		answer *= x;
	}
	return answer;
}

int main()
{
	int x = 0;
	unsigned p = 0;

	while (1)
	{
		std::cout << "Enter x^p to have an answer" << "\n";
		std::cin >> x;
		std::cin >> p;
		std::cout << x << "^" << p << " = " << power(x, p) << "\n\n";
	}
	return 0;
}



