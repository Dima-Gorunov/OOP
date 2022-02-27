// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<vector>
#include"Array.h"
int main()
{
	std::vector<int> myVector;
	createVector(myVector, 10);
	printVector(myVector);
	sumElemVector(myVector);
}
