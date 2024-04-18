#include <iostream>

int main() {
	std::cout << "Enter a number: "; // requests user input
	-
	int x{}; // initializes variable with value
	std::cin >> x; // Takes user input

	std::cout << "You entered the number: " << x << '\n'; // Prints user input
	std::cout << "Good job!"; 
	return 0;
}