/*
    Subtract The Product and Sum of Digits of an Integer
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Value... ";
    cin >> n;
    int sum = 0;
    int product = 1;
    // int d = 10;

    for (; n != 0;)
    {
        int mod = n % 10;
        n = n / 10;
        sum = sum + mod;
        product = product * mod;
        cout << mod << " " << sum << " " << product << endl;
    }

    cout << product - sum << endl;

    return 0;
}
