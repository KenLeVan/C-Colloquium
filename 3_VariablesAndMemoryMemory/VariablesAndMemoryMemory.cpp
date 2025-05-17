/*

I.
    Memory representaion in bytes
        Memory can be represented as a very long string of cells, and each cell is as long as 8 bits and each cell has its own unique address.

        1) int
            int is 4 bytes long and is obviously contained in a row of 4 cells. There is also a concept of little-endian and big-endian, which shows the order of bytes. For the value 12345 the value is 00 00 30 39. In little-endian it is 39 30 00 00 and in big-endian it is 00 00 30 39\
        2) massive
            for a massive of 5 integers the lenght will be 5 * 4 = 20. Then elements are contained in ascending order of indices for the ascending order of addresses.
        3) pointers
            pointer is a variable that contains an address of a cell (in 32x system it is 4 bits long, in 64x system it is 8 bits long) pointer shows not only the size of the variable, but also how many bytes it contains and how to interprete them
        4) strings
            for strings there is usually a dynamic number of bytes that can change and the string itself also contains a pointer showingthe size of a string and its capacity.
        
        There are also different ways to store data
            1) stack
                programm automatically takes memory to run a programm and as it is finished immideatly deletes it to free up the memory. Memory that is currently used is called stack frame.
                Also, the size of such memory is fixed.
            2) heap
                the programmer manualy use and relase memory
            3) static memory
                it is used to store constants and local variables and literals. the lifespan of such data is the whole life of a programm
            4) code segment
                it simply contains the active code

II.
    Variable declaration, lifespan, scope
        There are different ways to declare a variable
            1) int x; or int x, y;
                is usually seen in { }
            2) int x = 1; or int x, y = 1, 2;
                is usually seen in { }
            3) const int x; (before int main() function)
                is stored in static memory and can be seen everywhere

*/


// in this programm i will implement const and pointers
#include <iostream>

const int size = 3;

int main()
{
    // this array will have elements that "point" to this values
    int* array = new int(size);

    // this loop will fill our array with values
    for (size_t i = 0; i < size; ++i)
    {
        array[i] = i;
    }

    // this loop print the values
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << std::endl;
    }

    // after the array used itself, we need to free up data
    delete array;

    //as well as delete the pointer
    array = nullptr;
}