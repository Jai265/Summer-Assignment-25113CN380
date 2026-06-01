#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}
int main()
{
    // Q17-------------------------------------------------------
    int num, sum = 0;
    cout << "Enter a number to check perfect or not : ";
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        cout << "Perfect number" << endl;
    }
    else
    {
        cout << "Not Perfect number" << endl;
    }
    cout << endl;

    // Q17-------------------------------------------------------
    int num1;
    cout << "Enter a number to find strong number or not : ";
    cin >> num1;
    int temp = num1, digits, sum1 = 0;
    do
    {
        digits = temp % 10;
        sum1 = sum1 + factorial(digits);
        temp /= 10;
    } while (temp > 0);
    if (sum1 == num1)
    {
        cout << "Strong Number" << endl;
    }
    else
    {
        cout << "Not strong number" << endl;
    }

    // Q18-------------------------------------------------------
    int num2;
    cout << "Enter a number to find its factors : ";
    cin >> num2;
    cout << "Factors of " << num2 << " Are : " << endl
         << endl;
    for (int i = 1; i <= num2; i++)
    {
        if (num2 % i == 0)
        {
            cout << i << endl;
        }
    }
    cout << endl;

    // Q19-------------------------------------------------------
    int num3, temp2 = 1;
    cout << "Enter a number to find largest Prime factor : ";
    cin >> num3;

    int temp1 = num3;

    for (int i = 2; i <= temp1; i++)
    {
        while (num3 % i == 0)
        {
            temp2 = i;
            num3 /= i;
        }
    }

    cout << "Largest prime factor is : " << temp2;
    return 0;
}