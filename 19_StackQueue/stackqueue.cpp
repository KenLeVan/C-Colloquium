/*

I.
    std::stack
    1) how does it work?
        it is not an independent container it mimics functionalyty of the active container (std::deque, std::list, std::vector)
        Main principe is last in, first out

    2) main operators
        push() // adds element to the top
        pop() // removes element from the top
        top() // access top element
        empty() // test if the stack is empty
        size() // tells how many elements in stack

II.
    std::queue
    1) how does it work?
        it is the same as stack, but it is first in first ouy instead

    2) main operators
        push() // adds element to the top
        pop() // removes element from the top
        top() // access top element
        empty() // test if the stack is empty
        size() // tells how many elements in stack
        front() // gives access to the first element
        back() // gives access to the last element

III.
    std::priorit_queue
    1) how does it work?
        on the top is an element with the highest priority
        when you pop() an element you remove the element with the highest priority
        when you push() an element

    2) main operators
        push() // adds element to the top
        pop() // removes element from the top
        top() // access top element
        empty() // test if the stack is empty
        size() // tells how many elements in stack
    
    3) key functions
        it works with heap
        it uses std::less<T>, so the biggest element has to biggest priority
        it uses an already existing container (by default std::vector<T>, but also can use std::deque<T>)

*/

#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <vector>

int main()
{
    std::stack<int> myStack;
    std::stack<int, std::list<int>> doubleStack;

    std::stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << s.top() << std::endl;

    s.pop();
    std::cout << s.top() << std::endl;

    s.pop();
    std::cout << s.top() << std::endl;

    s.pop();

    std::cout << s.empty() << std::endl;
}