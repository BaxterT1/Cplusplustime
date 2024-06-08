#include <iostream>

//This function takes no parameters
//It does not rely on the caller for anything
void doPrint()
{
	std::cout << "In doPrint()\n";
}

//This function takes one parameter named x
//The caller will supply the value for x
void printValue(int x)
{
	std::cout << x << '\n';
}

//This function has two integer parameters, one named x, one named y
//The caller will supply the value for x and y
int add(int x, int y)
{
	return x + y;
}

//This function has two integer parameters, one named x, and one named y
//The value for the parameters is provided by the caller
void printValues(int x, int y)
{
	std::cout << x << '\n';
	std::cout << y << '\n';
}

int main()
{
	printValues(6, 7);

	return 0;
}


