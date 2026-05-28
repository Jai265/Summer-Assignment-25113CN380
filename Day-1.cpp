#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // Q1----------------------------------------------------------
    int n, sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl
         << endl;

    // Q2----------------------------------------------------------
    int num;
    cout << "Enter a number to get its multiplication table: ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl
             << endl;
    }

    // Q3----------------------------------------------------------
    int num1, fact = 1;
    cout << "Enter a number to get its factorial: ";
    cin >> num1;
    for (int i = 1; i <= num1; i++)
    {
        fact *= i;
    }
    cout << "The factorial of " << num1 << " is: " << fact << endl
         << endl;

    // Q4----------------------------------------------------------
    int num2;
    cout << "Enter a number to count its digits: ";
    cin >> num2;
    int count = 0;
    while (num2 > 0)
    {
        num2 /= 10;
        count++;
    }
    cout << "The number of digits is: " << count << endl
         << endl;

    return 0;
}