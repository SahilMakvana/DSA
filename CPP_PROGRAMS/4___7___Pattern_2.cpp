/*
    Pattern
    1  2  3  4  5
    1  2  3  4  5
    1  2  3  4  5
    1  2  3  4  5
    1  2  3  4  5
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
        for (j = 0; j < n; j++)
        {
            cout << j + 1
                 << " ";
        }
        cout << endl;
    }

    return 0;
}
