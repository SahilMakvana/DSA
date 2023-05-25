/*
    Bitwise Operator
    AND -> &
    OR  -> |
    NOT -> ~
    XOR -> ^

*/

#include <iostream>
using namespace std;

int main()
{
    int x = 4;
    int y = 6;

    cout << "X&Y: " << (x & y) << endl;
    cout << "X|Y: " << (x | y) << endl;
    cout << "~X: " << (~x) << endl;
    cout << "X^Y: " << (x ^ y) << endl;

    return 0;
}