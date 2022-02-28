#include <vector>
#include <iostream>
#include <string>
using namespace std;

void createArray(int *arr, int size)
{
    for(int i=0; i<size;i++){
        arr[i]=rand() % 5;
    }
}

void printArray(int *arr, int size, char *str){


   for(int i=0; i<size; i++){

       str[i]= (char)(((int)'0')+arr[i]);

   }
            str[size]='\0';
}
