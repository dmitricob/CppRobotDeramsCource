#include <iostream>
#include <iomanip>
#include "TestProject.h"

void Lesson1()
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


void WriteDouble(int precision, double value)
{
	std::cout << std::setprecision(precision) << std::fixed << value << "\t\t" << std::scientific << value << std::endl;

};

void Lesson2() 
{
	enum class WeekDay
	{
		Monday = 1,
		Tuesday = 2,
		Wednesday = 3,
		Thursday = 4,
		Friday = 5,
		Saturday = 6,
		Sunday = 7,
	};

	static const WeekDay Week[] = {
		WeekDay::Monday,
		WeekDay::Tuesday,
		WeekDay::Wednesday,
		WeekDay::Thursday,
		WeekDay::Friday,
		WeekDay::Saturday,
		WeekDay::Sunday
	};

	int v1;
	int v2;
	std::cout << "Enter integer 1:";
	std::cin >> v1;
	std::cout << "Enter integer 2:";
	std::cin >> v2;
	int v = v1;
	v1 = v2;
	v2 = v;
	std::cout << "Integer 1:" << v1 << std::endl;
	std::cout << "Integer 2:" << v2 << std::endl;

	double testDouble = 1.12345678910;
	std::cout << "TestDouble: " << (int)testDouble << std::endl;
	std::cout << std::setw(20) << std::setfill('$') << std::right << testDouble << std::endl;

	testDouble = 4321.12345678910;
	WriteDouble(2, testDouble);
	WriteDouble(5, testDouble);
	WriteDouble(10, testDouble);

	for (WeekDay day : Week)
	{
		std::cout << static_cast<int>(day) << std::endl;
	}

	int v3;
	std::resetiosflags;
	std::cout << "Enter value:";
	std::cin >> v3;
	std::cout << std::boolalpha << static_cast<bool>(v3);
}

void Lesson3()
{
	// #1
	const int secInM = 60;
	const int secInH = secInM * 60;
	int seconds;
	std::cout << "Enter Seconds: ";
	std::cin >> seconds;
	int secleft = seconds % secInM;
	seconds -= secleft;
	int secM = seconds % secInH;
	seconds -= secM;
	int secH = seconds;
	std::cout << secH / secInH << "h " << secM / secInM << "m " << secleft << "s" << std::endl;
	std::cout << std::endl;

	// #2
	int v1;
	int v2;
	int v3;
	std::cout << "Enter integer 1:";
	std::cin >> v1;
	std::cout << "Enter integer 2:";
	std::cin >> v2;
	std::cout << "Enter integer 3:";
	std::cin >> v3;
	std::cout << "Sum: " << v1 + v2+v3 << std::endl;
	std::cout << "Mull: " << v1 * v2 * v3 << std::endl;
	std::cout << "Mean: " << (v1 + v2 + v3) / 3. << std::endl;
	auto writeEquals = [](int v1, int v2) {std::cout << v1 << "==" << v2 << "\t" << std::boolalpha << (v1 == v2) << std::endl;};
	writeEquals(v1,v2);
	writeEquals(v2,v3);
	writeEquals(v2,v3);
	std::cout << std::endl;

	// #3
	std::cout << "Enter integer 1:";
	std::cin >> v1;
	std::cout << "Enter integer 2:";
	std::cin >> v2;
	bool lessThan = v1 < v2;
	bool equal = v1 == v2;
	bool moreThan = v1 > v2;
	bool lessOrEqual = lessThan || equal;
	auto writeBool = [](std::string string, bool value) {std::cout << string << "\t" << std::boolalpha << value << std::endl;};
	writeBool("lessThan", lessThan);
	writeBool("equal", equal);
	writeBool("moreThan", moreThan);
	writeBool("lessOrEqual", lessOrEqual);
	std::cout << std::endl;

	// #4
	std::cout << "Width:";
	std::cin >> v1;
	std::cout << "Height:";
	std::cin >> v2;
	std::cout << "Squer: " << v1 * v2 << std::endl;
	std::cout << "peremetr: " << (v1 + v2) * 2 << std::endl << std::endl;

	// #5
	const double Pi = 3.14;
	std::cout << "Radius:";
	std::cin >> v1;
	std::cout << "Circle squer: " << v1 * Pi * Pi << std::endl;
	std::cout << "Circle length: " << v1 * 2 * Pi << std::endl;
}


void Lesson4()
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
	std::cout << "Is it triangle: " << std::boolalpha << ((v1 + v2 + v3) == 180 )<< std::endl;


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

	

int main()
{
	Lesson4();
}