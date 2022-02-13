/*********************
* Name: Graziella Buitron
* Coding 03
* Purpose: To introduce a simple ADT (abstract data type) and understand the function and purpose of ADTs.
**********************/

#include "main.h"

int main(int argc, char** argv){

	Stack stack1;


	for (int i = 0; i <= SIZE + 50; i++){
		int randomNum = std::rand() % 2;

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
				if (stack1.pop()){
					std::cout << "Element removed" << std::endl;
				}
				else {
					std::cout << "Underflow Error" << std::endl;
				}
		}

		try {
			std::cout << "Peeking into stack: " << stack1.peek() << std::endl;
		}
		catch(...){

			std::cout << "Peek unsuccessful. Stack is empty" << std::endl;
		}

		if (stack1.isEmpty()){
			std::cout << "Stack is empty" << std::endl;
		}
		else {
			std::cout << "Stack is not empty" << std::endl;
		}



    
		}
	return 0;
}


