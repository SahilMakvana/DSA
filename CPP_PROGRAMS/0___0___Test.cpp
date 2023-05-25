/*
    Test
*/
#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int arr[] = {5, 4, -1, 7, 8};

    int n = sizeof(arr) / sizeof(int);
    int sum = 0;
    int ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int s1 = 0;
    //     for (int j = i; j < n; j++)
    //     {

    //         s1 = s1 + arr[j];
    //         if (s1 > sum)
    //         {
    //             sum = s1;
    //         }
    //     }
    // }

    // cout << n << endl;

    for (int i = 0; i < n; i++)
    {
        // int maxi = arr[i];
        sum = sum + arr[i];
        if (sum > ans)
        {
            ans = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
        cout << ans << endl;
    }

    cout << ans << endl;

    return 0;
}
