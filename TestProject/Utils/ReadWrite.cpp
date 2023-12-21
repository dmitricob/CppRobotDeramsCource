#include <iostream>
#include "ReadWrite.h"

int ReadIntValue(const char* text) 
{
	int current;
	std::cout << text;
	std::cin >> current;
	return current;
}

int ReadIntValue(const std::string text) 
{
	int current;
	std::cout << text << std::endl << "> ";
	std::cin >> current;
	return current;
}
std::string ReadStringValue(const std::string text) 
{
	std::string current;
	std::cout << text << std::endl << "> ";
	std::cin >> current;
	return current;
}

void WriteIntAndTextValue(const char* text, int value)
{
	std::cout << text << value << std::endl;
}
void WriteIntAndTextValue(const std::string text, int value)
{
	std::cout << text << value << std::endl;
}