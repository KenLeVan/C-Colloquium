/*

I.
    Desctructors
        It is a method() in a class that is called automatically whenever and object is destroyes and it is needed to clear memory

        Syntax:
            MyClass()
            {
                // constructor
            }
            ~MyClass()
            {
                // destructor
            }
        Peculiarities:
            It doesnt return ANY data even void
            It doesnt have any arguments
            You can only have one destructor
            You can not overload a destructor
            It is called automatically
            The order of calling the destructor
                1) On Stack destructors are called in reverse order of creating the data (first in, first out)
                2) In inheritance they are called in order from subclasses to a base class
            If you have subclasses of a class, and if you want to clear memory with the use of polymorphism than the destructor of a base class must be virtual. That garantees that the correct destructor will be called, which helps to avoid memory leakages
            If you dont declare a destructor than the compiler will create the default one, which deletes all non-static data of aclass. If your class doesnot have any dynamic resources the default destructor is enough

        The purposes of a destructor
            1) to clear dynamic memory of an object
            2) to close files and streams (std::ifstream)
            3) to close sockets (internet)
            4) to close any databases
            5) to free from mutexes
            6) to cancel registration or subscription (in terms of an account in a system)
        Rule of three
            If you declare one of the 3 constructrions you will need to call all 3
            1) desctructor
            2) copy constructor
            3) cope assignment operator
            Why this rule is important?
                When you create a class and manage resources then you will use a destructor and other things will be done automaically which may lead to problems
                Shallow copy is done by default (it copys data from one obj to another)
                If your class has a pointer to a dynamic memory than after a shallow copy than a pointer itself will be copied and not the data and as a result 2 objects will point at the same data

                Consequences of shallow copy
                    when you delete one of the pointers, the data will be delete, then when the second pointer will delete the already clear data which will lead to undefined behaviour

        =delete operator
            sometimes you need to rescrict copying of your object
                (some data you dont need to copy or dont want to like mutexes or a unique aunteficator or the data is very big and it is difficult to copy)
            

*/

#include <iostream>

// in this class i will show why base destructor should be virtual
class BaseClass
{
public:
    BaseClass()
    {
        std::cout << "Base class is initialized" << std::endl;
    }
    ~BaseClass()
    {
        std::cout << "Base class is destroyed" << std::endl;
    }

    // here i restricred copy constructor
    BaseClass(const BaseClass& other) = delete;

    // and here i restricted a cope assignment operator
    BaseClass& operator=(const BaseClass& other) = delete;
};

class SubClass : public BaseClass
{
private:
    int* data; // resource that we need to clear
public:
    SubClass() : data(new int(1))
    {
        std::cout << "SubClass is initialized" << std::endl;
    }
    ~SubClass()
    {
        delete data;
        std::cout << "SubClass is destroyed" << std::endl;
    }
};

int main()
{
    BaseClass* obj = new SubClass();
    delete obj;
}

// as we can see in the terminal, the destructor for a base class was called but for a subclass wasnt
// this occurs due to the fact that firstly the constructor for base is called then for the subclass. Secondly, when we are deleting a base class the destructor is called for the base class and compiler decides that it should call a destructor for a static object Base rather than an dynamic object Subclass