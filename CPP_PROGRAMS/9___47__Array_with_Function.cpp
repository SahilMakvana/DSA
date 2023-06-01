/*
    Array with Function
*/
#include <iostream>
using namespace std;

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < 15; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    // Array with Garbage Value
    int arr[15];
    n = sizeof(arr) / sizeof(int);
    PrintArray(arr, n);

    // Array with 0 values in all location
    int arr1[15] = {};
    n = sizeof(arr1) / sizeof(int);
    PrintArray(arr1, n);

    // Array with only first 2 values followed by 0
    int arr2[15] = {7, 15};
    n = sizeof(arr2) / sizeof(int);
    PrintArray(arr2, n);

    return 0;
}
