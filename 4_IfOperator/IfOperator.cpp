#include <iostream>

// simple ternar operator
void ternar_operator(const int &a, const int &b)
{
    a > b ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;
}

// ternar operator with nested ternar operators
void ternar_operator_str(const int &a)
{   
    std::cout <<
    (a < 5) ? "Маленькое число" :
    (a == 5) ? "Равен B" :
    (a > 5) ? "Большое число" :
    "Очень большое число";
}

// syntax for switch operator
void switch_operator(const int &a)
{
    switch (a)
    {
        case 1:
        {
            std::cout << "switch a = 1" << std::endl;
            break;
        }
        case 2:
        {
            std::cout << "switch a = 2" << std::endl;
            break;
        }
        default:
        {
            std::cout << "switch couldnt find the value of a" << std::endl;
            break;
        }
    }
}

int main()
{
    int a = 1;
    int b = 10;

    ternar_operator(a, b);
    ternar_operator_str;
    switch_operator(a);

}