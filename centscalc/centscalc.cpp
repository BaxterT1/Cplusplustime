#include <iostream>

using namespace std;

int main()
{
	int quarter = {}, dime = {}, nickel = {}, cents{};

	cout << "Enter the number of quarters: ";
	cin >> quarter;

	cout << "Enter the number of dimes: ";
	cin >> dime;

	cout << "Enter the number of nickels: ";
	cin >> nickel;

	cents = (quarter * 25) + (dime * 10) + (nickel * 5);

	cout << "The amount in cents is: " << cents;

	return 0;
}