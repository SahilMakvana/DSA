/*
    Binary Search
*/
#include <iostream>
#include <limits.h>
using namespace std;

int sortArr(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;
        mid = start + ((end - start) / 2);
    }

    return -1;
}

int main()
{
    int arr[5] = {3, 5, 9, 13, 27};

    int index = sortArr(arr, 5, 5);
    cout << index << endl;

    return 0;
}
