/*
    Infinite Loop with Switch Case Statement
    exit()
    _Exit()
*/
#include <iostream>
using namespace std;

int main()
{
    int num = 1;

    while (1)
    {
        switch (num)
        {
        case 1:
            cout << "First" << endl;
            // break;
            exit(10);

        case 2:
            cout << "Second" << endl;
            // break;
            _Exit(10);

        default:
            cout << "This is Default Case" << endl;
        }
        // break;
    }

    return 0;
}
