/*********************
* Name: Graziella Buitron
* Coding 03
* Purpose: To introduce a simple ADT (abstract data type) and understand the function and purpose of ADTs.
**********************/

#include "main.h"

int main(int argc, char** argv){

	Stack stack1;

	for (int i = 0; i <= SIZE + 200; i++){
		int randomNum = std::rand() % 2;

		//with random number called, push and pop will execute in random sequences
		if (randomNum == 1){
			if (stack1.push(i)){
				std::cout << "Element " << i << " inserted." << std::endl;
			}
			else {
				std::cout << "Overflow Error." << std::endl;
			}
		}
		else {
			try {
				std::cout << "Removing item from stack. " << std::endl; 
				stack1.pop();
			}
			catch (...){
				std::cout << "Underflow error. Pop unsuccessful." << std::endl;
			}
		}

		try {
				std::cout << "Peeking into the stack. " << stack1.peek() << std::endl;
			}
			catch (...){
				std::cout << "Peek failed." << std::endl;
			}


		if (stack1.isEmpty()){
			std::cout << "Stack is empty." << std::endl;
		}
		else {
			std::cout << "Stack is not empty." << std::endl;
		}

	}

	stack1.printStack();



	return 0;
}


