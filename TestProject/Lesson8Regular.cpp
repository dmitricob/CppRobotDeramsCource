#include "Lesson8Regular.h"

namespace Lesson8Regular
{
	void Task3PrintNaturalNumbersToBigger(int count)
	{
		for (int i = 1; i <= count; i++)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}
	void Task3PrintNaturalNumbersToLower(int count)
	{
		for (int i = count; i > 0; i--)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}

	void Task2LoopFactorial(int value)
	{
		int factorial = 1;
		for (int i = 1; i <= value; i++)
		{
			factorial *= i;
		}
		WriteIntAndTextValue("Loop factorial is ", factorial);
	}
	void Task1ReadAndCount(int count) 
	{
		int positivesCount = 0;
		int negativesCount = 0;
		int zerosCount = 0;
		for (int i = 0; i < count; i++)
		{
			int currentValue;
			std::cin>> currentValue;
			if (currentValue < 0)
				negativesCount++;
			else if (currentValue > 0)
				positivesCount++;
			else
				zerosCount++;
		}
		std::cout << "positivesCount " << positivesCount << std::endl
			<< "negativesCount " << negativesCount << std::endl
			<< "zerosCount " << zerosCount << std::endl;
			
	}
	void WriteIntAndTextValue(const char* text, int value) 
	{
		std::cout << text << value <<  std::endl;
	}

}