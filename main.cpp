/*********************
* Name: Graziella Buitron
* Coding 03
* Purpose: To introduce a simple ADT (abstract data type) and understand the function and purpose of ADTs.
**********************/

#include "main.h"

int main(int argc, char** argv){
	std::cout << "Hello, World!" << std::endl;

	Stack stack1();
	stack1.push(12);
	std::cout << stack1.isEmpty() << std::endl;
	stack1.peek();
	stack1.push(10);
	stack1.peek();
	stack1.pop();
	stack1.peek();

    return 0;
}


