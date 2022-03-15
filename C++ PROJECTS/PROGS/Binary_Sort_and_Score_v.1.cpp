#include <iostream> //basic
#include <string> //strings
#include <clocale> //Обязательно для функции setlocale()
#include <cstdlib> // rand, srand
#include <ctime> //time
#include <stdio.h> //math
#include <stdlib.h> //math
using namespace std; //std::

#define SIZE 10
#define USER_NUM 3

//function with return size of array
int Size_Of_Arr(int arr[])
{
	int high = 1;
	while (arr[high] != 0)
	{
		high++;
	}
	return high;
}

//function which searh number binnary //and return SCORE
int ABS(int arr[], int num)
{
	int low = 0; //lower border of array
	int high = Size_Of_Arr(arr); //high border of array
	
	//SCORE does't need to this function //NEED TO SEPARATE IN #VISUAL_FOR_USER & #GAME
	int score = NULL;

	while (low <= high) 
	{
		int mid = ((low + high) / 2); //ever time in cycle we have NEW HIGH (every time it closer)

		//cout << "Mid is: " << mid <<  endl; //it need to user //MUST SEPARATE IN #VISUAL_FOR_USER
		
		score++; //MUST SEPARATE IN #VISUAL_FOR_USER
		
		int guess = arr[mid];//operator to check, did we find a num

			//if WIN
			if (guess == num) 
			{
				//cout << "Your score is: " << score << endl;
				return score;
			}
			//OTHER OPERATIONS
			if (guess > num)
			{
				high = mid - 1;
			}
			else 
			{ 
				low = mid + 1;
			}
	}
}

//NUMMER AI
int Num_AI(int arry[])
{
	const int attempt = 10; 
	int biggest = NULL;
	int a = NULL;

	for (int j = 0; j < attempt; j++)
	{
		
		int random = rand() % SIZE;
		int score1 = ABS(arry, random);
		if (score1 > biggest)
		{
			biggest = score1;
			a = biggest;
		}
	}
	return a;
	//cout << "Biggest score is: " << biggest << endl;
}

int main()
{
	srand(time(NULL));
	//create and fill the array
	int array[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = i;
	}

	//MAIN FUNCTION
	cout << Num_AI(array);
}




