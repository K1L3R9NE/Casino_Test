#include <iostream> //basic
#include <string> //strings
#include <clocale> //Обязательно для функции setlocale()
#include <cstdlib> // rand, srand
#include <ctime> //time
#include <stdio.h> //math
#include <stdlib.h> //math
#include <math.h>
#include <cstring>
#include <conio.h>
#include <Windows.h>
using namespace std; //std:

const int sizeX1 = 41;
const int sizeY1 = 21;
const int sizeX = 40;
const int sizeY = 20;
int centerX = 10;
int centerY = 10;
double radius = 10;
bool arr[sizeX][sizeY];

int main()
{

	for (int Y = 0; Y < sizeY; Y++)
	{
		for (int X = 0; X < sizeX; X++)
		{

			/*
			if (centerX + sqrt((X * X) + (Y * Y)) <= radius + centerX)
			{
				arr[X + 10][Y + 10] = true;
			}  else */
				if ( (X > 0 && Y > 0) ) 
				{
					arr[X][Y] = true;
				} 
		}
	}



	//render
	for (int Y1 = 0; Y1 < sizeY1; Y1++)
	{
		for (int X1 = 0; X1 < sizeX1; X1++)
		{
			if (X1 == 0 || X1 == 40)
			{
				cout << '|';
			} else
				if (Y1 == 0 || Y1 == 20)
				{
					cout << '=';
				} else
					if (arr[X1][Y1] == true)
					{
						cout << '@';
					}
					else cout << '#';
		}
		cout << endl;
	}



}