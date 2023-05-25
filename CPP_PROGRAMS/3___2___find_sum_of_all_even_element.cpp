// To find sum of all even element
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value... ";
    cin >> n;
    int i = 0;
    int sum = 0;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }

    cout << sum << endl;
    return 0;
}
