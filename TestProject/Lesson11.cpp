#include "Lesson11.h"
#include <iostream>

namespace Lesson11
{

	/*constexpr unsigned int Lesson11::ROWS = 4;
	constexpr unsigned int Lesson11::COLUMNS = 6;*/
	
	void Lesson()
	{
		int arr_2d[ROWS][COLUMNS] = {
			 {11, 12, 13, 14, 15, 16 },
			 {21, 22, 23, 24, 25, 26 },
			 {31, 32, 33, 34, 35, 36 },
			 {41, 42, 43, 44, 45, 46 }
		};

		std::cout << find(arr_2d, 24);

		traverseTopDownRightLeftByColumns(arr_2d);
		traverseLeftRightDownTopSwitchingByRows(arr_2d);
	}


	bool find(int arr_2d[ROWS][COLUMNS], int toFind)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLUMNS; j++)
			{
				if (arr_2d[i][j] == toFind)
					return true;
			}
		}
		return false;
	}



	bool isSorted(const int* arr, int size, SortingDirection direction)
	{
		if (direction == SortingDirection::Ascending)
		{
			for (int i = 1; i < size; i++)
			{
				if (arr[i - 1] > arr[i])
				{
					return false;
				}
			}
		}else if (direction == SortingDirection::Descending)
		{
			for (int i = 1; i < size; i++)
			{
				if (arr[i - 1] < arr[i])
				{
					return false;
				}
			}
		}
		return true;
	}


	void traverseTopDownRightLeftByColumns(int arr_2d[ROWS][COLUMNS])
	{
		int c = 0;
		for (int j = COLUMNS - 1; j >= 0; j--)
		{
			for (int i = 0; i < ROWS; i++)
			{
				arr_2d[i][j] = ++c;
			}
		}
	}

	//#3_2
	void traverseLeftRightDownTopSwitchingByRows(int arr_2d[ROWS][COLUMNS])
	{

		int c = 0;
		for (int i = ROWS - 1; i >= 0; i--)
		{
			if(i%2 == 0)
			{
				for (int j = COLUMNS - 1; j >= 0; j--)
				{
					arr_2d[i][j] = ++c;
				}
			}
			else
			{
				for (int j = 0; j < COLUMNS; j++)
				{
					arr_2d[i][j] = ++c;
				}
			}
		}
	}
}