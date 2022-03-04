#include <iostream> 
using namespace std;

int main()
{
	//TASK 1
	int a1;
	cout << "1. Monday" << endl;
	cout << "2. Tuesday" << endl;
	cout << "3. Wednesday" << endl;
	cout << "4. Thursday" << endl;
	cout << "5. Friday" << endl;
	cout << "6. Saturday" << endl;
	cout << "7. Sunday" << endl;
	link: //if user enter wrong number 
	cout << "Enter a number of day:" << endl;
	cin >> a1;

	switch (a1)
	{
	case 1:
		cout << "It's a work day." << endl;
		break;

	case 2:
		cout << "It's a work day." << endl;
		break;

	case 3:
		cout << "It's work a day." << endl;
		break;

	case 4:
		cout << "It's a work day." << endl;
		break;

	case 5:
		cout << "It's a work day." << endl;
		break;

	case 6:
		cout << "It's a weekend." << endl;
		break;

	case 7:

		cout << "It's a weekend." << endl;
		break;

	default:
		cout << "ERROR" << endl;
		cout << "Repeat please:" << endl;
			goto link; // go to start
	}


	//TASK 2
	int a2 = 0;

	cout << "1. January" << endl;
	cout << "2. February" << endl;
	cout << "3. March" << endl;
	cout << "4. April" << endl;
	cout << "5. May" << endl;
	cout << "6. June" << endl;
	cout << "7. July" << endl;
	cout << "8. August" << endl;
	cout << "9. September" << endl;
	cout << "10. October" << endl;
	cout << "11. November" << endl;
	cout << "12. December" << endl;
	link1: //if user enter wrong number 
	cout << "Enter a number of mounth:" << endl;
	cin >> a2;

	switch (a2)
	{
	case 1:
		cout << "It's winter." << endl;
		break;

	case 2:
		cout << "It's winter." << endl;
		break;

	case 3:
		cout << "It's spring." << endl;
		break;

	case 4:
		cout << "It's spring." << endl;
		break;

	case 5:
		cout << "It's spring." << endl;
		break;

	case 6:
		cout << "It's summer." << endl;
		break;

	case 7:

		cout << "It's summer." << endl;
		break;

	case 8:

		cout << "It's summer." << endl;
		break;

	case 9:

		cout << "It's autumn." << endl;
		break;

	case 10:

		cout << "It's autumn." << endl;
		break;

	case 11:

		cout << "It's autumn." << endl;
		break;

	case 12:

		cout << "It's winter." << endl;
		break;

	default:
		cout << "ERROR" << endl;
		cout << "Repeat please:" << endl;
		goto link1; // go to start
	}


	//TASK 3
	int x = 0;
	int y = 0;
	char sum;

	cout << "Enter aт expression:" << endl;
	cin >> x;
	cin >> sum;
	cin >> y;

	switch (sum)
	{
	case '*':
		cout << "Result is: " << x * y << endl;
		break;
	

	case '/':
		cout << "Result is: " << x / y << endl;
		break;
	

	case '+':
		cout << "Result is: " << x + y << endl;
		break;
	

	case '-':
		cout << "Result is: " << x - y << endl;
		break;
	}

}