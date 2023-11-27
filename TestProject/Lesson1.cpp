#include "Lesson1.h"

void Lesson()
{
	std::cout << "“I love C++!\n" << "Enter triangle size\n";
	int a;
	std::cin >> a;

	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << " *";
		}
		std::cout << std::endl;
	}
}