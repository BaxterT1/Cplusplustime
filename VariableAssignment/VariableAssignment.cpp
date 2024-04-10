#include <iostream>

int main() {
	int width; 
	width = 5; // copy assignment to width of value: 5

	std::cout << width; // prints 5

	width = 7; // overwrites previous value, *variables can only hold one value at a time*

	std::cout << width; // prints new overwritten value

	return 0;
}
