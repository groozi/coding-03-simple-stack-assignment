/*********************
* Name: Graziella Buitron
* Coding 03
* Purpose: To introduce a simple ADT (abstract data type) and understand the function and purpose of ADTs.
**********************/

#ifndef STACK_H
#define STACK_H

#define SIZE 10
#include <iostream>

class Stack
{
    public:
    Stack();
    
    // declaring all the functions
    bool push(int);
    bool pop();
    int peek();
    bool isEmpty();
    void printStack(); //for debugging purposes only

    private:
        int top;
        int *stack;
};

#endif // STACK_H