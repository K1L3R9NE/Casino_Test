#include <iostream>
using namespace std;

int strLength(char*str)
{
    int counter = 0;
    while (str[counter] != '\0')
    {
        counter++;
    } 
    return counter;
}


int main()
{
    char str[]="Hello";

	cout << strLength(str) << endl;
}

