#include "Array.h"
#include<iostream>
void createVector(std::vector<int>& arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr.push_back(3);
	}
}

void printVector(std::vector<int>& arr)
{

	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i]<<" ";
	}
}

void sumElemVector(std::vector<int>& arr)
{
	int result = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		result += arr[i];
	}

	std::cout << "\nsum: "<< result;
}
