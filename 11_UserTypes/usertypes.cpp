/*

I.
    Enum class

II.
    Union
        The main idea behind a union is that all members have the same address in memory
        You can store there different datatypes, but can only access one at the time
        The size of the Union is equal to the size of the biggest varialbe
        AND initialization can be done only to the first variable

        union can not store data about the active vatiable
        union can not store addresses
        union can not store virtual functions
        union can not store classes and be a product of other classes
III.
    Struct
        Struct alingment
            all elements can have the address that is a multiple of its size
            so if int has a size of 4 it can be stored only in a cell with the address divisible by 4

*/

#include <iostream>
#include <cstdint>

// by default each constant value has value of a number starting from 0
enum DayOfWeek {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

// you can also implicitely give values to each constant
enum Numbers {
    One = 1,
    Ten = 10,
    Hundred = 100
};

// if you give for some a value the next constant will be bigger by 1
enum Direction {
    North, // 0
    East = 5, // 5 
    South, // 6
    West // 7
};

// enum class
// to use it you should use the following syntax
// Traffic trf = Traffic::Red;
enum class Traffic {
    Red,
    Yellow,
    Green
};

enum class SmallEnum : char {
    A = 'a',
    B = 'b',
    C = 'c'
};


union Data {
    int i;
    float f;
    char str[20];
};

void func1()
{
    Data d;

    d.i = 10;
    std::cout << d.i << std::endl;

    d.f = 10.15; // d.i is deleted
    std::cout << d.f << std::endl;

    strcpy(d.str, "hello");
    std::cout << d.str << std::endl; // d.f is deleted
}

union FloatBytes {
    float f;
    uint8_t bytes[sizeof(float)];
};


void func2()
{
    FloatBytes fb = {12.345};
    for (size_t i = 0; i < sizeof(fb.f); ++i)
    {
        std::cout << std::hex << static_cast<int>(fb.bytes[i]) << ' ';
    }
    std::cout << std::dec << std::endl;
}

struct Rectangle
{
    int width;
    int height;

    Rectangle(int w, int h) : width(w), height(h) { }

    void area()
    {
        std::cout << width * height << std::endl;
    }
};

struct Counter
{
    static int count;

    Counter()
    {
        count++;
    }

    static int getCount()
    {
        return count;
    }
};

int Counter::count = 0;

void func3()
{
    Counter c1;
    Counter c2;
    std::cout << Counter::count << std::endl;

    Counter c3;
    std::cout << c3.getCount() << std::endl;
}

int main()
{
    // func1();
    // func2();
    func3();

    return 0;
}