#include <string>
#include <iostream>

using namespace std;

float price; //price of item
float wallet; //how much money give сдшуте ещ нщг
float result; //how much money you will return

int k_ten_kop = 0; //10 копійок
int k_fifty_kop = 0; //50 копійок

int k_one = 0; //1 гривень купюра
int k_two = 0; //2 гривень купюра
int k_five = 0; //5 гривень купюра
int k_ten = 0; //10 гривень купюра
int k_twenty = 0; //20 гривень купюра
int k_fifty = 0; //50 гривень купюра
int k_hundred = 0; //100 гривень купюра
int k_two_hundred = 0; //200 гривень купюра
int k_five_hundred = 0; //500 гривень купюра
int k_thousand = 0; //1000 гривень купюра
int main()
{
	link1:
	cout << "Enter a price of a item" << endl;
	cin >> price;

	cout << "How much money client give you" << endl;
	cin >> wallet;

	if (price > wallet)
	{
		cout << "You enter wrong price or wallet" << endl;
		goto link1;
	}


	result = wallet - price;
	cout << "You must return: " << result << endl;
	cout << "It is:" << endl;


	here1:
	if (result >= 1000)
	{
		result = result - 1000;
		k_thousand++;
		goto here1;
	}
	else if (result >= 500)
	{
		result = result - 500;
		k_five_hundred++;
		goto here1;
	}
	else if (result >= 200)
	{
		result = result - 200;
		k_two_hundred++;
		goto here1;
	}
	else if (result >= 100)
	{
		result = result - 100;
		k_hundred++;
		goto here1;
	}
	else if (result >= 50)
	{
		result = result - 50;
		k_fifty++;
		goto here1;
	}
	else if (result >= 20)
	{
		result = result - 20;
		k_twenty++;
		goto here1;
	}
	else if (result >= 10)
	{
		result = result - 10;
		k_ten++;
		goto here1;
	}
	else if (result >= 5)
	{
		result = result - 5;
		k_five++;
		goto here1;
	}
	else if (result >= 2)
	{
		result = result - 2;
		k_two++;
		goto here1;
	}
	else if (result >= 1)
	{
		result = result - 1;
		k_one++;
		goto here1;
	}
	else if (result >= 0.5)
	{
		result = result - 0.5;
		k_fifty_kop++;
		goto here1;
	}
	else if (result >= 0.1)
	{
		result = result - 0.1;
		k_ten_kop++;
		goto here1;
	}

	cout << "One thousand: " << k_thousand << endl;
	cout << "Five hundred: " << k_five_hundred << endl;
	cout << "Two hundred: " << k_two_hundred << endl;
	cout << "One hundred: " << k_hundred << endl;
	cout << "Fifty: " << k_fifty << endl;
	cout << "Twenty: " << k_twenty << endl;
	cout << "Ten: " << k_ten << endl;
	cout << "Five: " << k_five << endl;
	cout << "Two: " << k_two << endl;
	cout << "One: " << k_one << endl;
	cout << "Fifty kopiyok: " << k_fifty_kop << endl;
	cout << "Ten kopiyok: " << k_ten_kop << endl;
	cout << "And least: " << result << endl;

}