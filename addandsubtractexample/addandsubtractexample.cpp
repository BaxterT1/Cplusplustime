#include <iostream> // from course site

int main()
{
	std::cout << "Enter an integer: "; // request input for first variable
	int x{}; // initializes first variable after requesting input
	std::cin >> x; // stores value in variable

	std::cout << "Enter another integer: "; // requests input for second variable
	int y{}; // initializes second variable after requesting input
	std::cin >> y; // stores value in variable  

	std::cout << x << " + " << y << " is " << x + y << ".\n"; // performs operations through expressions.
	std::cout << x << " - " << y << " is " << x - y << ".\n";

	return 0;
}