#include <iostream>
#include <string>
using namespace std;


double first, last;


template <typename T>
T Sum(T a, T b)
{
	return a+b;
}



void main()
{

	cout << "Enter a first number to sum" << endl;
	cin >> first ;
	cout << "Enter a last number to sum" << endl;
	cin >> last ;
}
