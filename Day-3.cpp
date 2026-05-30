#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    // Q9------------------------------------------
    int n;
    cout << "Enter a number to check prime or not : ";
    cin >> n;
    if (n <= 1)
    {
        cout << "not a prime";
    }
    else if (n > 2)
    {
        bool prime = true;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = false;
            }
        }
        if (prime)
        {
            cout << "prime";
        }
        else
        {
            cout << "not prime";
        }
    }
    cout << endl
         << endl;
    // Q10------------------------------------------
    int beg, end;
    cout << "Enter the range to find prime no. : ";
    cin >> beg >> end;
    for (int i = beg; i <= end; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << " ";
        }
    }
    cout << endl
         << endl;
    // Q11------------------------------------------
    int n1, n2, GCD;
    cout << "Enter 2 numbers to find GCD : ";
    cin >> n1 >> n2;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            GCD = i;
        }
    }
    cout << "GCD : " << GCD;
    cout << endl
         << endl;

    // Q12------------------------------------------
    int n3, n4, LCM;
    cout << "Enter 2 numbers to find LCM : ";
    cin >> n3 >> n4;
    int l = max(n3, n4);

    while (true)
    {
        if (l % n3 == 0 && l % n4 == 0)
        {
            LCM = l;
            break;
        }

        l++;
    }
    cout << "LCM : " << LCM;
    cout << endl
         << endl;
    return 0;
}