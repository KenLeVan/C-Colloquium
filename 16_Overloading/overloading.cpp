/*

I.
    operator=
        you should use it because the default assignment operator may lead to the follosing problems
        1) shallow copying
        2) double free
        3) memory leakages
        4) also you should not use something like obj = obj in an overloading as it will cause the destructor to clear memory of an object

    Friend
        keyword friend allows function to access private and protected members

*/

#include <iostream>

// here i overloaded post and pre --/++
class Rational
{
private:
    int numerator;
    int denominator;
public:
    Rational(int x, int y) : numerator(x), denominator(y) {}

    Rational& operator++()
    {
        numerator += denominator;
        return *this;
    }
    Rational operator++(int)
    {
        Rational temp = *this;
        numerator += denominator;
        return temp;
    }

    Rational& operator--()
    {
        numerator -= denominator;
        return *this;
    }
    Rational operator--(int)
    {
        Rational temp = *this;
        numerator -= denominator;
        return temp;
    }
};

// here i overloaded () and []
class MyArray
{
private:
    int* data;
    size_t size;
public:
    MyArray(size_t s) : size(s)
    {
        data = new int(s);
        for (size_t i = 0; i < size; ++i)
        {
            data[i] = 0;
        }
    }
    ~MyArray()
    {
        delete[] data;
    }

    // prevent double copying
    MyArray(const MyArray& other) = delete;

    // prevent assignment copy
    MyArray& operator=(const MyArray& other) = delete;

    // overloading for non-const 
    int& operator[](size_t index)
    {
        if (index >= size)
        {
            std::cerr << "erro index " << index << " out of bounds" << std::endl;
            return data[0];
        }
        return data[index];
    }

    // overloading for const 
    const int& operator[](size_t index) const
    {
        if (index >= size)
        {
            std::cerr << "erro index " << index << " out of bounds" << std::endl;
            return data[0];
        }
        return data[index];
    }
};

int main()
{
    return 0;
}