/*
    Calculator in Switch Case Statement
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    cout << "Enter the value of a" << endl;
    cin >> a;

    cout << "Enter the value of b" << endl;
    cin >> b;

    cout << "Enter the operator" << endl;
    cin >> op;

    // It will calculate below expression and then check case
    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;

    case '*':
        cout << (a * b) << endl;
        break;

    case '/':
        cout << (a / b) << endl;
        break;

    case '%':
        cout << (a % b) << endl;
        break;

    default:
        cout << "Please enter valid operator" << endl;
    }

    return 0;
}
