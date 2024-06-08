#include <iostream>

void doSomething()
{
	std::cout << "Hello!\n";
}
int main()
{
	// x cannot be used here because its not defined (in scope)

	int x{ 0 }; // x enters scope (initialized/defined)

	doSomething();

	return 0;

} // x goes out of scope (end of curly braces)