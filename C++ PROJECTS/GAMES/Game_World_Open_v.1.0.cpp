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

class Player //PLAYER control and properties
{
public:
	//int 
	int Speed; 
	int Years; 
	int Money; 

	//char
	char Token; 
	char Trace; 
	char Button;

	//cord
	int X;
	int Y;

	//strings
	string name;

	//other
};
Player Me;

class Bot //BOT controland properties
{
public:
	//cord
	int X;
	int Y;

	//other
};
Bot Tom;

//FUNCTION

//lose
bool Lose(int PlayerX, int playerY, int BotX, int BotY)
{
	if (PlayerX == BotX && playerY == BotY) //chech, did player touch bot
	{
		return true;
	}
	else 
	{
		return false;
	}
}

//button
int Button()
{
	char Click = _getch();
	if (Click == 'W' || Click == 'w' || Click == 'Ц' || Click == 'ц')
	{
		return 8;
	} else
		if (Click == 'A' || Click == 'a' || Click == 'Ф' || Click == 'ф')
		{
			return 4;
		}
		else
			if (Click == 'S' || Click == 's' || Click == 'І' || Click == 'і')
			{
				return 2;
			}
			else
				if (Click == 'D' || Click == 'd' || Click == 'В' || Click == 'в')
				{
					return 6;
				}
}

//position of player
int Position(int Click, int PlayerX, int PlayerY)
{
	if (Click == 8)
	{
		PlayerX = PlayerX + 1;
	}
}

int main()
{
	while ( !Lose(Me.X, Me.Y, Tom.X, Tom.Y) )
	{
		Draw ( Position ( Button() ) );
	}
}