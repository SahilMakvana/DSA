/*
    Find Intersaction of two different array
*/
#include <iostream>
#include <limits.h>
using namespace std;

int findDuplicateSol1(int arr1[], int size1, int arr2[], int size2)
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
    cout << endl;
    return 0;
}

int findDuplicateSol2(int arr1[], int size1, int arr2[], int size2)
{
    int i = 0, j = 0;
    while ((i < size1) && (j < size2))
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout << endl;
    return 0;
}

int main()
{
    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 3};

    findDuplicateSol2(arr1, 6, arr2, 4);
    findDuplicateSol1(arr1, 6, arr2, 4);

    return 0;
}
