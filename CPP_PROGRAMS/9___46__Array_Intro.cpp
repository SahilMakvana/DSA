/*
    Array Intro
*/
#include <iostream>
using namespace std;

int main()
{
    // Array with Garbage Value
    int arr[15];
    for (int i = 0; i < 15; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Array with 0 values in all location
    int arr1[15] = {};
    for (int i = 0; i < 15; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Array with only first 2 values followed by 0
    int arr2[15] = {7, 15};
    for (int i = 0; i < 15; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
