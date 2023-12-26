#pragma once

namespace Lesson15
{
	struct Student 
	{
		const char* name;
		int marks[4];

		int avarage = -1;
		int Avarage() 
		{
			if (avarage > 0)
				return avarage;

			avarage = 0;
			for (int i = 0; i < 4; i++)
			{
				avarage += marks[i];
			}
			avarage /= 4;
			return avarage;
		}
	};

	void Lesson();
	int SuccessfulStudentsCount(Student students[], int size, int requiredPoint);
	Student* BestStudent(Student students[]);
	void SortStudent(Student students[], int size);
}