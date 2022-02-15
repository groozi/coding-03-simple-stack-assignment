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

bool Stack::isEmpty()
{
    return (top == -1);
}