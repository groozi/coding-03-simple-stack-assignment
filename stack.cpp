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
bool Stack::push(int entry){

	bool executed = false;
	
    if(top < SIZE-1){
        stack[++top] = entry;
        return true;
    } 
    else if (top = SIZE-1 ){
    	throw 1;
    } else{
    	throw 'e';
    }
    
}

// function to remove data from the top of the stack
bool Stack::pop()
{
	if (!isEmpty()){
		--top;
		return true;
	}
	else{
		throw -1;
	} 
}

int Stack::peek(){
	if (!isEmpty()){
		return stack[top];
	}
	else {
		throw -1;
	}
}

// function to check if stack is empty
bool Stack::isEmpty()
{
    return (top == -1);
}

//function ONLY for debugging/testing purposes
void Stack::printStack(){
	if (!isEmpty()){
		for (int i=0; i < SIZE ; i++){
			std::cout  << stack[top] << std::endl;
			top--;
		}
	}
	else {
		std::cout << "Stack is currently empty" << std::endl;
	}
}




