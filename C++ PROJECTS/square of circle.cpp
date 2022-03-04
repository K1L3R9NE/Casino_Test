#include <iostream>
#include <string>

using namespace std;

int main()
{
	const double PI = 3.14159265;
	double squareCircle;
	double radius;

	cout << "Enter radius" << endl;
	cin >> radius;
	squareCircle = PI * (radius) ^ 2;
	cout << squareCircle;


}
