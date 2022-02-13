/*********************
* Name: Graziella Buitron
* Coding 03
* Purpose: To introduce a simple ADT (abstract data type) and understand the function and purpose of ADTs.
**********************/

#include "stack.h"

//constructor for stack
Stack::Stack(){
	stack = new int[SIZE];
	top = -1;
}

// function to insert data into stack
bool Stack::push(int entry)
{
	bool executed = false; 

    if(top < SIZE-1)
    {
        stack[++top] = entry;
        executed = true;
        std::cout << "Entry added to stack" << std::endl;
    }
    else
    {
        std::cout << "Overflow error " << std::endl;
    }
    return executed;
}

// function to remove data from the top of the stack
bool Stack::pop()
{
	bool executed = false;

	if (!isEmpty()){
		executed = true;
		top--;
		std::cout << "top item removed" << std::endl;
	}
	else{
		std::cout << "Underflow error " << std::endl;
	}
	return executed;
    
}

// function to check if stack is empty
bool Stack::isEmpty()
{
        return (top == -1);
}

int Stack::peek(){
	return stack[top];
}