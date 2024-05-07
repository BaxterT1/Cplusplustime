#include <iostream>

using namespace std;

int main()
{
	int time{}, distance{}, acceleration{ 32 };
	float squareOfTime{};

	cout << "Enter the time (s): ";
	cin >> time;

	float squareOfTime = pow(time, 2);

	distance = (acceleration * squareOfTime) / 2;

	cout << "The object was in free fall for " << distance << " feet.\n";
}