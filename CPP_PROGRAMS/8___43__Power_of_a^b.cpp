/*
    a^b
*/
#include <iostream>
using namespace std;

int power()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << ans << endl;
    return 0;
}

int main()
{
    power();
    return 0;
}
