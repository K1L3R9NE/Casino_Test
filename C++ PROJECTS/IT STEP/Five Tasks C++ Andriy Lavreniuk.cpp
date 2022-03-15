#include <iostream>
#include <cstdlib> // Needed to use random numbers
#include <ctime> 
using namespace std;

//values for task 1
double price0;
double sale0;

//values for task 2
double side1;
double side2;

//values for task 3
double price1;
double sale1;

//values for task 4
int mult1;
int mult2;
int prod;
int user_prod;
int max1;

//values for task 5
float height;
float weight;
double index;

int main()
{
	/////////////////////TASK 1/////////////////////

	cout << "\t\tTASK ONE" << endl << endl;

	//reserv link
	link_1:

	//input
	cout << "\t\tEnter a price:" << endl;
	cout << "\t\t";
	cin >> price0;

	//sale
	if (price0 < 0)
	{
		cout << "\t\tYou enter wrong price!!!" << endl;
		goto link_1;
	}
	else if (price0 > 0 && price0 < 500)
	{
	sale0 = 1.0;
	cout << "\t\tYou don't have a discount" << endl;
	}
	else if (price0 >= 500 && price0 <= 1000)
	{
	sale0 = 0.97;
	}
	else if (price0 >= 1000)
	{
	sale0 = 0.95;
	}

	//cout
	cout << "\t\tPrice is: " << price0 << " $" << endl;
	cout << "\t\tSale is: " << ((1.0- sale0 ) * 100) << " %" << endl;
	cout << "\t\tSale is: " << (1.0 - sale0) * price0 << " $" << endl;
	cout << "\t\tTotal price is " << sale0 * price0 << " $" << endl << endl << endl;



	/////////////////////TASK 2/////////////////////

	cout << "\t\tTASK TWO" << endl << endl;

	//input
	cout << "\t\tEnter a first side:" << endl;
	cout << "\t\t";
	cin >> side1;

	cout << "\t\tEnter a second side:" << endl;
	cout << "\t\t";
	cin >> side2;

	//check & cout 
	if (side1 == side2)
	{
		cout << "\t\tYES, It is a square!" << endl << endl << endl;
	}
	else
	{
		cout << "\t\tNO, It is not a square!" << endl << endl << endl;
	}



	/////////////////////TASK 3/////////////////////

	cout << "\t\tTASK THREE" << endl << endl;

	//reserv link
	link_3:

	//input
	cout << "\t\tEnter a price" << endl;
	cout << "\t\t";
	cin >> price1;

	//check & cout
	if (price1 <= 0)
	{
		cout << "\t\tYou enter a wrong price!!!" << endl;
		goto link_3;
	}
	else if (price1 > 0 && price1 < 1000)
	{
		sale1 = 1.0;
		cout << "\t\tYou don't have a discount" << endl;
	}
	else if (price1 >= 1000)
	{
		sale1 = 0.75;
	}

	cout << "\t\tPrice is: " << price1 << " $" << endl;
	cout << "\t\tSale is: " << (1.0 - sale1) * 100 << " %" << endl;
	cout << "\t\tSale is: " << (1.0 - sale1) * price1 << " $" << endl;
	cout << "\t\tTotal price is " << sale1 * price1 << " $" << endl << endl << endl;



	/////////////////////TASK 4/////////////////////

	cout << "\t\tTASK FOUR" << endl << endl;

	//input
	cout << "\t\tEnter a max size of numbers:" << endl;
	cout << "\t\t";
	cin >> max1;

	//cout & math
	mult1 = rand() % max1;
	cout << "\t\tFirst multiplier is: " << mult1 << endl;

	mult2 = rand() % max1;
	cout << "\t\tFirst multiplier is: " << mult2 << endl;

	prod = mult1 * mult2;

	//reserv
	srand(time(0));
	link4:

	//input 
	cout << "\t\tEnter a product of: " << mult1 << " and "<< mult2 << endl;
	cout << "\t\t";
	cin >> user_prod;

	//check & cout 
	if (user_prod == prod)
	{
		cout << "\t\tYES, you are right!!" << endl << endl << endl;
	}
	else
	{
		cout << "\t\tNO, you are wrong!!" << endl;
		cout << "\t\tRight answer is: " << prod << endl;
		cout << "\t\tTry one more time" << endl;
		goto link4;
	}



	/////////////////////TASK 5/////////////////////

	cout << "\t\tTASK FIVE" << endl << endl;

	//input
	cout << "\t\tEnter your height" << endl;
	cout << "\t\t";
	cin >> height;

	cout << "\t\tEnter your weight" << endl;
	cout << "\t\t";
	cin >> weight;

	//cout 
	index = weight / (height * height);
	cout << "\t\tYour index is: " << index << endl;

	if (index <= 18.5)
	{
		cout << "\t\tYour weight is too little" << endl;
	}
	else if (index >= 18.5 && index <= 24.9)
	{
		cout << "\t\tYour weight is normal" << endl;
	}
	else if (index >= 25 && index <= 29.9)
	{
		cout << "\t\tYour weight is little big" << endl;
	}
	else if (index >= 30)
	{
		cout << "\t\tYour weight is too big" << endl;
	}
}
