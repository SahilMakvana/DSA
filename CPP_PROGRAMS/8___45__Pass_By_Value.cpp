/*
    nCr
*/
#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;

    if (n == 0)
    {
        return 1;
    }

    for (int i = n; i > 0; i--)
    {
        ans = ans * i;
    }
    return ans;
}

int nCr()
{
    int n, r;
    cin >> n >> r;
    int ans = factorial(n) / (factorial(r) * factorial(n - r));
    cout << ans << endl;
    return 0;
}

int main()
{
    nCr();
    return 0;
}
