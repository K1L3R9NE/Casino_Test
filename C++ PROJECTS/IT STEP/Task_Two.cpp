#include <iostream> //basic
#include <string> //strings
#include <clocale> //Обязательно для функции setlocale()
#include <cstdlib> // rand, srand
#include <ctime> //time
#include <stdio.h> //math
#include <stdlib.h> //math
#include <math.h> //math
#include <cstring>
#include <conio.h>
#include <Windows.h>
using namespace std; //std:


int main()
{
	//values for task one
	int num1 = 10;
	int num2 = 38;

	cout << "Task One" << endl;

	while (num1 < num2)
	{
		if ((num1 % 2) == 0 && (num1 % 3) == 0)
		{
			cout << num1 << endl;
		}
		num1++;
	}

	//values for task two
	int a, b;
	int sum = 0;

	cout << endl << "Task Two" << endl;

	cout << "Enter first number" << endl;
	cin >> a;
	cout << "Enter secons number" << endl;
	cin >> b;
	

	for (; a < b; a++)
	{
		if ((a % 2) == 0) 
		{
			sum = sum + a;
		}
	}
	cout << "Result is: " << sum << endl;
}