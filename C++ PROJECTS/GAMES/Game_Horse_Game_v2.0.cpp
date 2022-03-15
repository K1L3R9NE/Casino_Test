#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
using namespace std;

double PlayerBalance;
double PCBalance;
double offer;
int dice;
int dice1;
int dice3;
string playerName;
string PCName;
float rand1;
float rand2;

char TAB = ' ';
int posX;
int posZ;

void Rules()
{
	cout << "\n\t\t//-------Welcome in our GRAND CASINO-------//\t\t" << endl;
}


int main()
{
	//if you lose or win, you go here

	srand(time(0));
	dice3 = rand() % 21;

	switch (dice3)
	{
	case 1:
		PCName = "Masha";
		break;
	case 2:
		PCName = "Antonio";
		break;
	case 3:
		PCName = "Ghoul_228";
		break;
	case 4:
		PCName = "Denus";
		break;
	case 5:
		PCName = "Petro";
		break;
	case 6:
		PCName = "Mark";
		break;
	case 7:
		PCName = "Neo";
		break;
	case 8:
		PCName = "Pablo";
		break;
	case 9:
		PCName = "Maia";
		break;
	case 10:
		PCName = "Sonia";
		break;
	case 11:
		PCName = "Maria";
		break;
	case 12:
		PCName = "Marvin";
		break;
	case 13:
		PCName = "Francisco";
		break;
	case 14:
		PCName = "Michele";
		break;
	case 15:
		PCName = "Hilda";
		break;
	case 16:
		PCName = "Sufyaan";
		break;
	case 17:
		PCName = "Alex";
		break;
	case 18:
		PCName = "Alice";
		break;
	case 19:
		PCName = "Essa";
		break;
	case 20:
		PCName = "Elsa";
		break;
	default:
		cout << dice3 << endl;
	}

start:

	//rules
	Rules();

	//name
	cout << "\n\t\t\t\tEnter your name : " << endl;
	cout << "\t\t\t\t";
	getline(cin, playerName);
	cout << "\t\t\t\tOk, hello Mr " << playerName << endl << endl;

	//player balance
	cout << playerName << " ,please enter your balance $ ";
	cin >> PlayerBalance;
	cout << "Ok your balance is " << PlayerBalance << "$" << endl << endl;

	//pc balance
	srand(time(0));
	float rand1 = rand() % 12 + 8;
	PCBalance = PlayerBalance * (rand1 / 10);
	cout << PCName << " balance is " << PCBalance << "$" << endl << endl;

	//////////////////////
	int sizeline = 100;
	posX = sizeline / 2;

	//gameplay
	while (PlayerBalance > 0 && PCBalance > 0)
	{
		posX = sizeline / 2;

		//player offer
	offe:
		cout << "Enter your offer" << endl;
		cin >> offer;
		if (offer >= PlayerBalance || offer <= 0)
		{
			cout << "You enter wrong offer" << endl;
			cout << "Please try again, and remember that your offer should be more that zero and lesser that your balance" << endl;
			goto offe;
		}
		PlayerBalance = PlayerBalance - offer;
		cout << "Your balance is " << PlayerBalance << "$" << endl;
		cout << "Your offer is " << offer << "$" << endl;

		//pc offer
		if (PCBalance - (offer * 0.8) < 0)
		{
			PCBalance = PCBalance - (offer / 4);
			offer = offer + (offer / 4);
			cout << "Total offer is " << offer << endl;
		}

		PCBalance = PCBalance - (offer * 0.8);
		offer = offer + (offer * 0.8);
		cout << "Total offer is " << offer << endl;

		//game
	rande:
		cout << "OK, slect ONE(1) or ZERO(0)" << endl;
		cin >> dice1;

		if (dice1 > 1 || dice1 < 0)
		{
			dice1 = 0;
			cout << "You enter a wrong number!!" << endl;
			cout << "Try again!!" << endl;
			goto rande;
		}


		while (true)
		{
			//check is you win or no
			if (posX == (sizeline - 1))
			{
				dice = 1;
				break;
			}
			else if (posX == 1)
			{
				dice = 0;
				break;
			}

			//start of line
			cout << "||ZERO||";


			int posZ = rand() % 3 - 1;
			posX = posX + posZ;
			for (int b = 0; b < posX; b++)
			{
				cout << TAB;
			}

			cout << playerName;

			for (int b = 0; b < (sizeline - posX); b++)
			{
				cout << TAB;
			}

			cout << " ||ONE||" << endl;
			//end of line

		}


		srand(time(0));
		if (dice1 == dice)
		{
			cout << "Ouuuu, you win, get your " << offer << " bucks" << endl;
			PlayerBalance = PlayerBalance + offer;
			cout << "Your balance is " << PlayerBalance << endl;
			cout << PCName << " balance is " << PCBalance << endl;
			offer = 0;
		}
		else
		{
			cout << "Ouuuu, you lose" << endl;
			PCBalance = PCBalance + offer;
			cout << "Your balance is " << PlayerBalance << endl;
			cout << PCName << " balance is " << PCBalance << endl;
			offer = 0;
		}


	}

	//lose
	if (PlayerBalance <= 1)
	{
		cout << "Sorry but you lose, your balance is 0$" << endl << endl;
		goto start;
	}

	//win
	if (PCBalance <= 1)
	{
		cout << "Heeeeyyyy, you WIN!!! Your balance  is" << PlayerBalance << "$" << endl << endl;
		goto start;
	}

}