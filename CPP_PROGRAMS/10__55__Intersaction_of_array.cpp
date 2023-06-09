/*
    Find Intersaction of two different array
*/
#include <iostream>
#include <limits.h>
using namespace std;

int findDuplicate(int arr1[], int size1, int arr2[], int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }

    return 0;
}

int main()
{
    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 3};

    findDuplicate(arr1, 6, arr2, 4);

    return 0;
}
