/*
    Array Swap Alternate
*/
#include <iostream>
using namespace std;

int alternate(int arr[], int size)
{

    // swap alternate an array
    int start = 0;
    while (start < size - 1)
    {
        swap(arr[start], arr[start + 1]);
        start += 2;
    }

    return 0;
}

int main()
{
    int size;
    cout << "Enter the size of an array: " << endl;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    alternate(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
