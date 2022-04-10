#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{
//for random marks
 	

//////////////////TASK ONE//////////////////

//create array
const int num_student = 12;
int group[num_student];

//generate random mark for students
for (int i = 0; i < num_student; i++)
{
	group[i] = rand() % 13;
}

//min & max mark
int min_mark = group[0];
int max_mark = group[0];

//cout of students marks
for (int index_student = 0; index_student < num_student; index_student++)
{
	cout << index_student << " mark is: " << group[index_student] << endl;
}

//find min mark
for (int index_student = 0; index_student < num_student; index_student++) 
{
	if (group[index_student] < min_mark) 
	{
		min_mark = group[index_student];
	}
}

//find max mark
for (int index_student = 0; index_student < num_student; index_student++)
{
	if (group[index_student] > max_mark)
	{
		max_mark = group[index_student];
	}
}

//cout of min and max marks
cout << "\n\n";
cout << "Min mark is " << min_mark << endl;
cout << "Max mark is " << max_mark << endl;

//////////////////TASK TWO//////////////////
//number of students whuch have 12 mark
int students_max_mark = 0;

for (int index_student = 0; index_student < num_student; index_student++)
{
	if (group[index_student] == 12)
	{
		students_max_mark++;
	}
}

//cout
cout << "\n\n";
cout << students_max_mark << " student have mark '12'" << endl;
}
