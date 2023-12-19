#include "Lesson8Recurtion.h"

namespace Lesson8Recurtion
{
	void Task3PrintNaturalNumbersToBigger(int count)
	{
		if (count == 0)
		{
			return;
		}
		Task3PrintNaturalNumbersToBigger(count - 1);
		std::cout << count << " ";
	}
	void Task3PrintNaturalNumbersToLower(int count)
	{
		if (count == 0)
		{
			return;
		}
		std::cout << count << " ";
		Task3PrintNaturalNumbersToLower(count - 1);
	}

	void Task2Factorial(int value)
	{
		WriteIntAndTextValue("Recurtion factorial is ", RecurtionFactorial(value));
	}

	int RecurtionFactorial(int value)
	{
		return value == 1 ? value : value * RecurtionFactorial(value - 1);

		if (value == 1)
			return value;
		else 
			return value * RecurtionFactorial(value - 1);

	}

	void WriteIntAndTextValue(const char* text, int value)
	{
		std::cout << text << value << std::endl;
	}
}