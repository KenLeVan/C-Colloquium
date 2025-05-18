/*

I.
    Functions
        1. functions are such segments of code that work only after they are called
        2. functions consist of 2 parts
            2.1 function header
                datatype of the resulting value
                name of the function
                list of arguments
            2.2 function body
                all the code contains in { }
        3. function prototype is a formally declared
            example: int myFunct(int a, int b);
        4. ODR
            all objects have to be declared once in a file
            all functions have to be declared once in a file
            all datatypes has to be declared once in a file (or be exactly the same in all files)

            if you disobey the rule (by for example declaring a function in different .cpp) compiler will not be able to process two at the same time different but same datatypes and collapse with an "multiple definitions" error or in some cases even leading to an undefined behaviour
        5. Why you should not return local variables
            When you get a pointer to a local variable that was returned by the function the value will be released from memory 
        6. Default arguments
            You can give a function default values of some arguments, but you have to follow a rule
            void myFunc(int a, int b = 10);
            also, all default arguments have to have constant values or globally declared arguments
            
*/