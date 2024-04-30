#include <iostream>

int main()
{
	std::cout << "Enter an integer: "; // takes user input

	int num{ }; // initialises variable num 

	std::cin >> num; // stores user input

	std::cout << "Double " << num << " is: " << num * 2 << '\n'; // prints double the number stored in num

	std::cout << "Triple " << num << " is: " << num * 3 << '\n'; // prints triple the number stored in num

	return 0;
}