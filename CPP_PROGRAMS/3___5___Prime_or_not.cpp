// To Find that given number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int P;
    cout << "Enter the value... ";
    cin >> P;

    int i = 2;
    bool is_prime = true;

    if (P == 0 || P == 1)
    {
        is_prime = false;
    }

    while (i <= P / 2)
    {
        if (P % i == 0)
        {
            is_prime = false;
            break;
        }
        i++;
    }

    if (is_prime)
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Number is not Prime";
    }

    return 0;
}
