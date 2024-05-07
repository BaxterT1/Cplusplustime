#include <iostream>

void printHi() 
{
	std::cout << "Hi" << '\n'; 
	// function type is a void so no return statement is needed. 
}

int main() 
{
	printHi(); // function printHi() is called, no value is returned. 

	return 0;
}