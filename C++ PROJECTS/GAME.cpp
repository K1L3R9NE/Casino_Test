#include <iostream>
using namespace std;

//values
const int sizeX = 20;
const int sizeY = 10;
char field[sizeX][sizeY];

void Draw()
{
	for (int i = 0; i < (sizeX+2); i++) //enter ===
	{ cout << "=" ; } 
	cout << endl;
	
	for (int j = 0; j < sizeY; j++)
	{
		cout << "|"; //enter |...
		for (int i = 0; i < sizeX; i++)
		{
			field[sizeX][sizeY] = '#';
			cout << field[sizeX][sizeY];
		}
		cout << "|"; //enter ...|
		cout << endl;
	}

	for (int i = 0; i < (sizeX + 2); i++)//enter ===
	{ cout << "="; } 
}




void main()
{
	Draw();
}