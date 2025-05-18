#include <iostream>
#include <algorithm>

void copy_arr(int (&arr)[5], int (&destination_arr)[5])
{
    for (size_t i = 0; i < 5; ++i)
    {
        destination_arr[i] = arr[i];
    }
}

void copy_arr1(int (&arr)[5], int (&destination_arr)[5])
{
    std::copy(std::begin(arr), std::end(arr), std::begin(destination_arr));
}

void copy_arr2(int (&arr)[5], int (&destination_arr)[5])
{
    std::copy_n(std::begin(arr), 3, std::begin(destination_arr));
}

int main()
{
    // array initialization
    int arr1[5];

    // array initialitaion with 
    int arr2[4] = {1, 2, 3, 4};

    int arr3[10];
    std::fill(std::begin(arr3), std::end(arr3), 0);

    int etalon_arr[5] = {1, 2, 3, 4, 5};
    int destination_arr[5];
}