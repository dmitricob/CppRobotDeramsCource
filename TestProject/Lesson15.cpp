#include "Lesson15.h"

#include <iostream>
#include <string>

namespace Lesson15
{
	void Lesson()
	{
		// #1
		Student student = { "Student1", {2,3,5,6} };
		student.Avarage();

		// #2
		Student students[StudentsCount] = {
			{"name1", {0,1,2} },
			{ "name2",{1,2,3} } ,
			{ "name3",{4,5,8} } ,
			{ "name4",{4,9,4} } };

		// #3 
		SortStudent(students, StudentsCount);

		// #4 
		Student* s = BestStudent(students, StudentsCount);
		// testing of the pointer
		//s->avarage = 0;

		// #5
		SuccessfulStudentsCount(students, StudentsCount, 3);
	}	

	int SuccessfulStudentsCount(Student students[], int size, int requiredPoint) 
	{
		int acc = 0;
		for (int i = 0; i < size; i++)
		{
			if(students[i].Avarage() >= requiredPoint)
				acc++;
		}
		return acc;
	}
	//PS we think that students ALWAYS sorted, so we return student [0], otherwise we need to loop throw it
	Student* BestStudent(Student students[], int size)
	{
		int bestStudentId = 0;
		for (int i = 1; i < size; i++)
		{
			if (students[i].Avarage() > students[bestStudentId].Avarage())
			{
				bestStudentId = i;
			}
		}
		return &students[bestStudentId];
	}

	void SortStudent(Student students[], int size) 
	{
		for (int i = 0; i < size; i++)
		{
			int smallestId = i;
			for (int j = i + 1; j < size; j++)
			{
				if (students[smallestId].Avarage() < students[j].Avarage())
				{
					smallestId = j;
				}
			}
			Student temp = students[i];
			students[i] = students[smallestId];
			students[smallestId] = temp;
		}
	}
	float Student::Avarage()
	{
		if (avarage > 0)
			return avarage;

		avarage = 0;
		for (int i = 0; i < StudentsCount; i++)
		{
			avarage += marks[i];
		}
		avarage /= StudentsCount;
		return avarage;
	}
}