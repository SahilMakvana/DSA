/*
    Compliment of Base 10 INT
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Value... ";
    cin >> n;
    int ans = 0;
    int i = 0;

    while (n != 0)
    {

        int bit = n & 1;

        // We can not do directly ~bit. Because it will not all 32 bit and becomes negative value
        if (bit == 1)
        {
            bit = 0;
        }
        else
        {
            bit = 1;
        }
        ans = bit * pow(2, i) + ans;
        n = n >> 1;
        i++;
    }

    cout << ans << endl;
    return 0;
}
