#include <iostream> // my version of the program

int main()
{
	int firstNum{ }; // initialized the variables first
	int secondNum{ };

	std::cout << "Enter a number: "; std::cin >> firstNum; // request and store user input for first var
	std::cout << "Enter another number: "; std::cin >> secondNum; // request and store user input for second var

	std::cout << firstNum << " + " << secondNum << " is: " << firstNum + secondNum << ". \n"; // perform the operation by using an expression
	std::cout << firstNum << " - " << secondNum << " is: " << firstNum - secondNum << ". \n";

	return 0;
}