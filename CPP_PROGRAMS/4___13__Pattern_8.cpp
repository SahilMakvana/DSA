/*
    Pattern
    A  A  A  A  A
    B  B  B  B  B
    C  C  C  C  C
    D  D  D  D  D
    E  E  E  E  E
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
        for (j = 0; j < n; j++)
        {
            char ch = 'A' + i;
            cout << ch
                 << " ";
        }
        // ch++;
        cout << endl;
    }

    return 0;
}
