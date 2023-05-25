/*
    Pattern
    1  1  1  1  1
       2  2  2  2
          3  3  3
             4  4
                5

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
        for (j; j < i; j++)
        {

            cout << " "
                 << " ";
        }
        for (j; j < n; j++)
        {

            cout << i + 1
                 << " ";
        }

        cout << endl;
    }

    return 0;
}
