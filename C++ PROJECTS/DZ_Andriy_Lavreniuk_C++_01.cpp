#include <iostream>
#include <string>

#include <cstdlib> // Ці біліотеки потрібні для генерування рандомних чисел
#include <ctime>

using namespace std;

string Name;
string SurName;
string LastName;
string City;
string Hobby;
int Year;
int Age;
bool YrN;

string language;
int dice;

int main()
{
	setlocale(LC_ALL, "Russian"); // вивід укр. і рус. симолів

	//завдання 1
	cout << "\t\t\t        ЗАВДАННЯ 1     " << endl << endl;
	cout << "\t\t\t     ГЕНЕРАТОР РЕЗЮМЕ     " << endl << endl;
	cout << "\t   В данному завданнi є доповнення, тому будьте уважнi   " << endl << endl;

	cout << "\t\t\t     Enter your name:        " << endl << "\t\t\t\t";
	getline(cin, Name);
	cout << endl;

	cout << "\t\t\t     Enter your sur name:        " << endl << "\t\t\t\t";
	getline(cin, SurName);
	cout << endl;

	cout << "\t\t\t     Enter your last name:        " << endl << "\t\t\t\t";
	getline(cin, LastName);
	cout << endl;

	cout << "\t\t\t     Enter your city:        " << endl << "\t\t\t\t";
	getline(cin, City);
	cout << endl;

	cout << "\t\t\t     Enter your Hobby:        " << endl << "\t\t\t\t";
	getline(cin, Hobby);
	cout << endl;

	cout << "\t\t\t     Enter the year you were born:        " << endl << "\t\t\t\t";
	cin >> Year;
	Age = 2022 - Year;
	cout << "\t\t\t     Did you already have a birthday in this year?        " << endl;
	cout << "\t\t\t     Enter 1 - if yes, and 0 - if no?        " << endl;
	cin >> YrN;
	if (YrN == 0)
	{
		Age = Age - 1;
	}

	cout << endl;
	cout << "\t\t\t _____________________" << endl;
	cout << "\t\t\t|       Resume        |" << endl;
	cout << "\t\t\t|---------------------|" << endl;
	cout << "\t\t\t|Name: " << Name << endl;
	cout << "\t\t\t|_____________________|" << endl;
	cout << "\t\t\t|SurName: " << SurName << endl;
	cout << "\t\t\t|_____________________|" << endl;
	cout << "\t\t\t|LastName: " << LastName << endl;
	cout << "\t\t\t|_____________________|" << endl;
	cout << "\t\t\t|City: " << City << endl;
	cout << "\t\t\t|_____________________|" << endl;
	cout << "\t\t\t|Hobby: " << Hobby << endl;
	cout << "\t\t\t|_____________________|" << endl;
	cout << "\t\t\t|Age: " << Age << endl;
	cout << "\t\t\t|_____________________|" << endl;




	//завдання 2
	cout << "\t\t\t        ЗАВДАННЯ 2     " << endl << endl;

	srand(time(0));
	dice = rand() % 7;
	switch (dice)
	{
	case 1:
		language = "C++";
		break;
	case 2:
		language = "C";
		break;
	case 3:
		language = "Java";
		break;
	case 4:
		language = "Java Script";
		break;
	case 5:
		language = "Python";
		break;
	case 6:
		language = "PHP";
		break;
	}


	cout << "\t\t\t I \t\t\t\t   I" << endl;
	cout << "\t\t\t\t Love \t\t  Love" << endl;
	cout << "\t\t\t\t\tYou You" << endl;
	cout << "\t\t\t\t\t  "<< language << endl << endl << endl;




	//завдання 3
	cout << "\t\t\t        ЗАВДАННЯ 3     " << endl << endl;
	cout << "\t\t\t _____________________" << endl;
	cout << "\t\t\t|   Продам цуценят.   |" << endl;
	cout << "\t\t\t|  Порода: Ротвейлер. |" << endl;
	cout << "\t\t\t|---------------------|" << endl;
	cout << "\t\t\t|        .....        |" << endl;
	cout << "\t\t\t|_____________________|" << endl;
	cout << "\t\t\t|   Тел.:  222-22-22  |" << endl;
	cout << "\t\t\t|_____________________|" << endl;
	cout << "\t\t\t|Тел| |Тел| |Тел| |Тел|" << endl;
	cout << "\t\t\t|222| |222| |222| |222|" << endl;
	cout << "\t\t\t|22-| |22-| |22-| |22-|" << endl;
	cout << "\t\t\t|22-| |22-| |22-| |22-|" << endl;
	cout << "\t\t\t|___| |___| |___| |___|" << endl;
}