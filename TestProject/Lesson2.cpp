#include "Lesson2.h"

void WriteDouble(int precision, double value)
{
	std::cout << std::setprecision(precision) << std::fixed << value << "\t\t" << std::scientific << value << std::endl;

};

void Lesson()
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