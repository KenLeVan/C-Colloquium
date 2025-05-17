/*

I.
    1) Alphabet - in C++ the alphabet includes lower and upper case letters in English, digits and special characters.
    2) Key words - these are such words that are already taken by c++.
        Examples:
            1) delete
            2) class
            3) struct
    3) Identifiers - is a name for variables or functions, so we can address them. It cannot have spaces and should not contain special characters.
        Examples of coding styles:
            1) Snake case: my_variable, this_function
            2) Camal case: myVariable, thisFunction

II.
    1) Literals:
        1.1) int - 5
        1.2) float - 5.12
        1.3) string - "hello world!"
        1.4) char - 'a'
    2) Constants:
        const int var = 5;

III.
    1) Arithmetic operations:
        Examples: 5 + 5, int var = 10 - 2
    2) Byte operations:
        2.1) and (&&)
        2.2) or (|)
        2.3) not (!)
        2.4) << which shifts all elements to the left and fills all new bites with 0
        2.5) >> shifts all elements to the right

*/

#include <iostream>

int main()
{
    int a = 5;

    a = a << 2;
    // example of a shift of bites

    std::cout << a;

    return 0;
}