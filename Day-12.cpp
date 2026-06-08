#include <iostream>
#include <cmath>
using namespace std;

// Q45 Write a program to Write function for palindrome.
bool isPalindrome(int n)
{
    int original = n, reverse = 0;

    while (n > 0)
    {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }

    return original == reverse;
}

// Q46 Write a program to Write function for Armstrong.
bool isArmstrong(int n)
{
    int original = n, digits = 0, sum = 0;
    int temp = n;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

// Q47 Write a program to Write function for Fibonacci
bool isPerfect(int n)
{
    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}

// Q48 Write a program to Write function for perfect number.
void fibonacci(int n)
{
    int a = 0, b = 1;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}
int main()
{
    int num, num1, num2, num3;
    cout << "Enter a number to check palindrome or not : ";
    cin >> num;

    cout << "Enter a number to check armstrong or not : ";
    cin >> num1;

    cout << "Enter a number to check perfect or not : ";
    cin >> num3;

    if (isPalindrome(num))
        cout << num << " is a Palindrome Number\n";
    else
        cout << num << " is not a Palindrome Number\n";

    if (isArmstrong(num1))
        cout << num1 << " is an Armstrong Number\n";
    else
        cout << num1 << " is not an Armstrong Number\n";

    if (isPerfect(num3))
        cout << num3 << " is a Perfect Number\n";
    else
        cout << num3 << " is not a Perfect Number\n";

    cout << "\nEnter number of terms for Fibonacci Series: ";
    cin >> num2;

    fibonacci(num2);

    return 0;
}