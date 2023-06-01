/*
    Reverse the array
*/
#include <iostream>
using namespace std;

int reverse(int arr[], int size)
{
    cout << "Before reverse: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse an array
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "After reverse: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    reverse(arr, 10);

    return 0;
}
