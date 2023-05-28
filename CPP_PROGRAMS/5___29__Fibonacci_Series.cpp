/*
    Fibonacci Series
    0, 1, 1, 2, 3, 5, 8, 13, 21, ...
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int FS;
    int n;

    cout << "Enter the value..." << endl;
    cin >> n;

    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (n == 2)
    {
        cout << 0 << " " << 1 << endl;
        return 0;
    }
    cout << 0 << " " << 1;
    for (int i = 2; i < n; i++)
    {
        FS = a + b;
        a = b;
        b = FS;
        cout << " " << FS;
    }

    return 0;
}