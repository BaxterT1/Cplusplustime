#include <iostream>

int getInteger();
int addition(int, int);
int multiplication(int, int);
int division(int, int);

int main() 
{
	int x{ getInteger() };
	int y{ getInteger() };
	
	addition(x, y); '\n';
	multiplication(x, y); '\n';
	division(x, y); '\n';

	return 0;
}

