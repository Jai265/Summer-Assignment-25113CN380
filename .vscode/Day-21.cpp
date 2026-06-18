#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Q81 Write a program to Find string length without strlen().
    int count = 0;
    string str;
    cout << "Enter a string without any spaces : ";
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        count++;
    }
    cout << "LENGTH OF STRING - " << count << endl;

    // Q82 Write a program to Reverse a string.
    string str1;
    cout << "Enter a string : ";
    cin >> str1;

    for (int i = str1.size() - 1; i >= 0; i--)
    {
        cout << str1[i];
    }
    cout << endl;

    // Q83 Write a program to Count vowels and consonants.
    string str2;
    int vowel_count = 0;
    int total_count = 0;
    cout << "Enter a string without any spaces : ";
    cin >> str2;
    for (int i = 0; i < str2.size(); i++)
    {
        total_count++;
    }
    for (int i = 0; i < str2.size(); i++)
    {
        if (str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u' || str2[i] == 'A' || str2[i] == 'E' || str2[i] == 'I' || str2[i] == 'O' || str2[i] == 'U')
        {
            vowel_count++;
        }
    }

    cout << "number of vowels are : " << vowel_count << endl;
    cout << "number of consonants are : " << total_count - vowel_count << endl;

    // Q84 Write a program to Convert lowercase to uppercase.
    string str3;
    cout << "Enter a string without any spaces : ";
    cin >> str3;

    for (int i = 0; i < str3.size(); i++)
    {
        if (str3[i] >= 'a' && str3[i] <= 'z')
        {
            str3[i] = str3[i] - 32;
        }
    }
    cout << str3 << endl;
    return 0;
}