#include <iostream>

using namespace std;

int getValueFromUser() {

	cout << "Enter an integer: ";
	int input{};
	cin >> input;

	return input;
}

int main() {

	int x{ getValueFromUser() }; // initialize x with the return value from getValueFromUser()
	int y{ getValueFromUser() }; // initialize y with the return value from getValueFromUser()
	cout << x << " + " << y << " = " << x + y << '\n';

	return 0;
}