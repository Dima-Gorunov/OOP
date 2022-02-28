#include "Array.h"

void createArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i]<<" ";
	}
}

void sumElemArray(int* arr, int size)
{
	int result = 0;

	for (int i = 0; i < size; i++)
	{
		result += arr[i];
	}
	std::cout << "\n sum: " << result;

	//test changed


	//test changed  2
}
