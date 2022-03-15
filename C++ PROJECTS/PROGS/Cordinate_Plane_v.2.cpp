#include <iostream> //basic
#include <string> //strings
#include <clocale> //Обязательно для функции setlocale()
#include <cstdlib> // rand, srand
#include <ctime> //time
#include <stdio.h> //math
#include <stdlib.h> //math
using namespace std; //std::

//#define DEBUG_ONE //print values X Y X1 Y1
//#define DEBUG_TWO //draw line (drom Dot1 to Dot2)

//class Point (Dot1 and Dot2)
class Point
{
private:
	//fist coordinate dot
	int x; 
	int y;

public:
	//fist coordinate dot
	int GetX() { return x; }
	int GetY() { return y; }

	void SetX(int valX) { x = valX; }
	void SetY(int valY) { y = valY; }

	// to check values of x and y & x1 and x2
	void Print()
	{
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
	}
};

int centr(int val, int vale)
{
	int a = ((val + vale) / 2);
	return a;
}


int main()
{

	
	

	//input coorinates of first dot
	Point Dot1;

	cout << "Enter a cordinate of x: " << endl;
	int valX; cin >> valX;
	Dot1.SetX(valX+10);
	 
	cout << "Enter a cordinate of y: " << endl;
	int valY; cin >> valY;
	Dot1.SetY(-valY + 10);

	//input coorinates of second dot
	Point Dot2;

	cout << "Enter a cordinate of x1: " << endl;
	int valX1; cin >> valX1;
	Dot2.SetX(valX1 + 10);

	cout << "Enter a cordinate of y1: " << endl;
	int valY1; cin >> valY1;
	Dot2.SetY(-valY1 + 10);

	//check
#ifdef DEBUG_ONE
	Dot1.Print();
	Dot2.Print();
#endif

	//size of plane
	const int sizeX = 20 + 1;  
	const int sizeY = 20 + 1;

	//array
	char arr[sizeX][sizeY];


	//main cycle

	//axis Y
	for (int y = 0; y < sizeY; y++)
	{
		//axis X
		for (int x = 0; x < sizeX; x++)
		{
			//if Dot1 equal coordinate  
			if (x == Dot1.GetX() && y == Dot1.GetY())
			{
				arr[x][y] = '@';
			}
			else //if Dot2 equal coordinate
				if (x == Dot2.GetX() && y == Dot2.GetY())
				{
					arr[x][y] = '@';
				}
				else //draw Nothink (#)
				{
					arr[x][y] = ' ';
				}

			//Draw of X line axis (|)
			if (y == (sizeY / 2))
			{
				arr[x][y] = '-';
			}

			//Draw of Y line axis (---)
			if (x == (sizeX / 2))
			{
				arr[x][y] = '|';
			}

			//if Dot coordinate equal Zero
			if (x == Dot1.GetX() && y == Dot1.GetY())
			{
				arr[x][y] = '@';
			}


			int midAxisX = centr(Dot1.GetX(), Dot2.GetX());
			int midAxisY = centr(Dot1.GetY(), Dot2.GetY());

			if (x == midAxisX && y == midAxisY)
			{
				arr[x][y] = '@';
			}

			int midAxisX1 = centr(Dot1.GetX(), midAxisX);
			int midAxisY1 = centr(Dot1.GetY(), midAxisY);

			if (x == midAxisX1 && y == midAxisY1)
			{
				arr[x][y] = '@';
			}

			int midAxisX2 = centr(Dot2.GetX(), midAxisX);
			int midAxisY2 = centr(Dot2.GetY(), midAxisY);

			if (x == midAxisX2 && y == midAxisY2)
			{
				arr[x][y] = '@';
			}

			//check
		#ifdef DEBUG_TWO
		
			int sizeTempY = abs(Dot1.GetY()) + abs(Dot2.GetY());
			int sizeTempX = abs(Dot1.GetX()) + abs(Dot2.GetX());

			

			else if (((x < Dot1.GetX()) && (x > Dot2.GetX())) && ((y < Dot1.GetY()) && (y > Dot2.GetY())))
			{
				arr[x][y] = '@';
			}
			

			

		#endif

			//final Draw of array
			cout << arr[x][y];
		}
		//go to new line after each row
		cout << endl;
	}

}