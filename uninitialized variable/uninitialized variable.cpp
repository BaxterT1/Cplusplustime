#include <iostream>

void doNothing(int&) { // void function used to bypass Visual Studio limitation on uninitialised variables

}

int main() { 
	int x; // uninitialised integer variable named x
	
	doNothing(x); // make the compiler think we're assigning a value to this variable

	std::cout << x << '\n'; // print the value of x to the screen (not sure what we'll get because x is uninitialised

	return 0;
}