#include <iostream>
#include <iomanip>
#include <cctype>

namespace Lesson6
{
	void Lesson()
	{
		int v1;
		int v2;
		int v3;
		// 1
		std::cout << "1) Enter first element of progression: ";
		std::cin >> v1;
		std::cout << "Enter step of progression: ";
		std::cin >> v2;
		std::cout << "Enter counnt of elements in progression:";
		std::cin >> v3;

		for (int i = 0; i < v3; i++)
		{
			std::cout << v1 << " + " << v2 * i << ", ";
		}
		std::cout << std::endl;
		for (int i = 0; i < v3; i++)
		{
			std::cout << v1 + v2 * i << ", ";
		}
		std::cout << std::endl;
		std::cout << std::endl;

		// 2
		std::cout << "2) Enter element number of fibonachi: ";
		std::cin >> v1;

		int fCurrentPrePrevious = 1;
		int fCurrentPrevious = 1;
		int fCurrent = 1;
		for (int i = 2; i < v1; i++)
		{
			fCurrent = fCurrentPrePrevious + fCurrentPrevious;
			fCurrentPrePrevious = fCurrentPrevious;
			fCurrentPrevious = fCurrent;
		}
		std::cout << "Element number " << v1 << " of fibonachi : " << fCurrent << std::endl << std::endl;

		// 3
		std::cout << "3) Enter element number for factorial: ";
		std::cin >> v1;

		int acommulator = 1;
		for (int i = 1; i <= v1; i++)
		{
			acommulator *= i;
		}
		std::cout << "The factorial is " << acommulator << std::endl << std::endl;

		// 4
		std::cout << "4)\na) Enter triangle size: ";
		std::cin >> v1;

		for (int i = 1; i <= v1; i++)
		{
			for (int j = 0; j < i; j++)
			{
				std::cout << " *";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;

		for (int i = v1; i >= 0; i--)
		{
			for (int j = i; j > 0; j--)
			{
				std::cout << " *";
			}
			std::cout << std::endl;
		}

		std::cout << "b) Enter squer size (w h): ";
		std::cin >> v1 >> v2;
		for (int i = 0; i < v1; i++)
		{
			for (int j = 0; j < v2; j++)
			{
				std::cout << " *";
			}
			std::cout << std::endl;
		}

		std::cout << std::endl << "c) Enter paralelogram size (w h tilt): ";
		std::cin >> v1 >> v2 >> v3;

		for (int i = 0; i < v1; i++)
		{
			for (int k = 0; k < i * v3; k++)
			{
				std::cout << " ";
			}

			for (int j = 0; j < v2; j++)
			{
				std::cout << " *";
			}
			std::cout << std::endl;
		}

		std::cout << std::endl << "d) Enter triangle size: ";
		std::cin >> v1;

		for (int i = 1; i <= v1; i++)
		{
			std::cout << " ";
			for (int j = 0; j < i; j++)
			{
				std::cout << !((i + j) % 2 == 0);
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;

		// 5
		char symbol;
		v1 = 0; // used for summ
		while (1)
		{
			std::cout << "Enter symbol: ";
			std::cin >> symbol;
			if (symbol == '.')
				break;

			if (isalpha(symbol) && islower(symbol)) {
				std::cout << "This letter in upper case: " << static_cast<char>(toupper(symbol)) << std::endl;;
			}
			else if (isdigit(symbol))
			{
				v1 += symbol - '0';
				std::cout << "Acooumulated: " << v1 << std::endl;;
			}
			else if (isdigit)
			{
				std::cout << "Wrong symbol \"" << symbol << "\"" << std::endl;;
			}
		}
	}
}