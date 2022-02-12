/*********************
* Name: Graziella Buitron
* Coding 03
* Purpose: To introduce a simple ADT (abstract data type) and understand the function and purpose of ADTs.
**********************/

#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack
{
    public:
    	Stack();
    	Stack(int);
    
    // declaring all the functions
    void push(int x);
    int pop();
    bool isEmpty();

    private:
        int top;
};

#endif // STACK_H