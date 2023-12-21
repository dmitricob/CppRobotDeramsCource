#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include "Lesson13.h"
#include "../Utils/DateTimeExample.h"
#include "../Utils/FilesIO.h"
#include "../Utils/ReadWrite.h"
#include "../Utils/Random.h"
#include <string>

namespace Lesson13 
{
	const int WordsAmmount = 3;
	const char DictionaryFileName[] = "Words.txt";
	const char SavesFileName[] = "Saves.txt";
	const std::string Hint =
		std::to_string(static_cast<char>(InputType::Exit)) + " - Exit\n" +
		std::to_string(static_cast<char>(InputType::RandomWord)) + " - RandomWord\n" +
		std::to_string(static_cast<char>(InputType::WordOfTheDay)) + " - WordOfTheDay\n"+
		std::to_string(static_cast<char>(InputType::Test)) + " - Test\n";

	std::string _words[WordsAmmount];
	int _currentDayNumber;
	int _randomOfTheDay;
	int _lastDateGuesedWordOfTheDay;

	const std::string testCases[18] = { 
		"~hello", "eeeee" , "leali", "oello", "hello",
		"~cocon", "olovo", "hooch", "noone", "conon", "cocon", 
		"~speak", "hello", "enjoy", "clean", "smart", "slept", "speak" };

	void Lesson() 
	{
		std::time_t t = std::time(nullptr);
		_currentDayNumber = getTotalDays(&t);
		MyRandom::InitRandom(_currentDayNumber); // init random with seed by current day number the beginning of time XD
		_randomOfTheDay = MyRandom::GetRandom(WordsAmmount); // get random with day number as a seed

		MyRandom::InitRandom();	// re init seed with current time

		readFile(DictionaryFileName, _words, WordsAmmount);

		std::string saves[1];
		readFile(SavesFileName, saves, 1);
		_lastDateGuesedWordOfTheDay = saves[0].empty() ? 0 : std::stoi(saves[0]);

		Lesson13::InputType input;
		do
		{
			input = static_cast<Lesson13::InputType>(ReadIntValue(Hint));

		} while (Update(input));
	}	

	// return false if we dont proceed update
	bool Update(Lesson13::InputType inputType)
	{
		switch (inputType)
		{
			case Lesson13::InputType::Exit:
				return false;

			case Lesson13::InputType::RandomWord:
				ReadAndProceedWord(_words[MyRandom::GetRandom(WordsAmmount - 1)]);
				break;

			case Lesson13::InputType::WordOfTheDay:
				ReadAndProceedWordOfTheDay(_words[_randomOfTheDay]);
				break;

			case Lesson13::InputType::Test:
				TestCases();
				break;

			default:
				break;
		}
		return true;
	}

	void ReadAndProceedWord(std::string targetWord, const std::string winPhrase = "GREATE YOU GUESS THE WORD")
	{
		std::string current;
		int guessCounts = 0;
		do
		{
			//std::cout << targetWord << std::endl;
			std::cout << std::endl << "Answer: ";
			std::cin >> current;
			std::cout << "Result: " << ResolveWords(targetWord, current) << std::endl << std::endl;
			guessCounts++;

		} while (targetWord != current);

		std::cout << winPhrase << std::endl << "It tooks " << guessCounts << " times" << std::endl << std::endl;
	}
	void ReadAndProceedWordOfTheDay(std::string targetWord)
	{
		if (_lastDateGuesedWordOfTheDay == _currentDayNumber)
		{
			std::cout << "You have already guessed word of the day " << std::endl;
			return;
		}

		ReadAndProceedWord(targetWord, "GREATE YOU GUESS WORD OF THE DAY");

		_lastDateGuesedWordOfTheDay = _currentDayNumber;
		writeFile(SavesFileName, std::to_string(_currentDayNumber));
	}
	void TestCases()
	{
		std::string targetWord;
		for (int i = 0; i < sizeof(testCases) / sizeof(std::string); i++)
		{
			if (testCases[i].find("~") != std::string::npos)
			{
				targetWord = testCases[i];
				targetWord.erase(0, 1);
				std::cout << std::endl << targetWord << std::endl;
				continue;
			}
			std::cout << std::endl << "Answer: " << testCases[i] << std::endl;
			std::cout << "Result: " << ResolveWords(targetWord, testCases[i]) << std::endl << std::endl;
		}
	}

	std::string ResolveWords(std::string origin, std::string suggested)
	{
		std::string mask = "#####";
		for (int i = 0; i < origin.length(); i++)
		{
			if (origin[i] == suggested[i])
			{
				mask[i] = std::toupper(suggested[i]);
			}
			else if (origin.find(suggested[i]) != std::string::npos)
			{
				mask[i] = suggested[i];
			}
		}

		/*for (int i = 0; i < origin.length(); i++)
		{
			{
				if (mask.find(std::toupper(suggested[i])) == std::string::npos && origin.find(suggested[i]) != std::string::npos)
				{
					mask[i] = suggested[i];
				}
			}
		}*/
		return mask;
	}
}