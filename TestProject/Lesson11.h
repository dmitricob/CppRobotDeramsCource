#pragma once

namespace Lesson11
{
	constexpr unsigned int ROWS = 4;
	constexpr unsigned int COLUMNS = 6;

	enum class SortingDirection
	{
		Ascending,
		Descending
	};

	void Lesson();

    bool find(int arr_2d[ROWS][COLUMNS], int toFind);
    bool isSorted(const int* arr, int size, SortingDirection direction);

    void traverseTopDownRightLeftByColumns(int arr_2d[ROWS][COLUMNS]);
    void traverseLeftRightDownTopSwitchingByRows(int arr_2d[ROWS][COLUMNS]);

}