#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Q13---------------------------------------------------
    int num;
    cout << "Enter a number to find fibonaci series : ";
    cin >> num;
    if (num <= 1)
    {
        cout << num;
    }
    else
    {
        int a = 0, b = 1;
        cout << a << "\n"
             << b << endl;

        for (int i = 2; i <= num; i++)
        {
            int c = a + b;
            a = b;
            b = c;
            cout << c << endl;
        }
    }
    cout << endl;

    // Q14---------------------------------------------------
    int num1;
    cout << "Enter a number to find nth fibonacci term : ";
    cin >> num1;

    if (num1 == 1)
    {
        cout << 0;
    }

    else if (num1 == 2)
    {
        cout << 1;
    }

    else
    {
        int a = 0, b = 1;
        for (int i = 3; i <= num1; i++)
        {
            int c = a + b;
            a = b;
            b = c;
        }
        cout << b << endl;
    }
    cout << endl;

    // Q15---------------------------------------------------
    int num2;
    cout << "Enter a number to check armstrong or not : ";
    cin >> num2;
    int count = 0;
    int temp = num2;
    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    int temp1 = num2, sum = 0, digit;
    while (temp1 > 0)
    {
        digit = temp1 % 10;
        sum = sum + int(pow(digit, count));
        temp1 /= 10;
    }
    if (sum == num2)
    {
        cout << num2 << " is armstrong number!";
    }
    else
    {
        cout << "Not armstrong";
    }
    cout << endl;

    // Q16---------------------------------------------------
    int beg, end;
    cout << "Enter the range to find armstrong : ";
    cin >> beg >> end;
    for (int i = beg; i <= end; i++)
    {
        int num3 = i, count1 = 0;
        while (num3 > 0)
        {
            num3 /= 10;
            count1++;
        }
        int num4 = i, sum1 = 0, digits1;
        while (num4 > 0)
        {
            digits1 = num4 % 10;
            sum1 = sum1 + pow(digits1, count1);
            num4 /= 10;
        }
        if (sum1 == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}