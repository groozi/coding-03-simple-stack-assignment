/*********************
* Name: Graziella Buitron
* Coding 03
* Purpose: To introduce a simple ADT (abstract data type) and understand the function and purpose of ADTs.
**********************/

#include "main.h"

int main(int argc, char** argv){

    Stack stack1;

    /*
     * testing random orders of execution for pop and push; 
     * pushing random numbers from 0 to 1000 followed by calling peek() and isEmpty()
     * in every loop execution
     */

    for (int i=0; i <= SIZE + 5000; i++){

        int random1 = std::rand() % 2;
        int random2 = std::rand() % 1000;

        if (random1==0){
            std::cout << "Atempting to push " << random2 << ". Pushing... " << std::endl;

            try {
                stack1.push(random2);
            }
            catch(int e){
                std::cout << "Overflow error." << std::endl;
            }
            catch(char e){
            std::cout << "Error. Invalid entry." << std::endl;
			}

		} else{

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

		std::cout << std::endl;
	}

	Stack stack2;

	/* loop to test push with random number operations
	 * tests pushing past the stack size limit
	 */

	std::cout << "TESTING RANDOMIZED ORDER OF OPERATIONS WITH RANDOM NUMBERS" << std::endl;
	for (int i = 0; i < SIZE + 10; i++){
		int random = std::rand() % 50;
		int result = random*random;

		std::cout << "Random number is: " << random << " Result of operation is: " << result << std::endl;

		try {
			std::cout << "Pushing " << result << ".... " << std::endl;
			stack2.push(result);
		}
		catch(int e){
				std::cout << "Overflow error." << std::endl;
		}
		catch(char e){
			std::cout << "Error. Invalid entry." << std::endl;
		}

			try {
				std::cout << "Peeking into the stack. " << stack2.peek() << std::endl;
			}
			catch (...){
				std::cout << "Peek failed." << std::endl;
			}
	

			std::cout << std::endl;
	}



Stack stack3;


	

	std::cout << "TESTING INPUTTING STRING TO PUSH FUNCTION" << std::endl;

	char testInput[] = {"String test input"};

	try {
		stack3.push(x);
	}
	catch (...){
		std::cout << "Error. Invalid entry." << std::endl;

	}


	
stack3.printStack();





 return 0;
	
}
 
 


