#pragma once

namespace Lesson15
{
	struct Student 
	{
		const char* name;
		int marks[StudentsCount];

		float avarage = -1;
		float Avarage();
	};

	constexpr int StudentsCount = 4;

	void Lesson();
	int SuccessfulStudentsCount(Student students[], int size, int requiredPoint);
	Student* BestStudent(Student students[], int size);
	void SortStudent(Student students[], int size);
}