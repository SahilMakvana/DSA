/*
    Find duplicate in an array
*/
#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    int size;
    cout << "Enter the size of an array: " << endl;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int duplicate = findDuplicate(arr, size);
    cout << duplicate << endl;
    return 0;
}
