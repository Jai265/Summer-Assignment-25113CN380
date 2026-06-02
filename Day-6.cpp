#include <iostream>
using namespace std;
int main()
{
    // Q21 - Write a program to Convert decimal to binary.
    int num, temp, bin = 0, place = 1;
    cout << "Enter a number to convert it to decimal number : ";
    cin >> num;
    while (num > 0)
    {
        temp = num % 2;
        bin += temp * place;
        place *= 10;
        num /= 2;
    }
    cout << "Binary = " << bin << endl;

    // Q22 - Write a program to Convert binary to decimal.
    int bin1, place1 = 1, num1 = 0;
    cout << "Enter a number in binary form : ";
    cin >> bin1;
    while (bin1 > 0)
    {
        int temp1 = bin1 % 10;
        num1 += temp1 * place1;
        place1 *= 2;
        bin1 /= 10;
    }
    cout << "Decimal form : " << num1 << endl;

    // Q23 - Write a program to Count set bits in a number.
    int num2, temp2, count = 0;
    cout << "Enter a binary number : ";
    cin >> num2;

    while (num2 > 0)
    {
        temp2 = num2 % 10;
        if (temp2 == 1)
        {
            count++;
        }
        num2 /= 10;
    }

    cout << "Number of set bits are : " << count << endl;

    // Q24 - Write a program to Find x^n without pow().
    int num3, pow, product = 1;
    cout << "Enter a number and power : ";
    cin >> num3 >> pow;
    for (int i = 1; i <= pow; i++)
    {
        product = product * num3;
    }
    cout << num3 << " to power " << pow << " is : " << product;
    return 0;
}