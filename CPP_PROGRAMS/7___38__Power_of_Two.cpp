/*
    Power of Two or not
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Value... ";
    cin >> n;

    if (n == 0)
    {
        cout << "No" << endl;
        return 0;
    }

    while (n != 1)
    {

        if (n % 2 == 1)
        {
            cout << "No" << endl;
            return 0;
        }
        n = n / 2;
    }

    cout << "Yes" << endl;
    return 0;
}
