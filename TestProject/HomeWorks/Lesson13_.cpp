#include "Lesson13.h"
#include <iostream>
#include "Utils/DateTimeExample.h"
#include "Utils/FilesIO.cpp"

namespace Lesson13 
{
	void Lesson() 
	{
		// time_t is an absolute time, represented as the integer number 
		// of seconds since the UNIX epoch(midnight GMT, 1 January 1970)
		// It is useful as an easy-to-work with representation of a point in time

		// struct tm is a calendar date and time
		// It is used when converting to or from human
		// readable representations of the date and time


		std::time_t t = std::time(nullptr);
		std::tm* now = std::localtime(&t);

		std::cout << "Current Date: " << getDay(now) << "-"
			<< getMonth(now) << "-" <<
			getYear(now) << std::endl;

		readFile("readExample.txt");
		writeFile("writeExample.txt");
	}	
}