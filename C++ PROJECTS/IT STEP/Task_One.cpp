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

	setlocale(LC_ALL, "Russian");

	//values for task one
	int number;

	float sideX;
	float sideY;

	float a;
	float b;
	float c;

	float p;
	float S;

	float radius;
	const float PI = 3.141592;

	//input
link1:// if ERROR

	cout << "Task One" << endl;
	cout << "Enter your tipe of room:" << endl;
	cout << "1. Rectangle" << endl;
	cout << "2. Triangle" << endl;
	cout << "3. Circle" << endl;
	cin >> number;

	//task one
	if (number == 1)
	{
		cout << "Enter first side: " << endl;
		cin >> sideX;
		cout << "Enter second side: " << endl;
		cin >> sideY;
		cout << "Square of Rectangle is: " << sideX * sideY << endl << endl;
	}
	else
		if (number == 2)
		{
			cout << "Enter first side: " << endl;
			cin >> a;
			cout << "Enter second side: " << endl;
			cin >> b;
			cout << "Enter first side: " << endl;
			cin >> c;
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "Square of Triangle is: " << S << endl << endl;
		} else
			if (number == 3)
			{
			cout << "Enter radius: " << endl;
			cin >> radius;
			cout << "Square of Circle is: " << PI * (radius * radius) << endl << endl;
			}
			else {
				cout << "You enter wrong number! Try again!" << endl << endl;
				goto link1; //go to start
			}

	//values for task two
	int Num;
	int Num_End;

	link2: //if ERROR
	cout << "Enter how many programers you have: " << endl;
	cin >> Num;

	if (Num < 0)
	{
		cout << "Error! You input too less Programers! Try Again" << endl << endl;
		goto link2;
	}

	Num_End = Num % 10;

	if (Num_End == 1)
	{
		cout << "You have: " << Num << " Програмiст" << endl;
	}
	else
		if (Num_End >= 2 && Num_End <= 4)
		{
			cout << "You have: " << Num << " Програмiсти" << endl;
		}
		else
			if (Num_End >= 5 && Num_End <= 10)
			{
				cout << "You have: " << Num << " Програмiстiв" << endl;
			}
			else {
				cout << "Error! Try Again" << endl << endl;
				goto link2;
			}
}