/*
    Triplet Sum
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
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    pairSum(arr, 5, 12);

    return 0;
}
