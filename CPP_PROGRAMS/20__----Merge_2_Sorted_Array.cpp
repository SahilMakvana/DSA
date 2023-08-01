/*
    Reverse an Array
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> MergeArray(int arr1[], int size1, int arr2[], int size2)
{

    vector<int> v;
    int i = 0, j = 0;
    for (; i < size1, j < size2;)
    {
        if (arr1[i] < arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
        }
        else
        {
            v.push_back(arr2[j]);
            j++;
        }
    }

    if (i <= j)
    {
        for (; i < size1; i++)
        {
            v.push_back(arr1[i]);
        }
    }
    else
    {
        for (; j < size2; j++)
        {
            v.push_back(arr2[j]);
        }
    }

    return v;
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    vector<int> v = MergeArray(arr1, 5, arr2, 3);

    for (int i = 0; i < 8; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
