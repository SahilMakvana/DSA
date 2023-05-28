/*
    Total amount of notes in Switch Case Statement
*/
#include <iostream>
using namespace std;

int main()
{
    int amt, n100, n50, n20, n1;
    n100 = n50 = n20 = n1 = 0;

    cout << "Enter the operator" << endl;
    cin >> amt;

    // Using switch case
    switch (amt >= 100)
    {
    case 1:
        n100 = amt / 100;
        amt = amt % 100;
        break;
    }
    switch (amt >= 50)
    {
    case 1:
        n50 = amt / 50;
        amt = amt % 50;
        break;
    }
    switch (amt >= 20)
    {
    case 1:
        n20 = amt / 20;
        amt = amt % 20;
        break;
    }
    switch (amt >= 1)
    {
    case 1:
        n1 = amt / 1;
        amt = amt % 1;
        break;
    }
    cout << "100: " << n100 << endl;
    cout << "50 : " << n50 << endl;
    cout << "20 : " << n20 << endl;
    cout << "1  : " << n1 << endl;

    // Without using switch case
    cout << "No of 100 notes: " << (amt / 100) << endl;
    amt = amt % 100;

    cout << "No of 50 notes: " << (amt / 50) << endl;
    amt = amt % 50;

    cout << "No of 20 notes: " << (amt / 20) << endl;
    amt = amt % 20;

    cout << "No of 1 notes: " << (amt / 1) << endl;
    amt = amt % 1;

    return 0;
}
