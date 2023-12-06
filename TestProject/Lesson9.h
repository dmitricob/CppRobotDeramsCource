#pragma once

#include <iostream>
namespace Lesson9
{
	void Lesson();
	void TranslateArray(int numbers[], int size);
	void ToUppercase(char str[], int size);
	bool IsPalindrom(const char str[], int size);
	void ParseStringLetters(const char str[], int size, int& vowelsCount, int& consonantsCount);
	bool IsEqual(const char str1[], int size1, const char str2[], int size2);


	int ReadIntValue(std::string text);
	int ReadLineValue(std::string text, char current[]);
	void WriteIntAndTextValue(std::string text, int value);
	void WriteCharsAndTextValue(std::string text, const char current[]);
}