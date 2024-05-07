#include <iostream>

using namespace std;

int main()
{
	int width{}, height{}, totalLength{};

	cout << "Enter the width in feet: ";
	cin >> width;

	cout << "Enter the height in feet: ";
	cin >> height;

	totalLength = (width + height) * 2;

	cout << "The total length of fence (perimeter) required is: " << totalLength << '\n';

	cout << "Thank you.";

	return 0;
}