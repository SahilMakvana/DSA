/*
    Pass By Value
*/
#include <iostream>
using namespace std;

int dummy(int n)
{
    n++;
    cout << "dummy n is: " << n << endl;
    return 0;
}

int main()
{
    int n;
    cin >> n;

    // Passing by value
    dummy(n);

    cout << "main n is: " << n << endl;
}
