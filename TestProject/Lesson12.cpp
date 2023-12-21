#include <iostream>
#include "Lesson12.h"

namespace Lesson12
{
	void Lesson()
	{
		int arr[5] = { 2,3,6,4,0 };
		bubbleSort(arr, 5);
		
		int arr2[ROWS][COLUMNS] = { 1,2,3, 3,0,1, 0,1,4 };
		sort(arr2, SortingDirection::ByRows);
	}

	void bubbleSort(int arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			int smallestId = i;
			for (int j = i+1; j < size; j++)
			{
				if (arr[smallestId] > arr[j])
				{
					smallestId = j;
				}
			}
			int temp = arr[i];
			arr[i] = arr[smallestId];
			arr[smallestId] = temp;
		}
	}

	int partition(int array[], int low, int high)
	{
		int pivot = array[high];

		// idx of greater element
		int pointerIdx = (low - 1);

		for (int j = low; j < high; j++)
		{
			if (array[j] <= pivot)
			{
				// if element smaller than pivot is found
				// swap it with the greater element pointed by i
				pointerIdx++;

				// swap element at i with element at j
				std::swap(array[pointerIdx], array[j]);
			}
		}

		std::swap(array[pointerIdx + 1], array[high]);

		return (pointerIdx + 1);
	}
	void quickSort(int array[], int low, int high)
	{
		if (low < high)
		{
			int partition_idx = partition(array, low, high);
			quickSort(array, low, partition_idx - 1);
			quickSort(array, partition_idx + 1, high);
		}
	}

	//Sort 2d array using any algorithm (custom quicksort, std::sort, implemented above Bubble Sort
	// or using new implementation in-place)
	//Input: ByRows
	// 1, 5, 4
	// 3, 8, 6
	// 9, 5, 1
	//Output:
	// 1, 4, 5
	// 3, 6, 8
	// 1, 5, 9

	//Input: ByColumns
	// 1, 5, 4
	// 3, 8, 6
	// 9, 5, 1
	//Output:
	// 1, 5, 1
	// 3, 5, 4
	// 9, 8, 6

	void sort(int arr[ROWS][COLUMNS], SortingDirection sortingDirection)
	{
		switch (sortingDirection)
		{
		case Lesson12::SortingDirection::ByRows:
			for (int i = 0; i < ROWS; i++)
			{
				quickSort(arr[i], 0, COLUMNS - 1);
			}
			break;
		case Lesson12::SortingDirection::ByColumns:
			int arr2[COLUMNS][ROWS];
			mirroArr(arr, arr2);
			for (int i = 0; i < COLUMNS; i++)
			{
				quickSort(arr2[i], 0, ROWS - 1);
			}
			mirroArr(arr2, arr);
			break;
		default:
			break;
		}
	}

	void mirroArr(int arr[ROWS][COLUMNS], int arr2[COLUMNS][ROWS])
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLUMNS; j++)
			{
				arr2[i][j] = arr[j][i];
				arr2[j][i] = arr[i][j];
			}
		}
	}

}