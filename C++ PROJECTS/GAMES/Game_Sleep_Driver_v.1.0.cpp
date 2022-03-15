#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;

char TAB = ' ';

int posX;
int score1 = 0;
int posZ;
int main()
{
	srand(time(0));


	cout << "Enter a char" << endl;
	char x;  
	cin >> x;

	cout << "Enter size of line" << endl;
	int sizeline; 
	cin >> sizeline;
	sizeline = sizeline * 4;
	
	posX = sizeline / 2;

	//cycle  
	while (true)
	{
		//chek is you win or no
		if (posX == (sizeline - 1))
		{
			cout << "You win!!! Your score is:" << score1 << endl;
			break;
		}
		else if (posX == 1)
		{
			cout << "You lose((( Your score is:" << score1 << endl;
			break;
		}


		//start of line
		cout << " ||START||";

		
		int posZ = rand() % 3 - 1;
		posX = posX + posZ;
		for (int b = 0; b < posX; b++)
		{
			cout << TAB;
		}
		

		cout <<x;

		
		for (int b = 0; b < (sizeline - posX); b++)
		{
			cout << TAB;
		}



		cout << " ||FINISH||" << endl;
		//end of line


		// cout score rate
		score1++;
	}

} 