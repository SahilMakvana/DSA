/*
    Pair Sum
*/
#include <iostream>
#include <limits.h>
using namespace std;

int pairSum(int arr[], int size, int s)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    pairSum(arr, 5, 5);

    return 0;
}
