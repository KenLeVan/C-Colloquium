/*

I.
    Integer datatypes:
        1) char, int, short, long, long long
            char - 1 byte
            int - 4 bytes
            short - 2 bytes
            long - 4 bytes
            long long - 8 bytes
        2) signed, unsigned
            Signed datatypes contain the sign (+/-) of a number in the first cell, where 0 is reffered for a positive number and 1 for negative.
            To find a representation of a negative number you need to do the following:
                2.1) Represent the positive number in bits
                2.2) Invert all bits
                3.3) Add 1
        3) uint_8, uint_16, uint_32, uint_64
            They all have the bits allocated according to their name

II.
    Datatypes with floating point
        1) float, double, long double
            float - 4 bytes
            double - 8 bytes
            1.1) Sign
                The first bit is dadicated to the sign of the number
            1.2) Exponent
                Then there an exponent (a number represented by exponentiation) for float datatypes it uses 8 bits and double uses 11 bits
                Exponent contains the place of a decimal
                In order to represent both small and big numbers a fixed number is always added to the exponent
                So, in the end the exponent is equal to the bias (fixed number) + the original exponent
            1.3) Mantissa
                Floats allocate 23 bits and Doubles allocate 52 bits
                There is also a normal form, which is calculated as 1.xxxx * 2^y, where xxxx is the mantissa and y is the exponent.
            So, the number is expressed as (-1)^sign * mantissa(in binary) * 2^(exponent + bias)

            Example:
                float = 5.25;
                1) 5.25 in 2
                    the integer is 5 = 101;
                    0.25(in 10) = 0.01(in 2)
                    So, 5.25(in 10) = 101.01(in 2)
                2) Normal form
                    101.01 = 1.0101 * 2^2
                3) Exponent
                    Exponent is equal to 2 + 127 (for float) = 129 = 10000001
                4) We fill mantis with 0s so there are 23 bits in total
                    0101 = 01010000000000000000000
                Finally, the number is:
                    0 10000001 01010000000000000000000
        2) Why 0.1 + 0.2 is not equal to 0.3
            It is a very long fraction and it is practically impossible to store the whole fraction, so when they are added together the number is approximated.
        3) To compare a float and a double you can:
            3.1) simply set precision, so you would get rid of the error
            3.2) use the epsilon method, where you take a very small number and substruct from the absolute value of each of the numbers, for floats it is 1e-6 and double 1e-9 

III 
    Char and ASCII, Bools, logic operations
        1) 
            char is a datatype that can store numbers from 0 to 127
            each number represents a symbol in the ASCII table, which inludes English lower and upper case letters, digits and special symbols
        2) 
            boolean is a datatype that is either true or false
            2.1) true stands for 1
            2.2) false stands for 0
        3) 
            short-circuit evaluation basically helps to calculate boolean logic faster. In simple words the second operand is calculated only if the result can not be find with the first operand
                Example:
                    A = false;
                    B = true;
                    C = A && B
                    you dont need to keep in mind B, because C is false just by considering A

IV
    Type conversion
        1) Implicit conversion
            Happens when conversion is done by the compiler not the programmer and happens because it is assumed that the other datatype was needed
        2) Explicit conversion
            Programmer is using operators to do a conversion, and is needed in order to not lose precision when the conversion happens
                static_cast
                dynamic_cast
                reinterpret_cast
                const_cast
            2.1) Some datatypes can be extented into more broad datatypes
                bool -> int
                int -> long
                float -> double
            2.2) When you are exoress some datatypes with other, they may lose precision and force convert
                double pi = 3.14;
                int num = pi (num = 3)
*/

#include <iostream>

int main() 
{

}