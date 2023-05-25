/*
    Pattern
    1  2  3  4  5  5  4  3  2  1
    1  2  3  4  *  *  4  3  2  1
    1  2  3  *  *  *  *  3  2  1
    1  2  *  *  *  *  *  *  2  1
    1  *  *  *  *  *  *  *  *  1

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value... ";
    cin >> n;

    int i, j;
    for (i = 0; i < n; i++)
    {
        j = 0;
        for (j; j < n - i; j++)
        {

            cout << j + 1
                 << " ";
        }
        for (j; j <= n + i - 1; j++)
        {

            cout << "*"
                 << " ";
        }
        int k = 0;
        for (j; j < 2 * n; j++)
        {

            cout << n - i - k
                 << " ";
            k++;
        }

        cout << endl;
    }

    return 0;
}

/*
    Pattern
    1  2  3  4  5  *  5  4  3  2  1
    1  2  3  4  *  *  *  4  3  2  1
    1  2  3  *  *  *  *  *  3  2  1
    1  2  *  *  *  *  *  *  *  2  1
    1  *  *  *  *  *  *  *  *  *  1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value... ";
    cin >> n;

    int i, j;
    for (i = 0; i < n; i++)
    {
        j = 0;
        for (j; j < n - i; j++)
        {

            cout << j + 1
                 << " ";
        }
        for (j; j <= n + i; j++)
        {

            cout << "*"
                 << " ";
        }
        int k = 0;
        for (j; j <= 2 * n; j++)
        {

            cout << n - i - k
                 << " ";
            k++;
        }

        cout << endl;
    }

    return 0;
}

*/