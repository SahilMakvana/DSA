/*
    Expression in Switch Case Statement
*/
#include <iostream>
using namespace std;

int main()
{
    int num = 1;

    // It will calculate below expression and then check case
    switch (2 * num)
    {
    case 1:
        cout << "First" << endl;
        break;

    case 2:
        cout << "Second" << endl;
        break;

    default:
        cout << "This is Default Case" << endl;
    }

    return 0;
}
