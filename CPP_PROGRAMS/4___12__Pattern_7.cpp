/*
    Pattern
    1
    2  1
    3  2  1
    4  3  2  1
    5  4  3  2  1
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
        for (j = 0; j <= i; j++)
        {
            cout << i - j + 1
                 << " ";
        }
        cout << endl;
    }

    return 0;
}
