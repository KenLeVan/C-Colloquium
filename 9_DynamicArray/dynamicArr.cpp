#include <iostream>

// special features of dynamic arrays
// 1. they store memory in heap
// 2. programmer has ful control of memory
// 3. they allocate memory while programm is running instead of doing it on compile phase

// to delete a multidimentional dynamic array, first delete each element of an array, clear their pointers and secondly, delete the whole array and also clear its pointer to not get a hanging pointer
int main()
{
    int* arr1 = new int[3]{1, 2, 3};
    int* arr2 = new int[3]{1, 2, 3};
    int* arr3 = new int[3]{1, 2, 3};

    int** arr123 = new int*[3]{arr1, arr2, arr3};
}