#include <iostream> 
using namespace std;

int main()
{
	//TASK 1
	int i1 = 0;
	int j1 = 0;

	cout << "Input how many stars you want to see:" << endl;
	cin >> j1;

	while (i1 < j1)
	{
		cout << "*" << endl;
		i1++;
	}


	//TASK 2
	int i2 = 0;
	int j2 = 0;

	cout << "Input how many times you want to sit crouch:" << endl;
	cin >> j2;

	while (i2 < j2)
	{
		cout << "You already crouch: " << i2 << " times. You need to crouch:" << (j2 - i2) << " times more." << endl;
		i2++;
	}


	//TASK 3
	int i3 = 0;
	int j3 = 0;

	cout << "Enter how many times you want to repeat image of penguin:" << endl;
	cin >> j3;

	while (i3 < j3)
	{
		cout << "  _~_" << endl;
		cout << " (o o)" << endl;
		cout << " / V \\" << endl;
		cout << "/( _ )\\" << endl;
		cout << " ^^ ^^" << endl;
		i3++;
	}


	//TASK 4
	int i4 = 0;
	int j4 = 0;
	int a = 1;

	while (i4 < 55)
	{
		cout << a << endl;
		i4++;
		a++;
		a++;
	}
}