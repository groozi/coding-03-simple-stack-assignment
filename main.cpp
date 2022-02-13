/*********************
* Name: Graziella Buitron
* Coding 03
* Purpose: To introduce a simple ADT (abstract data type) and understand the function and purpose of ADTs.
**********************/

#include "main.h"

int main(int argc, char** argv){

	Stack stack1;

	for (int i = 0; i <= SIZE + 1; i++){
		int randomNum = std::rand() % 3;

		switch (randomNum){
			case 0:
				if (stack1.push(i)){
					std::cout << "Element inserted" << std::endl;
				}
				else {
					std::cout << "Overflow Error" << std::endl;
				}
				break;

			case 1:
				try {
					stack1.pop();
					std::cout << "Item removed from stack." << std::endl;
				}
				catch (...){
					std::cout << "Underflow error. No item to be removed from stack." << std::endl;

				}

			case 2: 
					try {
				std::cout << "Peeking into the stack. Current item: " << stack1.peek() << std::endl;
			}
			catch (...){

				std::cout << "Peek failed." << std::endl;

			}

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


