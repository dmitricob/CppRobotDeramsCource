#include "Lesson3.h"

void Lesson()
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
	std::cout << "Sum: " << v1 + v2 + v3 << std::endl;
	std::cout << "Mull: " << v1 * v2 * v3 << std::endl;
	std::cout << "Mean: " << (v1 + v2 + v3) / 3. << std::endl;
	auto writeEquals = [](int v1, int v2) {std::cout << v1 << "==" << v2 << "\t" << std::boolalpha << (v1 == v2) << std::endl;};
	writeEquals(v1, v2);
	writeEquals(v2, v3);
	writeEquals(v2, v3);
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