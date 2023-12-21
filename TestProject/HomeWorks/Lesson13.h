#pragma once

#include <string>
namespace Lesson13
{
	enum class InputType
	{
		Exit = 0,
		RandomWord = 1,
		WordOfTheDay = 2,
		Test = 3,
	};

	void Lesson();

	bool Update(Lesson13::InputType inputType);

	void ReadAndProceedWord(std::string targetWord, const std::string winPhrase);

	void ReadAndProceedWordOfTheDay(std::string targetWord);

	void TestCases();

	std::string ResolveWords(std::string origin, std::string suggested);
}