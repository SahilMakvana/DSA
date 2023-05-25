/*
    Number of 1 Bits (Humming Weight)
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Value... ";
    cin >> n;
    int count = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = (n >> 1);
    }
    cout << count << endl;
    return 0;
}
