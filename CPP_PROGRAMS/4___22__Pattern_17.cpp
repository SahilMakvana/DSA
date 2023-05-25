/*
    Pattern
    1  2  3  4  5
       2  3  4  5
          3  4  5
             4  5
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
        int k = 1;
        for (j; j < i; j++)
        {

            cout << " "
                 << " ";
        }
        for (j; j < n; j++)
        {

            cout << i + k
                 << " ";
            k++;
        }

        cout << endl;
    }

    return 0;
}
