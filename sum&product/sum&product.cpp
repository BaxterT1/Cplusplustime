#include <iostream>

using namespace std;


int main()
{
	int x{}, y{}, sum{}, product{};

	cout << "Enter a number: ";
	cin >> x;
	cout << "Enter another number: ";
	cin >> y;

	sum = x + y;
	product = x * y;

	cout << "The sum of the numbers is: " << sum << '\n';
	cout << "The product of the numbers is: " << product << '\n';

	return 0;
}