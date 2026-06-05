#include <iostream>
using namespace std;
int main()
{
    // Q33 Write a program to Print reverse star pattern.
    int num;
    cout << "Enter the number of rows : ";
    cin >> num;
    for (int i = num; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Q34 Write a program to Print reverse number triangle
    int num1;
    cout << "Enter the number of rows : ";
    cin >> num1;
    for (int i = num1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    // Q35 Write a program to Print repeated character pattern.
    int num2;
    char k = 'A';
    cout << "Enter the number of rows : ";
    cin >> num2;
    for (int i = 1; i <= num2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k;
        }
        k++;
        cout << endl;
    }

    // Q36 Write a program to Print hollow square pattern.
    int num3;
    cout << "Enter the number of rows : ";
    cin >> num3;

    for (int i = 1; i <= num3; i++)
    {
        for (int j = 1; j <= num3; j++)
        {
            if (i == 1 || i == num3 || j == 1 || j == num3)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}