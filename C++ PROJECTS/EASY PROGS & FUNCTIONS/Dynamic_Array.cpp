#include <iostream>
using namespace std;


int main()
{
    //values
    int size;
    int random;

    //enter array size 
    cout << "Enter array size" << endl;
    cin >> size;
    int* arr = new int[size];

    //enter random size
    cout << "Enter random size" << endl;
    cin >> random;

  
    //random values to arr
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % random;
    }

    //cout of info
    for (int i = 0; i < size; i++)
    {
        cout <<  arr[i] << "\t";
        cout <<  arr + i << endl;
    }
}