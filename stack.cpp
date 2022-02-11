/*********************
* Name: Graziella Buitron
* Coding 03
* Purpose: To introduce a simple ADT (abstract data type) and understand the function and purpose of ADTs.
**********************/

#include "stack.h"

// function to insert data into stack
void Stack::push(int x)
{
    if(top >= 10)
    {
        std::cout << "Stack Overflow \n";
    }
    else
    {
        a[++top] = x;
        std::cout << "Element Inserted \n";
    }
}

// function to remove data from the top of the stack
int Stack::pop()
{
    if(top < 0)
    {
        std::cout << "Stack Underflow \n";
        return 0;
    }
    else
    {
        int d = a[top--];
        return d;
    }
}

// function to check if stack is empty
void Stack::isEmpty()
{
    if(top < 0)
    {
        std::cout << "Stack is empty \n";
    }
    else
    {
        std::cout << "Stack is not empty \n";
    }
}