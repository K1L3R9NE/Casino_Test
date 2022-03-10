#include <iostream> //basic
#include <string> //strings
#include <clocale> //Обязательно для функции setlocale()
#include <cstdlib> // rand, srand
#include <ctime> //time
#include <stdio.h> //math
#include <stdlib.h> //math
using namespace std; //std::

class Point
{
private:
	int x;
	int y;

public:
	int GetX()
	{
		return x;
	}

	int GetY()
	{
		return y;
	}

	void SetX(int valX)
	{
		x = valX;
	}

	void SetY(int valY)
	{
		y = valY;
	}

	void Print()
	{
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
	}
};

int main()
{
	Point cord;

	cout << "Enter a cordinate of x: " << endl;
	int valX; cin >> valX;
	cord.SetX(valX+10);
	 
	cout << "Enter a cordinate of y: " << endl;
	int valY; cin >> valY;
	cord.SetY(-valY + 10);

	cord.Print();

	const int sizeX = 20 + 1;  

		  
	const int sizeY = 20 + 1;

	char arr[sizeX][sizeY];

	for (int y = 0; y < sizeY; y++)
	{
		for (int x = 0; x < sizeX; x++)
		{
			if (x == cord.GetX() && y == cord.GetY())
			{
				arr[x][y] = '@';
			}
			else
			{
				arr[x][y] = '#';
			}

			if (y == (sizeY/2 ))
			{
				arr[x][y] = '-';
			}

			if (x == (sizeX / 2 ))
			{
				arr[x][y] = '|';
			}
			if (x == cord.GetX() && y == cord.GetY())
			{
				arr[x][y] = '@';
			}

			cout << arr[x][y];
		}
		cout << endl;
	}
}