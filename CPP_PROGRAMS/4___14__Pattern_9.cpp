/*
    Pattern
    A  B  C  D  E
    A  B  C  D  E
    A  B  C  D  E
    A  B  C  D  E
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
        for (j = 0; j < n; j++)
        {
            char ch = 'A' + j;
            cout << ch
                 << " ";
        }
        // ch++;
        cout << endl;
    }

    return 0;
}
