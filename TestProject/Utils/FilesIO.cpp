#include <iostream>
#include <fstream>
#include "FilesIO.h"

void readFile(const char* fileName, std::string fileOutput[], int wordsCount)
{
    std::fstream file;
    file.open(fileName, std::ios::in);

	if (!file)
	{
		std::cout << "File " << fileName <<" not found!\n";
	}
	else 
	{
		for (int i = 0; i < wordsCount; i++)
		{
			file >> fileOutput[i];
		}
	}

	file.close();
}

void writeFile(const char* fileName, std::string text)
{
    std::fstream file;
    file.open(fileName, std::ios::out);

	if (!file)
	{
		std::cout << "File "<< fileName <<" not created!\n";
	}
	else 
	{
		file << text;
	}

	file.close();
}

