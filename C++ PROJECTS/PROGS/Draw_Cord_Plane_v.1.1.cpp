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


//for create field
const int sizeX = 40;
const int sizeY = 20;

//for render
const int sizeX1 = sizeX + 1;
const int sizeY1 = sizeY + 1;

//add
int centerX = sizeX / 2;
int centerY = sizeY / 2;

double radius = (sizeX + sizeY) / 4;
double diametr = radius + radius;
double Long = 0;
double LongSize = 0;

//array
bool arr[sizeX][sizeY];

int main()
{

	for (int Y = 0; Y < sizeY; Y++)
	{
		for (int X = 0; X < sizeX; X++)
		{
			Long = sqrt(((X+ centerX)*(X+centerX))+((Y+centerY)*(Y+centerY))*2);
			LongSize = sqrt((centerX + sizeX * sizeX) + ((centerY + sizeY/4) * (centerY + sizeY/4)));
			if (Long < LongSize)
			{
				arr[X][Y] = true;
			}
			else arr[X][Y] = false;
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