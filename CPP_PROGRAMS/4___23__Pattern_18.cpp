/*
    Pattern
                *
             *  *  *
          *  *  *  *  *
       *  *  *  *  *  *  *
    *  *  *  *  *  *  *  *  *

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
        for (j; j < n - i; j++)
        {

            cout << " "
                 << " ";
        }
        for (j; j <= n + i; j++)
        {

            cout << "*"
                 << " ";
        }

        cout << endl;
    }

    return 0;
}
