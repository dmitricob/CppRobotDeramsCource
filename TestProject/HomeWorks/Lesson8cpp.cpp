#include "Lesson8.h"
#include "Lesson8Regular.h"
#include "Lesson8Recurtion.h"

namespace Lesson8 
{
	void Lesson() 
	{
		Lesson8Regular::Task1ReadAndCount(ReadIntValue("Enter ammount of values "));

		Lesson8Regular::Task2LoopFactorial(ReadIntValue("Enter value for loop factorial "));
		Lesson8Recurtion::Task2Factorial(ReadIntValue("Enter value for recurtion factorial "));

		Lesson8Regular::Task3PrintNaturalNumbersToBigger(ReadIntValue("Enter natural numbers ammount "));
		Lesson8Regular::Task3PrintNaturalNumbersToLower(ReadIntValue("Enter natural numbers ammount "));
		Lesson8Recurtion::Task3PrintNaturalNumbersToBigger(ReadIntValue("Enter natural numbers ammount "));
		std::cout << std::endl;
		Lesson8Recurtion::Task3PrintNaturalNumbersToLower(ReadIntValue("Enter natural numbers ammount "));
		std::cout << std::endl;

	}

	int ReadIntValue(const char* text) {
		int current;
		std::cout << text;
		std::cin >> current;
		return current;
	}
}