#include <iostream>
using namespace std;


int main()
{
	//task 1
	cout << "\t\t1) TASK WITH INCHES AND SM" << endl;

	double inch;
	const double TEMP = 2.54;
	double sizeInSM;

	cout << "\t\tEnter diagonal in inches:" << endl <<"\t\t";
	cin >> inch;
	sizeInSM = inch * TEMP;
	cout << "\t\tYour size is: " << sizeInSM << "sm" << endl << endl << endl;



	//task 2
	cout << "\t\t2) TASK WITH MINUTES PER DAYS" << endl;
	const int HOURSPERDAY = 24;
	const int MINUTESPERHOUR = 60;
	const int SECONDSPERMINUTE = 60;

	cout << "\t\tEnter days:" << endl << "\t\t";
	int nDay;
	cin >> nDay;

	cout << "\t\tDays: " << nDay << endl;
	cout << "\t\tHours: " << nDay * HOURSPERDAY << endl;
	cout << "\t\tMinutes: " << nDay * HOURSPERDAY * MINUTESPERHOUR << endl;
	cout << "\t\tSeconds: " << nDay * HOURSPERDAY * MINUTESPERHOUR * SECONDSPERMINUTE << endl << endl << endl;



	//task 3
	cout << "\t\t3) TASK WITH HAMSTER" << endl;

	double gramsPerDay;
	double totalGrams;
	double kiloGrams;
	int days;

	cout << "\t\tEnter, for how many days, you calculate price" << endl << "\t\t";
	cin >> days;

	cout << "\t\tEnter how much eat your hamsterper per day (in grams)" << endl << "\t\t";
	cin >> gramsPerDay;

	totalGrams = days * gramsPerDay;
	kiloGrams = totalGrams / 1000;

	cout << "\t\tYour need: " << kiloGrams << "kg for" << days <<" days" << endl << endl << endl;



	//task 4
	cout << "\t\t4) TASK WITH PRODUCTS AND PRICE" << endl;
	const float COSTMILK = 42.5; 
	const float COSTJUICE = 32.2;
	const float COSTBREAD = 28.3;
	const float COSTCHIPS = 36.5;
	int nMilk, nJuice, nBread, nChips;

	cout << "\t\tEnter how much milk you bought" << endl << "\t\t";
	cin >> nMilk;
	cout << "\t\tEnter how much juice you bought" << endl << "\t\t";
	cin >> nJuice;
	cout << "\t\tEnter how many breads you bought" << endl << "\t\t";
	cin >>  nBread;
	cout << "\t\tEnter how much chips you bought" << endl << "\t\t";
	cin >>  nChips;

	float myPrice;
	myPrice = COSTMILK * nMilk + COSTJUICE * nJuice + COSTBREAD * nBread + COSTCHIPS * nChips;
	cout << "\t\t MyPrice is " << myPrice << " UAH " << endl << endl;
}