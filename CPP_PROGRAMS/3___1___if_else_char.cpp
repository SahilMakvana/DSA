// To find the given value is capital, small or numeric
#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter the value... ";
    cin >> a;

    if (a >= 48 && a <= 57)
    {
        cout << "A is Numeric";
    }
    else if (a >= 65 && a <= 90)
    {
        cout << "A is Capital";
    }
    else
    {
        cout << "A is Small";
    }

    return 0;
}
