/*********************
* Name: Graziella Buitron
* Coding 03
* Purpose: To introduce a simple ADT (abstract data type) and understand the function and purpose of ADTs.
**********************/

#include "main.h"

int main(int argc, char** argv){

	Stack stack1;

	std::cout << "Testing with push() and pop() executing in random order followed by peek() and isEmpty()" << std::endl;


	for (int i=0; i <= SIZE; i++){
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

	/*

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

	*/

	stack1.printStack();

	/*
	Stack stack2;

	std::cout << "Testing pop() method" << std::endl;
	for (int i = 0; i < SIZE +1; i++){

		int random = std::rand() % 100;

		if (stack1.push(random)){
			std::cout << "Inserted " << random << " to stack." << std::endl;
		} else {
			std::cout << "Overflow Error." << std::endl;
		}

		try {
			std::cout << "Peeking.. " << stack1.peek() << std::endl;
		}
		catch(...){
			std::cout << "Peek unsuccessful." << std::endl;
		}


	}

	*/

 return 0;
	
}
 



