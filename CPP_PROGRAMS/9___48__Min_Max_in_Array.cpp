/*
    Minimum & Maximum in an array
*/
#include <iostream>
#include <limits.h>
using namespace std;

int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int min = getMin(arr, size);
    int max = getMax(arr, size);

    cout << "Minimum value is: " << min << endl;
    cout << "Maximum value is: " << max << endl;

    return 0;
}
