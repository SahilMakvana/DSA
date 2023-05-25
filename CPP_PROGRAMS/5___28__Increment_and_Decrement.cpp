/*
    Increment
    i = i+1     -> i+=1, i++, ++i

    Decrement
    i = i-1     -> i-=1, i--, --i
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int j = 5;
    int k = 5;
    int l = 5;

    cout << i++ << endl;
    cout << ++j << endl;
    cout << k-- << endl;
    cout << --l << endl;

    int a, b = 1;
    a = 10;
    if (a)
    {
        cout << b << endl;
    }
    else
    {
        cout << ++b << endl;
    }

    return 0;
}