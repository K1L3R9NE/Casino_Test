#include <iostream> //basic
#include <string> //strings
#include <clocale> //Обязательно для функции setlocale()
#include <cstdlib> // rand, srand
#include <ctime> //time
#include <stdio.h> //math
#include <stdlib.h> //math
#include <math.h>
#include <time.h>
#include <cstring>
using namespace std; //std:

void function(int n)
{
    double npc = 0;
    double npt = 0;
    for (int i = 0; i < n; i++)
    {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        double distance = (x * x) + (y * y);
        if (distance <= 1)
        {
            npc++;
        }
        npt++;
        double result = 4 * npc / npt;
        cout << "Result is: " << result << " Count is: " << (i) << " Left: " << (n - i) << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    while (true)
    {
        cout << "Enter: " << endl;
        int n = 0; cin >> n;
        function(n);
    }
}