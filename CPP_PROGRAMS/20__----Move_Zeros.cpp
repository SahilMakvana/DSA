/*
    Reverse an Array
*/
#include <iostream>
#include <vector>
using namespace std;

void moveZeros(int arr[], int size)
{
    int i = 0, j = 0;
    while (i < size)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    while (j < size)
    {
        arr[j] = 0;
        j++;
    }
}

int main()
{
    int arr[5] = {0, 1, 0, 3, 12};
    moveZeros(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
