#include <iostream>
#include <fstream>
#include "FilesIO.h"

void readFile(const char* fileName)
{
    std::fstream file;
    file.open(fileName, std::ios::in);

	if (!file)
	{
		std::cout << "File not found!\n";
	}
	else 
	{
		/*const unsigned int MaxLineSize = 256;
		char line[MaxLineSize]{};

		char ch = '\0';

		file >> std::noskipws;
		while (!file.eof())
		{
			file.getline(line, MaxLineSize, '\n');
			std::cout << line;
		}*/

		while (!file.eof())
		{
			const char ch = file.get();
			std::cout << ch;
		}
	}

	file.close();
}

void writeFile(const char* fileName)
{
    std::fstream file;
    file.open(fileName, std::ios::out); //std::ios::trunc , std::ios::app

	const char* LineToWrite = "Hey there";
	const int intToWrite = 25;
	const bool boolToWrite = true;

	if (!file)
	{
		std::cout << "File not created!\n";
	}
	else 
	{
		file << LineToWrite;
		file << "\n";
		file << intToWrite;
		file << "\n";
		file << boolToWrite;
	}

	file.close();
}

