/*

I.
    lvalue and rvalue
        1) lvalue
            lvalue has an address to which you can address by using the ampersand symbol &
            it also can appear both from the right and left of the = sign
                so x = 5 (x is lvalue), y = x (x there is also lvalue)
        2) rvalue
            rvalue usually doesnt have a name and a place in memory
            it could be:
                literals
                arithmetic expressions
                logic expressions
                functions without using &

*/

#include <iostream>

int& calculate_sum(int& x, int& y)
{
    int ans = x + y;
    return ans;
}

void double_num(int* x)
{
    (*x) = (*x) * 2;
}

// example of a function which takes an address of a value instead of copying it
void func1()
{
    int a = 5;
    int b = 10;
    std::cout << calculate_sum(a, b) << std::endl;
}

// example of a function which takes a pointer to a value
void func2()
{
    int a = 5;
    double_num(&a);
    std::cout << a << std::endl;
}

// dynamic array is dynamic because it is created not on the compile phase, but when the programm is already running, also it stores data not in stack, but in heap
void func3()
{
    int* arr = new int[3];
    for (size_t i = 0; i < 3; ++i)
    {
        arr[i] = i;
        std::cout << arr[i] << std::endl;
    }

    // it is important to free up the memory in heap
    delete[] arr;
    arr = nullptr;
}

void func4()
{
    int arr[] = {10, 20, 30, 40};
    int* ptr1 = &arr[0];
    int* ptr2 = &arr[2];

    // if you substract one pointer from another you will get the number of elemnts between them
    std::cout << ptr2 - ptr1 << std::endl;

    // if you add or substract a whole number to a pointer you will move it by this number of bytes
    std::cout << ptr1 << std::endl;
}

// pointer to a void (void can take any datatype, but you then need to use static_cast to specify how many bytes this value need)
void func5()
{
    int n = 25;
    void* voidptr = &n;

    int* intptr = static_cast<int*>(voidptr);
    std::cout << *intptr << std::endl;
}

// dangling pointer
// if you delete the value of a pointer, but keep the pointer you will have an address of a byte that is now filled with something else, which is not what you need
// that's why you need to also clear the pointer
void func6()
{
    int* ptr = new int(5);
    std::cout << *ptr << std::endl;
    delete ptr;
    std::cout << *ptr << std::endl;
    ptr = nullptr;
}

// pointers to a constant
void func7()
{
    int nonConstVar = 10;
    const int constVar = 20;

    const int* ptr1 = &constVar;   // OK: Указатель на константу указывает на константу
    const int* ptr2 = &nonConstVar; // OK: Указатель на константу может указывать на неконстантную переменную (но изменять ее через ptr2 нельзя)

    // the address of the pointer cannot be changed, while the value can
    int* const constptr = &nonConstVar;

    // the address AND the value of the pointer cannot be changed
    const int* const constptrconst = &constVar;
}

int main()
{
    // func1();
    // func2();
    // func3();
    // func4();
    // func5();
    // func6();
    // func7();
}