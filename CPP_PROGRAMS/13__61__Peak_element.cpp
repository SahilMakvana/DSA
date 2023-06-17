/*
    Peak element in an array
*/
#include <iostream>
#include <limits.h>
using namespace std;

int peakElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = 0;

    while (start < end)
    {
        mid = start + ((end - start) / 2);
        if (arr[mid - 1] <= arr[mid] && arr[mid + 1] <= arr[mid])
        {
            return arr[mid];
        }
        else if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    /*
        while (start < end)
        {
            mid = start + ((end - start) / 2);
            if (arr[mid] < arr[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return arr[start];
    */

    return -1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 4, 3, 2, 1};

    int peak = peakElement(arr, 10);
    cout << peak << endl;

    return 0;
}
