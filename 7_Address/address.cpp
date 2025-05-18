/*

I.
    Address
        If you give a value & you will give it a pseudonim, by which other objects can address it. By giving an address instead of a value itself, you won't make a copy of that but instead you will use the exact same variable

        after you declared an address, you cannot change it
            so, int x = 5;
                int y = 10;
                int& add1 = x;
                int& add1 = y; (compilation error)
        when you initialize address you need to give it the address immediately

        if you get an address of a rvalue, the rvalue will live as long as the address
*/

#include <iostream>

void change_by_address(int& x)
{
    x = x + 5;
}

int main()
{
    int x = 5;
    change_by_address(x);
    std::cout << x;
}