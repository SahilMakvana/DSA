/*
    Reverse an Array
*/
#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void reverseArrFromIndex_I(int arr[], int size, int I)
{
    int s = I + 1;
    int e = size - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[6] = {11, 7, 3, 12, 4, 10};
    // reverseArr(arr, 6);
    reverseArrFromIndex_I(arr, 6, 3);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
