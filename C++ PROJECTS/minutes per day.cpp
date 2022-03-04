#include <iostream>
#include <string>



using namespace std;



int main()
{
const int HOURSPERDAY = 24;
const int MINUTESPERHOUR = 60;
const int SECONDSPERMINUTE = 60;



int nDay;
cin >> nDay;

cout << "Days: " << nDay <<endl;
cout << "Hours: " << nDay * HOURSPERDAY<< endl;
cout << "Minutes: " << nDay * HOURSPERDAY * MINUTESPERHOUR<< endl;
cout << "Seconds: " << nDay * HOURSPERDAY * MINUTESPERHOUR * SECONDSPERMINUTE<< endl;
}