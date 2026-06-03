#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;

    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    else
        return ((n % 10) + sumOfDigits(n / 10));
}

int reverseNumber(int n, int rev = 0)
{
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}
int main()
{
    // Q25 Write a program to Recursive factorial.-----------------------------------
    int num, num1, num2, num3;
    cout << "Number to find the factorial : ";
    cin >> num;
    cout << "Factorial using Recursion : " << factorial(num) << endl;

    // Q26 Write a program to Recursive Fibonacci.------------------------------------
    cout << "Enter a number to find its fibonacci : ";
    cin >> num1;
    cout << "Fibonacci using Recursion : " << endl;

    for (int i = 0; i <= num1; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    // Q27 Write a program to Recursive sum of digits.----------------------------------
    cout << "Enter a number to print sum of its digits : ";
    cin >> num2;
    int sum = sumOfDigits(num2);
    cout << "Sum of digits : " << sum << endl;

    // Q28 Write a program to Recursive reverse number.-----------------------------------
    cout << "Enter a number to print its reverse : ";
    cin >> num3;
    cout << "Reverse of number : " << reverseNumber(num3) << endl;

    return 0;
}