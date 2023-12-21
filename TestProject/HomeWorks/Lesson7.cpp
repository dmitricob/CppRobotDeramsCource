#include "Lesson7.h"

namespace Lesson7 
{
	const int MaxIntervalValue = 50;
	void Lesson()
	{
		int v1;
		int attempCount;
		int bestAttempCount = 0;
		int delta;
		std::srand(std::time(nullptr));
		while (1)
		{
			int randomValue = std::rand() % (MaxIntervalValue + 1);
			attempCount = 0;

			while (1)
			{
				std::cout << "Enter integer in interval [0 ; " << MaxIntervalValue << "]" << std::endl;
				std::cin >> v1;
				attempCount++;

				if (v1 < 0 || v1 > MaxIntervalValue)
				{
					std::cout << "Entered value is outside the range";
					continue;
				}

				delta = v1 - randomValue;

				if (delta == 0)
				{
					std::cout << "You win" << std::endl << "Your score is: " << attempCount << std::endl;
					if (bestAttempCount < 1 || attempCount < bestAttempCount)
					{
						bestAttempCount = attempCount;
						std::cout << "New BEST: " << attempCount << std::endl;
					}
					else
					{
						std::cout << "Best is: " << bestAttempCount << std::endl;
					}
					break;
				}
				else if(delta > 20)
				{
					std::cout << "Take musch less" << std::endl;
				}
				else if (delta > 10)
				{
					std::cout << "Take less" << std::endl;
				}
				else if (delta > 0)
				{
					std::cout << "Take a littel more less" << std::endl;
				}
				else if (delta < -20)
				{
					std::cout << "Take much bigger" << std::endl;
				}
				else if (delta < -10)
				{
					std::cout << "Take bigger" << std::endl;
				}else
				{
					std::cout << "Take a littel more bigger" << std::endl;
				}
			}
		}


	}
}