#include <iostream>
using namespace std;
int main()
{
    // Q5--------------------------------------------------------
    int n, n1;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        n1 = n % 10;
        sum += n1;
        n /= 10;
    }
    cout << "Sum of digits of numbers is : " << sum << endl
         << endl;

    // Q6--------------------------------------------------------
    int num, sum1 = 0, rev;
    cout << "Enter a number : ";
    cin >> num;
    while (num > 0)
    {
        rev = num % 10;
        sum1 = sum1 * 10 + rev;
        num /= 10;
    }
    cout << "reverse number is : " << sum1 << endl
         << endl;

    // Q7--------------------------------------------------------
    int num1, n2;
    cout << "Enter a number: ";
    cin >> num1;
    int product = 1;
    while (num1 != 0)
    {
        n2 = num1 % 10;
        product *= n2;
        num1 /= 10;
    }
    cout << "Product of digits of numbers is : " << product << endl
         << endl;

    // Q8--------------------------------------------------------
    int num2, sum2 = 0, rev1;
    cout << "Enter a number : ";
    cin >> num2;
    int num3 = num2;
    while (num2 > 0)
    {
        rev1 = num2 % 10;
        sum2 = sum2 * 10 + rev1;
        num2 /= 10;
    }
    if (num3 == sum2)
    {
        cout << "Number is palindrome!";
    }
    else
    {
        cout << "Not palindrome number";
    }

    return 0;
}