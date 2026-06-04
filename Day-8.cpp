#include <iostream>
using namespace std;
int main()
{
    // Q29 Write a program to Print half pyramid pattern
    int num;
    cout << "Enter the number of rows : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    // Q30 Write a program to Print number triangle.
    int num1;
    cout << "Enter the number of rows : ";
    cin >> num1;

    for (int i = 0; i < num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }

    // Q31 Write a program to Print charecter triangle.
    int num2;
    cout << "Enter the number of rows : ";
    cin >> num2;

    for (int i = 0; i < num2; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }

    // Q32 Write a program to Print number triangle.
    int num3;
    cout << "Enter the number of rows : ";
    cin >> num3;

    for (int i = 0; i < num3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << i << " ";
        }
        cout << endl;
    }

    return 0;
}