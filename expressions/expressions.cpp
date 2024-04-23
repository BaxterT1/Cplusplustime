#include <iostream>

int five()
{
	return 5;
}

int main()
{
	int a{ 5 };					// initialise variable a with literal value 2.
	int b{ 2 + 3 };				// initialise variable b with computed value 5.
	int c{ (2 * 3) + 4 };		// initialise variable c with computed value 10.
	int d{ b };					// initialise variable d with variable value 5.
	int e{ five() };			// initialise variable e with function return value 5.
	int x{ 2 + 3 };				// 2 + 3 is an expression that has no semicolon -- the semicolon is at the end of the statement containing the expression '2 + 3'.
	return 0;
}

