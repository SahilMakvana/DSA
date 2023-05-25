/*
    Left Shift
    X << 1    --> X*2
    Y << 2    --> Y*2*2

    Right Shift
    Z >> 1    --> Z/2
    W >> 2    --> (W/2)/2
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 4;
    int y = 6;

    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;

    return 0;
}