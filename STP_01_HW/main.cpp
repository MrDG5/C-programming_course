#include <iostream>

int compare(int i, unsigned to)
{
	return i >= to;
}

int main()
{
	std::cout << "Hello, World!\n";
	
	unsigned from = 100;
	unsigned to = 0;
	for (int i = from; compare(i, to); --i) 
	{
		i = -1;
	}


 	return 0;
}