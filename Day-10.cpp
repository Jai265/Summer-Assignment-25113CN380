#include <iostream>
using namespace std;
int main()
{
    // Q37 Write a program to Print star pyramid.
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Q38 Write a program to Print reverse pyramid.
    int n1;
    cout << "Enter the number of rows : ";
    cin >> n1;
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * (n1 - i) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Q39 Write a program to Print star pyramid.

    int n2;
    cout << "Enter the number of rows : ";
    cin >> n2;

    for (int i = 1; i <= n2; i++)
    {
        for (int j = 1; j <= n2 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    // 40 WAP to print charecter pyramid
    int n3;
    cout << "Enter the number of rows : ";
    cin >> n3;

    for (int i = 1; i <= n3; i++)
    {
        for (int j = 1; j <= n3 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << char('A' + j);
        }
        for (int j = i - 2; j >= 0; j--)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }

    return 0;
}