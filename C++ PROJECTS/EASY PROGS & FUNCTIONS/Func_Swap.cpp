#include <iostream>
#include <string>

using namespace std;

int a, b;

void Swap(int* val, int* val1)
{
	int temp = *val;
	*val = *val1;
	*val1 = temp;
}

int main()
{
	cout << "Enter a first number" << endl;
	cin >> a;

	cout << "Enter a second number" << endl;
	cin >> b;

	


	cout << "int a is - " << a << endl;
	cout << "int b is - " << b << endl;
}