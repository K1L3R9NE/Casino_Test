#include <iostream>
#include <string>

using namespace std;

double a, b, c, d, per, mid, sq;


int main()
{
	double a, b, c, d;
	cout << "Enter a first side" << endl;
	cin >> a;
	cout << "Enter a second side" << endl;
	cin >> b;
	cout << "Enter a third side" << endl;
	cin >> c;
	cout << "Enter a fourth side" << endl;
	cin >> d;
	per = a + b + c + d;
	mid = per / 4;
	sq = mid * mid;


	cout << "Square is : " << sq << endl;
}

