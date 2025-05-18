#include <iostream>

// in this code i will implement do-while loop as well as goto operator
int main()
{
    int x = 5;
    int b = 0;

    // the main difference between do-while and while is that in while it starts with cheching the condition and then executes code and do-while starts with executing the code and then checking the condition
    do
    {
        ++b;
        --x;
    } while (x != 0);
    std::cout << b << std::endl;

    // in this for loop i used a goto operator to the mark
    // goto is usually a bad operator that you should not use
    // it gets harder to read the code
    // there are other ways to "break" the loop
    // you also are breaking the structure
    // also goto is kinda hardcoding, so in big prohjects if you have many goto operations it will be difficult to change
    for (size_t i = 0; i < b; ++i)
    {
        if (i == 3)
        {
            goto i3;
        }
    }

    // this is the mark
    i3:
        std::cout << "i == 3" << std::endl;
}