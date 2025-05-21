/*

I.
    Classes
        classes could be interpreted as patterns that decide how an object will be constructed as well as how it will interact with other objects through the use of data, methods and members
            data could be stored in various datatypes
            methods are the functions that help user to work with classes
            members decide how the information will be accessed and it is called encapsulation
                1) Public means that all data can be accessed outside the class
                2) Private means that all the data is fully secured and it cannot be accessed from the outside of the class
                3) Protected means that the data is secured, it cannot be accessed from the outside, the only exception is inheritance
            Also, the data 

        Difference between struct and class
            1) If you dont write the member
                1.1) stuct will store data as puclic
                1.2) class will store data as private
            2)  Inheritance and polymorphism
                2.1) sturct is rarely used for inheritance as it is fully public
                2.2) class is used for inheritance as it supports pravate member which is crucial for inheritance and polymorphism
            3) Cemantics (which are common within programmers)
                3.1) It is accepted in the world of programming that structures are used for simple datatypes
                    as example, it could be used to store coordinats of a point
                3.2) As opposed to structures, classes are commonly used to store difficult multilayered datatypes
            
        Const methods
            const methods are class methods that doesn't change the condition of the objects.
            they are declared with the key word const
                myMethod() const 
                {
                    here you cannot change nonstatic data
                }
        
        Static objects
            they belong to the class itself not to the objects with that class
                static T* staticMethod()
                {
                    you can access only other static members
                } 

        Mutable
            1) logic constant
                means that although const method() can change some values of the class, outside of the class user doesnt see any changes to the class
            2) physical constant
                means that not a single bit was changed at all by constant method()
        
            Why is it usefull?
                1) for chaching, there const method() can change values and store in mutable, which is useful for further calling and repeating calculations
                2) for logs and statistics, const methods() can change static memory for counting
                3) mutexes, in multitheading const method() can you mutexes for security

*/

int main()
{
    return 0;
}