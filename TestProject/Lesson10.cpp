#include "Lesson10.h"

namespace Lesson10 
{
	void Lesson() 
	{
		int a = 1;
		int b = 2;
		Swap(a, b);
		Swap(&a, &b);
		double sum;
		double arrDouble[4] = { 4,4,4,4 };
		bool arrayNotEmpty = CalculateSum(arrDouble, 4, sum);
		int arrInt[4] = { 1,2,3,4 };
		bool containElement = Find(arrInt, 4, 2);
	}
	void Swap(int& a, int& b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	void Swap(int* a, int* b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	bool CalculateSum(const double* arr, int arrSize, double& sum)
	{
		sum = 0;
		for (int i = 0; i < arrSize; i++)
		{
			sum += *(arr+i);
		}
		return arrSize > 0;
	}

	bool Find(const int* arr, int size, int elem)
	{
		for (int i = 0; i < size; i++)
		{
			if (*(arr + i) == elem)
				return true;
		}
		return false;
	}

}