// To convert F to C
#include <iostream>
using namespace std;

int main()
{
    float F;
    cout << "Enter the value... ";
    cin >> F;

    float C = (F - 32) * 5 / 9;
    cout << C << endl;

    return 0;
}
