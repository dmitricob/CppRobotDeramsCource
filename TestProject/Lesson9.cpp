#include "Lesson7.h"
#include "Lesson9.h"

#include <iostream>
#include <string>

namespace Lesson9
{
	int const Task1ArraySize = 10;
	int const Task2LineSize = 20;
	void Lesson()
	{
		// #1
		int arr[Task1ArraySize];
		for (int i = 0; i < Task1ArraySize; i++)
		{
			arr[i] = ReadIntValue("[" + std::to_string(i) + "] ");
		}
		TranslateArray(arr, Task1ArraySize);
		std::cout << "Translated array: " << std::endl;
		for (int i = 0; i < Task1ArraySize; i++)
		{
			WriteIntAndTextValue("[" + std::to_string(i) + "] ", arr[i]);
		}

		// #2
		char current[Task2LineSize];
		ToUppercase(current, ReadLineValue("Input: ", current));
		WriteCharsAndTextValue("Output: ", current);

		//#3
		WriteCharsAndTextValue("Output: ", IsPalindrom(current, ReadLineValue("Input: ", current)) ? "True" : "False");

		//#4
		int vowelsCount = 0;
		int consonantsCount = 0;
		ParseStringLetters(current, ReadLineValue("Input: ", current), vowelsCount, consonantsCount);
		WriteIntAndTextValue("vowelsCount: ", vowelsCount);
		WriteIntAndTextValue("consonantsCount: ", consonantsCount);

		//#5
		char current2[Task2LineSize];
		WriteCharsAndTextValue("Output: ", IsEqual(current, ReadLineValue("Input1: ", current),current2, ReadLineValue("Input2: ", current2)) ? "IsEqual" : "NotEqual");
	}

	void TranslateArray(int numbers[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			if (numbers[i] > 0) 
			{
				numbers[i] *= 2;
			}
			else {
				numbers[i] = 0;
			}
		}
	}

	void ToUppercase(char str[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			if (isalpha(str[i])) {
				str[i] = toupper(str[i]);
			}
		}
	}
	bool IsPalindrom(const char str[], int size)
	{
		for (int i = 0; i < size / 2; i++)
		{
			if (str[i] != str[size - 1 - i])
			{
				return false;
			}
		}
		return true;
	}

	void ParseStringLetters(const char str[], int size, int& vowelsCount, int& consonantsCount)
	{
		vowelsCount = 0;
		consonantsCount = 0;
		for (int i = 0; i < size; i++)
		{
			if (isalpha(str[i]) == false)
				continue;

			switch (str[i])
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'y':
				vowelsCount++;
				break;
			default:
				consonantsCount++;
				break;
			}
		}
	}

	bool IsEqual(const char str1[], int size1, const char str2[], int size2)
	{
		if (size1 != size2)
		{
			return false;
		}

		for (int i = 0; i < size1; i++)
		{
			if (str1[i] != str2[i])
				return false;
		}
		
		return true;
	}



	int ReadIntValue(std::string text) 
	{
		int current;
		std::cout << text;
		std::cin >> current;
		return current;
	}
	int ReadLineValue(std::string text, char current[])
	{
		std::cout << text;
		std::cin.getline(current, Task2LineSize);
		int count = 0;
		while (true)
		{
			if (current[count] == '\0')
				break;
			count++;
		}
		return count;
	}
	void WriteIntAndTextValue(std::string text, int value)
	{
		std::cout << text << value << std::endl;
	}
	void WriteCharsAndTextValue(std::string text, const char current[])
	{
		std::cout << text << current << std::endl;
	}
}