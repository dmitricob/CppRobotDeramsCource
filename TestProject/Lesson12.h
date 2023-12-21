#pragma once
#include <iostream>

namespace Lesson12
{
	constexpr unsigned int ROWS = 3;
	constexpr unsigned int COLUMNS = 3;

	enum class SortingDirection
	{
		ByRows,
		ByColumns
	};

	void Lesson();
	void bubbleSort(int arr[], int size);
	int partition(int array[], int low, int high);
	void quickSort(int array[], int low, int high);
	void sort(int arr[ROWS][COLUMNS], SortingDirection sortingDirection);
	void mirroArr(int arr[ROWS][COLUMNS], int arr2[COLUMNS][ROWS]);
}
