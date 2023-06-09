/*
    Sort the array of 0's ans 1's
*/
#include <iostream>
#include <limits.h>
using namespace std;

int sortArr(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        while (arr[i] == 0)
        {
            i++;
        }
        while (arr[j] == 1)
        {
            j--;
        }
        if (arr[i] == 1 && arr[j] == 0 && i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

int main()
{
    int arr[6] = {0, 1, 0, 1, 1, 0};

    sortArr(arr, 6);

    return 0;
}
