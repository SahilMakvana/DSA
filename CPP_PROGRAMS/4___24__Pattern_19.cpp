/*
    Pattern
                1
             1  2  1
          1  2  3  2  1
       1  2  3  4  3  2  1
    1  2  3  4  5  4  3  2  1

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value... ";
    cin >> n;

    int i, j;
    for (i = 0; i < n; i++)
    {
        j = 0;
        int k = 0;
        for (j; j < n - i; j++)
        {

            cout << " "
                 << " ";
        }
        for (j; j <= n; j++)
        {
            k = k + 1;
            cout << k
                 << " ";
        }
        for (j; j <= n + i; j++)
        {
            k = k - 1;
            cout << k
                 << " ";
        }

        cout << endl;
    }

    return 0;
}