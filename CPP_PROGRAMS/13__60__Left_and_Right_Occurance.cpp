/*
    Binary Search
*/
#include <iostream>
#include <limits.h>
using namespace std;

int leftOccurance(int arr[], int size, int key)
{
    int start = 0;
    int ans = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }

    return ans;
}

int rightOccurance(int arr[], int size, int key)
{
    int start = 0;
    int ans = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }

    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 3, 3};

    int leftIndex = leftOccurance(arr, 5, 3);
    int rightIndex = rightOccurance(arr, 5, 3);
    cout << leftIndex << " " << rightIndex << endl;

    return 0;
}
