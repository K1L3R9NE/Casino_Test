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

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char Go;

	cout << "Enter backgound: " << endl;
	char background; cin >> background;

	cout << "Enter your player Char: " << endl;
	char player; cin >> player;
	int playerX = 5;
	int playerY = 5;

	int PlayerXTemp;
	int PlayerYTemp;

	int PlayerXTemp1;
	int PlayerYTemp1;

	int PlayerXTemp2;
	int PlayerYTemp2;

	const int sizeX = 20;
	const int sizeY = 10;
	char arr[sizeX][sizeY];


	while (true)
	{
		//PRESS BUTTON AND CHANGE PLAYER POSITION
		Go = _getch();

		PlayerXTemp = playerX;
		PlayerYTemp = playerY;

		PlayerXTemp1 = PlayerXTemp;
		PlayerYTemp1 = PlayerYTemp;

		PlayerXTemp2 = PlayerXTemp1;
		PlayerYTemp2 = PlayerYTemp1;

		if (Go == 'A' || Go == 'a' || Go == 'Ф' || Go == 'ф')
		{
			playerX = playerX - 1;
		}
		else if (Go == 'D' || Go == 'd' || Go == 'В' || Go == 'в')
		{
			playerX = playerX + 1;
		}
		else if (Go == 'W' || Go == 'w' || Go == 'Ц' || Go == 'ц')
		{
			playerY = playerY - 1;
		}
		else if (Go == 'S' || Go == 's' || Go == 'І' || Go == 'і')
		{
			playerY = playerY + 1;
		}

		//CHECK BORDER X
		if (playerX > sizeX - 1)
		{
			playerX = 0;
		}
		if (playerX < 0)
		{
			playerX = sizeX - 1;
		}
		//CHECK BORDER X
		if (playerY > sizeY - 1)
		{
			playerY = 0;
		}
		if (playerY < 0)
		{
			playerY = sizeY - 1;
		}


		//DRAW
		for (int y = 0; y < sizeY; y++)
		{
			for (int x = 0; x < sizeX; x++)
			{
				//IF PLAYER
				if (x == playerX && y == playerY)
				{
					arr[x][y] = player;
				}
				else 
					if (PlayerXTemp == x && PlayerYTemp == y)
					{
						arr[x][y] = '$';
					} else
						if (PlayerXTemp1 == x && PlayerYTemp1 == y)
						{
							arr[x][y] = '$';
						}
						else
							if (PlayerXTemp2 == x && PlayerYTemp2 == y)
							{
								arr[x][y] = '$';
							}
							else//IF BACKGROUND	
						{
							arr[x][y] = background;
						}
				//FINAL DRAW
				cout << arr[x][y];
			}
			cout << "\n";
		}
		cout << "\n\n\n\n\n\n\n";
	}


	return 0;
}