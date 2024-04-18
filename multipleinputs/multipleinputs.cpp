#include <iostream>

int main() {
	std::cout << "Enter two numbers, seperated by a space: "; // takes user input for numbers.

	int x{}; // initialises variable 1
	int y{}; // initialises variable 2

	std::cin >> x >> y; // accepts user input seperated by a space, as described above

	std::cout << "You entered the numbers: " << x << " and " << y << '\n'; // prints the results
}