#include <iostream>
using namespace std;
// Q41 Write a program to Write function to find sum of two numbers.
int add(int a, int b)
{
    return (a + b);
}

// Q42 Write a program to Write function to find maximum.
int max(int x, int y)
{
    if (x > y)
        return x;
    else if (y > x)
        return y;
    else
        return x;
}

// Q43 Write a program to Write function to check prime.
bool isPrime(int x)
{
    if (x < 2)
        return false;
    else
    {
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

// Q44 Write a program to Write function to find factorial.
int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}

int main()
{
    int a, b, c, d, e, f;
    cout << "Enter two numbers to find there sum : ";
    cin >> a >> b;
    cout << "Addition : " << add(a, b) << endl;

    cout << "Enter two number two find maximum : ";
    cin >> c >> d;
    cout << "Maximum of two is : " << max(c, d) << endl;

    cout << "Enter a number to check prime or not : ";
    cin >> e;
    cout << isPrime(e) << endl;

    cout << "Enter a number to check factorial : ";
    cin >> f;
    cout << factorial(f) << endl;

    return 0;
}