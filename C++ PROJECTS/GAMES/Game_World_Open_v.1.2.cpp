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

//CLASS
class Player //PLAYER control and properties
{
private:
	//int
	int Speed = 1;
	int Years = 20;
	int Money = 0;
	float HP = 10;
	float DM = 10;

	//char
	char Token; //symbol of player
	char Trace;	//trace which left after player

	//cord
	int X; int Y;

	//strings
	string name;

public:
	//GET
	int GetX() { return X; }
	int GetY() { return Y; }

	int GetSpeed() { return Speed; }
	int GetYears() { return Years; }
	int GetMoney() { return Money; }

	char GetToken() { return Token; }
	char GetTrace() { return Trace; }

	//SET
	void SetX(int temp) { X = temp; }
	void SetY(int temp) { Y = temp; }

	void SetSpeed(int temp) { Speed = temp; }
	void SetYears(int temp) { Years = temp; }
	void SetMoney(int temp) { Money = temp; }

	void SetToken(char temp) { Token = temp; }
	void SetTrace(char temp) { Trace = temp; }
};

class Bot //BOT controland properties
{
private:
	//cord
	int X;
	int Y;

	//int
	int Speed;

public:
	//GET
	int GetX() { return X; }
	int GetY() { return Y; }

	int GetSpeed() { return Speed; }
};

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
	}
	else
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

				}
}

//position of player
int Position(int Click, int PlayerX, int PlayerY)
{
	if (Click == 8)
	{
		PlayerY = PlayerY - 1;
	}
	else
		if (Click == 4)
		{
			PlayerX = PlayerX - 1;
		}
		else
			if (Click == 2)
			{
				PlayerY = PlayerY + 1;
			}
			else
				if (Click == 6)
				{
					PlayerX = PlayerX + 1;
				}
}

char Check()
{

}

void Play()
{

}

char Input()
{
	char Temp; cin >> Temp;
	return Temp;
}

void Draw(int PlayerX, int PlayerY)
{
	const int sizeX = 10;
	const int sizeY = 5;

	char arr[sizeX][sizeY];

	for (int Y = 0; Y < sizeY; Y++)
	{
		for (int X = 0; X < sizeY; X++)
		{
			arr[X][Y] = Check();
			cout << arr[X][Y];
		}
		cout << endl;
	}
}

int main()
{
	Player Player_One; //create first player
	Bot Bot_One; //create first bot

	cout << "Enter Player Token" << endl;
	Player_One.SetToken(Input());
	//input Trace
	cout << "Enter Player Trace" << endl;
	Player_One.SetTrace(Input());
	//input Trace
	cout << "Enter Player Age" << endl;
	Player_One.SetYears(Input());

	while (!Lose(Player_One.GetX(), Player_One.GetY(), Bot_One.GetX(), Bot_One.GetY()))
	{
		Button();
		Play();
		Draw(Player_One.GetX(), Player_One.GetY());
	}
}