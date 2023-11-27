#include <iostream>
namespace Lesson4
{
	void Lesson()
	{
		// #1
		int v1;
		int v2;
		int v3;
		std::cout << "Enter integer 1:";
		std::cin >> v1;
		std::cout << "Enter integer 2:";
		std::cin >> v2;
		std::cout << "Enter integer 3:";
		std::cin >> v3;
		int maxV;

		if (v1 > v2)
		{
			if (v1 > v3)
				maxV = v1;
		}
		else
		{
			if (v2 > v3)
				maxV = v2;
			else
				maxV = v3;
		}


		if (v1 > v2 && v1 > v3)
			maxV = v1;
		else if (v2 > v1 && v2 > v3)
			maxV = v2;
		else
			maxV = v3;

		std::cout << "Max is " << maxV << std::endl;

		// #2
		std::cout << "Enter integer 1:";
		std::cin >> v1;
		std::cout << "Enter integer 2:";
		std::cin >> v2;
		std::cout << "Max is " << ((v1 > v2) ? v1 : v2) << std::endl;

		// #3
		std::cout << "Enter integer 1:";
		std::cin >> v1;
		std::cout << ((v1 % 5 == 0 && v1 % 11 == 0) ? "It can be " : "It cann't be ") << "divided by 5 and 11 " << std::endl;

		// #4
		std::cout << "Enter integer 1:";
		std::cin >> v1;
		std::cout << "Enter integer 2:";
		std::cin >> v2;
		std::cout << "Enter integer 3:";
		std::cin >> v3;
		std::cout << "Is it triangle: " << std::boolalpha << ((v1 + v2 + v3) == 180) << std::endl;


		// #5,6
		enum class Month
		{
			January,
			February,
			March,
			April,
			May,
			June,
			July,
			August,
			September,
			October,
			November,
			December,
		};
		auto monthToString = [](Month month) {
			switch (month)
			{
			case Month::January:
				return "January";
			case Month::February:
				return "February";
			case Month::March:
				return "March";
			case Month::April:
				return "April";
			case Month::May:
				return "May";
			case Month::June:
				return "June";
			case Month::July:
				return "July";
			case Month::August:
				return "August";
			case Month::September:
				return "September";
			case Month::October:
				return "October";
			case Month::November:
				return "November";
			case Month::December:
				return "December";
			default:
				return "Wrong number!";
			}
		};
		auto monthToSeasonString = [](Month month) {
			switch (month)
			{

			case Month::December:
			case Month::January:
			case Month::February:
				return "Winter";
			case Month::March:
			case Month::April:
			case Month::May:
				return "Spring";
			case Month::June:
			case Month::July:
			case Month::August:
				return "Summer";
			case Month::September:
			case Month::October:
			case Month::November:
				return "Autem";
			default:
				return "Wrong number!";
			}
		};

		std::cout << "Enter month numbetr: ";
		std::cin >> v1;
		std::cout << monthToString(static_cast<Month>(v1 - 1)) << std::endl;

		std::cout << "Enter month numbetr: ";
		std::cin >> v1;
		std::cout << monthToSeasonString(static_cast<Month>(v1 - 1)) << std::endl;
	}
}
