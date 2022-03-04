#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;



void Fun(int val)
{
	switch (val)
	{
	case 0:
		cout << "0";
		break;

	case 1:
		cout << "1";
		break;
	case 2:
		cout << "2";
		break;
	case 3:
		cout << "3";
		break;
	case 4:
		cout << "4";
		break;
	case 5:
		cout << "5";
		break;
	case 6:
		cout << "6";
		break;
	case 7:
		cout << "7";
		break;
	case 8:
		cout << "8";
		break;
	case 9:
		cout << "9";
		break;
	case 10:
		cout << "0";
		break;
	case 11:
		cout << "q";
		break;
	case 12:
		cout << "w";
		break;
	case 13:
		cout << "e";
		break;
	case 14:
		cout << "r";
		break;
	case 15:
		cout << "t";
		break;
	case 16:
		cout << "y";
		break;
	case 17:
		cout << "u";
		break;
	case 18:
		cout << "i";
		break;
	case 19:
		cout << "o";
		break;
	case 20:
		cout << "p";
		break;
	case 21:
		cout << "a";
		break;
	case 22:
		cout << "s";
		break;
	case 23:
		cout << "d";
		break;
	case 24:
		cout << "f";
		break;
	case 25:
		cout << "g";
		break;
	case 26:
		cout << "h";
		break;
	case 27:
		cout << "j";
		break;
	case 28:
		cout << "k";
		break;
	case 29:
		cout << "l";
		break;
	case 30:
		cout << "z";
		break;
	case 31:
		cout << "x";
		break;
	case 32:
		cout << "c";
		break;
	case 33:
		cout << "v";
		break;
	case 34:
		cout << "b";
		break;
	case 35:
		cout << "n";
		break;
	case 36:
		cout << "m";
		break;
	case 37:
		cout << "!";
		break;
	case 38:
		cout << "@";
		break;
	case 39:
		cout << "#";
		break;
	case 40:
		cout << "$";
		break;
	case 41:
		cout << "%";
		break;
	case 42:
		cout << "^";
		break;
	case 43:
		cout << "&";
		break;
	case 44:
		cout << "*";
		break;
	case 45:
		cout << "(";
		break;
	case 46:
		cout << ")";
		break;
	case 47:
		cout << "-";
		break;
	case 48:
		cout << "_";
		break;
	case 49:
		cout << "=";
		break;
	case 50:
		cout << "+";
		break;
	case 51:
		cout << "`";
		break;
	case 52:
		cout << "~";
		break;
	case 53:
		cout << ",";
		break;
	case 54:
		cout << "<";
		break;
	case 55:
		cout << ".";
		break;
	case 56:
		cout << ">";
		break;
	case 57:
		cout << "/";
		break;
	case 58:
		cout << "?";
		break;
	case 59:
		cout << "\\";
		break;
	case 60:
		cout << "|";
		break;
	case 61:
		cout << "\'";
		break;
	case 62:
		cout << "\"";
		break;
	case 63:
		cout << "]";
		break;
	case 64:
		cout << "}";
		break;
	case 65:
		cout << "[";
		break;
	case 66:
		cout << "{";
		break;
	case 67:
		cout << ";";
		break;
	case 68:
		cout << ":";
		break;
	default:
		cout << val << endl;
	}
}

int main()
{
	link1:
	srand(time(0));
	int i1 = 0;
	int rande = 0;
	


	cout << "Enter how much number you want to generate" << endl;
	
	float size = 0;  cin >> size;

	if (size == 666)
	{
		size = INFINITY;
	}

	while (i1 < size)
	{
		i1++;

		rande = rand() % 69;
		
		Fun(rande);
	}
	goto link1;
}
