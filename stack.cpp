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

    if(top < SIZE-1 && entry >= 0)
    {
        stack[++top] = entry;
        executed = true;
    }
   
    return executed;
}

// function to remove data from the top of the stack
bool Stack::pop()
{
	bool executed = false;

	if (!isEmpty()){
		top--;
		executed = true;
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

//function ONLY for debugging/testing purposes
void Stack::printStack(){
	if (!isEmpty()){
		for (int i=0; i <= SIZE; i++){
			std::cout << "Element at position " << i << " is " << stack[i] << std::endl;
		}
	}
	else {
		std::cout << "Stack is currently empty" << std::endl;
	}
}




