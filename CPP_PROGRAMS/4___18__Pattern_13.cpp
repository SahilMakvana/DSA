/*
    Pattern
    E
    D  E
    C  D  E
    B  C  D  E
    A  B  C  D  E

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value... ";
    cin >> n;

    int i, j;
    // char ch = 'A';
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            char ch = 'A' + n - i + j - 1;
            cout << ch
                 << " ";
            ch++;
        }

        cout << endl;
    }

    return 0;
}
